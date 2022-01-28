#ifndef __CERES_COLOR_HPP__
#define __CERES_COLOR_HPP__
#include <cstdint>
#include "CRSVector.hpp"

namespace Ceres {
	namespace Color {
		constexpr Float32_4 Black = { 0.0f, 0.0f, 0.0f, 1.0f };
		constexpr Float32_4 Blue = { 0.0f, 0.0f, 1.0f, 1.0f };
		constexpr Float32_4 Cyan = { 0.0f, 1.0f, 1.0f, 1.0f };
		constexpr Float32_4 Fuchsia = { 1.0f, 0.0f, 1.0f, 1.0f };
		constexpr Float32_4 Green = { 0.0f, 0.501960814f, 0.0f, 1.0f };
		constexpr Float32_4 LimeGreen = { 0.0f, 1.0f, 0.0f, 1.0f };
		constexpr Float32_4 Red = { 1.0f, 0.0f, 0.0f, 1.0f };
		constexpr Float32_4 White = { 1.0f, 1.0f, 1.0f, 1.0f };
		constexpr Float32_4 Yellow = { 1.0f, 1.0f, 0.0f, 1.0f };
	}
}

#endif
