#ifndef __CERES_COLOR_HPP__
#define __CERES_COLOR_HPP__
#include <cstdint>
#include "CRSVector.hpp"

namespace Ceres {
	namespace Color {
		constexpr VectorF32 red = { 1.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 green = { 0.0f, 1.0f, 0.0f, 1.0f };
		constexpr VectorF32 blue = { 0.0f, 0.0f, 1.0f, 1.0f };
		constexpr VectorF32 black = { 0.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 white = { 1.0f, 1.0f, 1.0f, 1.0f };
	}
}

#endif
