import unittest

import numpy

import cupy
from cupy import testing
import cupyx

try:
    import scipy.sparse
    scipy_available = True
except ImportError:
    scipy_available = False


@testing.gpu
class TestGetArrayModule(unittest.TestCase):

    def test_get_array_module_1(self):
        n1 = numpy.array([2], numpy.float32)
        c1 = cupy.array([2], numpy.float32)
        csr1 = cupyx.scipy.sparse.csr_matrix((5, 3), dtype=numpy.float32)

        self.assertIs(numpy, cupy.get_array_module())
        self.assertIs(numpy, cupy.get_array_module(n1))
        self.assertIs(cupy, cupy.get_array_module(c1))
        self.assertIs(cupy, cupy.get_array_module(csr1))

        self.assertIs(numpy, cupy.get_array_module(n1, n1))
        self.assertIs(cupy, cupy.get_array_module(c1, c1))
        self.assertIs(cupy, cupy.get_array_module(csr1, csr1))

        self.assertIs(cupy, cupy.get_array_module(n1, csr1))
        self.assertIs(cupy, cupy.get_array_module(csr1, n1))
        self.assertIs(cupy, cupy.get_array_module(c1, n1))
        self.assertIs(cupy, cupy.get_array_module(n1, c1))
        self.assertIs(cupy, cupy.get_array_module(c1, csr1))
        self.assertIs(cupy, cupy.get_array_module(csr1, c1))

        if scipy_available:
            csrn1 = scipy.sparse.csr_matrix((5, 3), dtype=numpy.float32)

            self.assertIs(numpy, cupy.get_array_module(csrn1))
            self.assertIs(cupy, cupy.get_array_module(csrn1, csr1))
            self.assertIs(cupy, cupy.get_array_module(csr1, csrn1))
            self.assertIs(cupy, cupy.get_array_module(c1, csrn1))
            self.assertIs(cupy, cupy.get_array_module(csrn1, c1))
            self.assertIs(numpy, cupy.get_array_module(n1, csrn1))
            self.assertIs(numpy, cupy.get_array_module(csrn1, n1))



class MockArray(numpy.lib.mixins.NDArrayOperatorsMixin):
    __array_priority__ = 20  # less than cupy.ndarray.__array_priority__

    def __array_ufunc__(self, ufunc, method, *inputs, **kwargs):
        assert method == "call"
        name = ufunc.__name__
        return name, inputs, kwargs


@testing.gpu
class TestArrayUfunc:

    def test_add(self):
        x = cupy.array([3, 7])
        y = MockArray()
        print(x + y)
        print(y + x)


class MockArray2:
    __array_ufunc__ = None

    def __add__(self, other):
        return 'add'

    def __radd__(self, other):
        return 'radd'

    def __matmul__(self, other):
        return 'matmul'

    def __rmatmul__(self, other):
        return 'rmatmul'


@testing.gpu
class TestArrayUfuncOptout:

    def test_add(self):
        x = cupy.array([3, 7])
        y = MockArray2()
        assert x + y == 'radd'
        assert y + x == 'add'

    def test_matmul(self):
        x = cupy.array([3, 7])
        y = MockArray2()
        assert x @ y == 'rmatmul'
        assert y @ x == 'matmul'
