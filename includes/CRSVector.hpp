#ifndef __CERES_VECTOR_HPP__
#define __CERES_VECTOR_HPP__
#include "CRSStructures.hpp"
#include <xmmintrin.h>
#include <emmintrin.h>

namespace Ceres {
	typedef __m128 Vector;

	struct alignas(16) VectorF32 {
		union {
			Float32_4 F32;
			Vector vec;
		};

		VectorF32() = default;
		constexpr VectorF32(float x, float y, float z, float w) noexcept : F32{ x, y, z, w } {}
		constexpr VectorF32(const Float32_4& f32) noexcept : F32(f32) {}
		constexpr VectorF32(const Vector& v) noexcept : vec(v) {}

		constexpr operator Vector() const noexcept { return vec; }
		constexpr operator Float32_4() const noexcept { return F32; }

		constexpr VectorF32& operator=(const Vector& vector) noexcept {
			this->vec = vector;
			return *this;
		}
	};

	inline Vector operator+(const Vector& vec1, const Vector& vec2) noexcept {
		return _mm_add_ps(vec1, vec2);
	}

	inline Vector operator*(const Vector& vec1, const Vector& vec2) noexcept {
		return _mm_mul_ps(vec1, vec2);
	}

	inline Vector operator-(const Vector& vec1, const Vector& vec2) noexcept {
		return _mm_sub_ps(vec1, vec2);
	}

	inline Vector operator/(const Vector& vec1, const Vector& vec2) noexcept {
		return _mm_div_ps(vec1, vec2);
	}

	[[nodiscard]]
	inline Vector LoadFloat32_2(const Float32_2& f32_2) noexcept {
		return _mm_castpd_ps(_mm_load_sd(reinterpret_cast<const double*>(&f32_2.x)));
	}

	[[nodiscard]]
	inline Vector LoadFloat32_3(const Float32_3& f32_3) noexcept {
		__m128 xy = _mm_castpd_ps(_mm_load_sd(reinterpret_cast<const double*>(&f32_3.x)));
		__m128 z = _mm_load_ss(&f32_3.z);
		return _mm_movehl_ps(xy, z);
	}

	[[nodiscard]]
	inline Vector LoadFloat32_4(const Float32_4& f32_4) noexcept {
		return _mm_castpd_ps(_mm_load_pd(reinterpret_cast<const double*>(&f32_4.x)));
	}
}

#endif
