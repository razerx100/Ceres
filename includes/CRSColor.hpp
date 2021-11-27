#ifndef __CERES_COLOR_HPP__
#define __CERES_COLOR_HPP__
#include <cstdint>
#include "CRSVector.hpp"

namespace Ceres {
	namespace Color {
		constexpr VectorF32 red = Float32_4{ 1.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 green = Float32_4{ 0.0f, 1.0f, 0.0f, 1.0f };
		constexpr VectorF32 blue = Float32_4{ 0.0f, 0.0f, 1.0f, 1.0f };
		constexpr VectorF32 black = Float32_4{ 0.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 white = Float32_4{ 1.0f, 1.0f, 1.0f, 1.0f };
	}
}

#endif
