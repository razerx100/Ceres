#ifndef __CERES_COLOR_HPP__
#define __CERES_COLOR_HPP__
#include <cstdint>
#include "CRSVector.hpp"

namespace Ceres {
	namespace Color {
		constexpr VectorF32 Black = { 0.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 Blue = { 0.0f, 0.0f, 1.0f, 1.0f };
		constexpr VectorF32 Cyan = { 0.0f, 1.0f, 1.0f, 1.0f };
		constexpr VectorF32 Fuchsia = { 1.0f, 0.0f, 1.0f, 1.0f };
		constexpr VectorF32 Green = { 0.0f, 0.501960814f, 0.0f, 1.0f };
		constexpr VectorF32 LimeGreen = { 0.0f, 1.0f, 0.0f, 1.0f };
		constexpr VectorF32 Red = { 1.0f, 0.0f, 0.0f, 1.0f };
		constexpr VectorF32 White = { 1.0f, 1.0f, 1.0f, 1.0f };
		constexpr VectorF32 Yellow = { 1.0f, 1.0f, 0.0f, 1.0f };
	}
}

#endif
