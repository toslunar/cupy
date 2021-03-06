#ifndef INCLUDE_GUARD_CUDA_CUPY_CUSPARSE_H
#define INCLUDE_GUARD_CUDA_CUPY_CUSPARSE_H

#include <cuda.h>
#include <cusparse.h>

#if !defined(CUSPARSE_VERSION)
#if CUDA_VERSION < 10000
#define CUSPARSE_VERSION CUDA_VERSION // CUDA_VERSION used instead
#else
#define CUSPARSE_VERSION 10000
#endif
#endif // #if !defined(CUSPARSE_VERSION)

#if CUSPARSE_VERSION < 9000
// Functions added in CUDA 9.0
cusparseStatus_t cusparseSgtsv2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsv2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsv2_nopivot_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2_nopivot_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2_nopivot_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2_nopivot_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsv2_nopivot(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2_nopivot(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2_nopivot(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2_nopivot(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsv2StridedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2StridedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2StridedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2StridedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsv2StridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsv2StridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsv2StridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsv2StridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
#endif // #if CUSPARSE_VERSION < 9000

#if CUSPARSE_VERSION < 9020
// Functions added in CUDA 9.2
typedef void* csrsm2Info_t;

cusparseStatus_t cusparseCreateCsrsm2Info(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseDestroyCsrsm2Info(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrsm2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseDcsrsm2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseCcsrsm2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseZcsrsm2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrsm2_analysis(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseDcsrsm2_analysis(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseCcsrsm2_analysis(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseZcsrsm2_analysis(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrsm2_solve(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseDcsrsm2_solve(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseCcsrsm2_solve(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
cusparseStatus_t cusparseZcsrsm2_solve(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseXcsrsm2_zeroPivot(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgtsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgtsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgtsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgtsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgpsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgpsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgpsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgpsvInterleavedBatch_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSgpsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDgpsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCgpsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZgpsvInterleavedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrgeam2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrgeam2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrgeam2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrgeam2_bufferSizeExt(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseXcsrgeam2Nnz(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrgeam2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrgeam2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrgeam2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrgeam2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

#endif // #if CUSPARSE_VERSION < 9020

#if (CUSPARSE_VERSION < 10200) || (CUSPARSE_VERSION < 11000 && defined(_WIN32))
// Types, macro and functions added in cuSparse 10.2
// Windows support added in cuSparse 11.0

// cuSPARSE generic API
typedef void* cusparseSpVecDescr_t;
typedef void* cusparseDnVecDescr_t;
typedef void* cusparseSpMatDescr_t;
typedef void* cusparseDnMatDescr_t;

typedef enum {} cusparseIndexType_t;
typedef enum {} cusparseFormat_t;
typedef enum {} cusparseOrder_t;
typedef enum {} cusparseSpMVAlg_t;
typedef enum {} cusparseSpMMAlg_t;

cusparseStatus_t cusparseCreateSpVec(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDestroySpVec(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVecGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVecGetIndexBase(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVecGetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVecSetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCreateCoo(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCreateCooAoS(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCreateCsr(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDestroySpMat(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCooGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCooAoSGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCsrGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatGetFormat(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatGetIndexBase(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatGetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatSetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatGetStridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMatSetStridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCreateDnVec(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDestroyDnVec(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnVecGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnVecGetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnVecSetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCreateDnMat(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDestroyDnMat(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnMatGet(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnMatGetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnMatSetValues(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnMatGetStridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDnMatSetStridedBatch(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVV_bufferSize(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpVV(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMV_bufferSize(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMV(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMM_bufferSize(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseSpMM(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseConstrainedGeMM_bufferSize(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseConstrainedGeMM(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

#endif // #if CUSPARSE_VERSION < 10200

#if CUSPARSE_VERSION < 10200
// Functions added in cuSparse 10.2

// CSR2CSC
typedef enum {} cusparseCsr2CscAlg_t;

cusparseStatus_t cusparseCsr2cscEx2_bufferSize(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCsr2cscEx2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
#endif // #if CUSPARSE_VERSION < 10200

#if CUSPARSE_VERSION >= 11000
// Functions deleted in cuSparse 11.0

// cuSPARSE Level2 Function
cusparseStatus_t cusparseScsrmv(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrmv(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrmv(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrmv(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

// cuSPARSE Level3 Function
cusparseStatus_t cusparseScsrmm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrmm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrmm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrmm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrmm2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrmm2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrmm2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrmm2(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

// cuSPARSE Extra Function
cusparseStatus_t cusparseXcsrgeamNnz(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrgeam(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrgeam(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrgeam(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrgeam(...) {
  return CUSPARSE_STATUS_SUCCESS;
}


cusparseStatus_t cusparseXcsrgemmNnz(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsrgemm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsrgemm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsrgemm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsrgemm(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

// cuSPARSE Format Convrsion
cusparseStatus_t cusparseXcsr2coo(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseScsr2csc(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseDcsr2csc(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseCcsr2csc(...) {
  return CUSPARSE_STATUS_SUCCESS;
}

cusparseStatus_t cusparseZcsr2csc(...) {
  return CUSPARSE_STATUS_SUCCESS;
}
#endif // #if CUSPARSE_VERSION >= 11000

#endif  // INCLUDE_GUARD_CUDA_CUPY_CUSPARSE_H
