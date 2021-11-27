#ifndef __CERES_VECTOR_HPP__
#define __CERES_VECTOR_HPP__
#include "CRSStructures.hpp"
#include <xmmintrin.h>

namespace Ceres {
	struct alignas(16) VectorF32 {
		union {
			Float32_4 F32;
			__m128 vec;
		};
	};
}

#endif
