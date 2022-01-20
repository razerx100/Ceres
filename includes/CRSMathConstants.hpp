#ifndef __CERES_MATH_CONSTANTS_HPP__
#define __CERES_MATH_CONSTANTS_HPP__
#include <cstdint>

namespace Ceres {
    namespace Math {
        constexpr float PI = 3.141592654f;
        constexpr float TWO_PI = 6.283185307f;
        constexpr float ONE_DIV_PI = 0.318309886f;
        constexpr float ONE_DIV_TWO_PI = 0.159154943f;
        constexpr float PI_DIV_TWO = 1.570796327f;
        constexpr float PI_DIV_FOUR = 0.785398163f;

        constexpr size_t operator"" _B(unsigned long long number) {
            return static_cast<size_t>(number);
        }

        constexpr size_t operator"" _KB(unsigned long long number) {
            return static_cast<size_t>(number * 1024u);
        }

        constexpr size_t operator"" _MB(unsigned long long number) {
            return static_cast<size_t>(number * 1024u * 1024u);
        }

        constexpr size_t operator"" _GB(unsigned long long number) {
            return static_cast<size_t>(number * 1024u * 1024u * 1024u);
        }

        constexpr size_t Align(size_t address, size_t alignment) noexcept {
            return (address + (alignment - 1u)) & ~(alignment - 1u);
        }
    }
};
#endif
