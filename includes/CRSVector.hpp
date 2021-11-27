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

		VectorF32() = default;
		constexpr VectorF32(float x, float y, float z, float w) noexcept : F32{x, y, z, w} {}
		constexpr VectorF32(const Float32_4& f32) noexcept : F32(f32){}
		constexpr VectorF32(const __m128& v) noexcept : vec(v) {}

		constexpr operator __m128() const noexcept { return vec; }
		constexpr operator Float32_4() const noexcept { return F32; }

		inline VectorF32 operator+(const VectorF32& other) const noexcept {
			return _mm_add_ps(vec, other);
		}

		inline VectorF32 operator*(const VectorF32& other) const noexcept {
			return _mm_mul_ps(vec, other);
		}

		inline VectorF32 operator-(const VectorF32& other) const noexcept {
			return _mm_sub_ps(vec, other);
		}

		inline VectorF32 operator/(const VectorF32& other) const noexcept {
			return _mm_div_ps(vec, other);
		}
	};
}

#endif
