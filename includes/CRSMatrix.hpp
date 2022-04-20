#ifndef CERES_MATRIX_HPP_
#define CERES_MATRIX_HPP_
#include "CRSVector.hpp"

namespace Ceres {
	struct alignas(16) Matrix {
		Vector row1;
		Vector row2;
		Vector row3;
		Vector row4;

		Matrix() = default;
		constexpr Matrix(
			const Vector& v1, const Vector& v2, const Vector& v3, const Vector& v4
		) noexcept : row1(v1), row2(v2), row3(v3), row4(v4) {}
	};
}
#endif
