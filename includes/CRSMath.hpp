#ifndef __CERES_MATH_HPP__
#define __CERES_MATH_HPP__
#include <cstdint>
#include <limits>
#include <cmath>

namespace Ceres {
    namespace Math {
        constexpr float PI = 3.141592654f;
        constexpr float TWO_PI = 6.283185307f;
        constexpr float ONE_DIV_PI = 0.318309886f;
        constexpr float ONE_DIV_TWO_PI = 0.159154943f;
        constexpr float PI_DIV_TWO = 1.570796327f;
        constexpr float PI_DIV_FOUR = 0.785398163f;

        constexpr size_t Align(size_t address, size_t alignment) noexcept {
            return (address + (alignment - 1u)) & ~(alignment - 1u);
        }

        template<typename T, typename Q>
        bool nearlyEqual(T float1, Q float2) noexcept {
            if constexpr (sizeof(T) > sizeof(Q)) {
                T num1 = float1;
                T num2 = static_cast<T>(float2);

                return std::fabs(num1 - num2)
                    < std::numeric_limits<T>::epsilon()
                    * std::max(
                        std::fabs(num1) + std::fabs(num2),
                        std::numeric_limits<T>::max()
                    );
            }
            else {
                Q num1 = static_cast<Q>(float1);
                Q num2 = float2;

                return std::fabs(num1 - num2)
                    < std::numeric_limits<Q>::epsilon()
                    * std::max(
                        std::fabs(num1) + std::fabs(num2),
                        std::numeric_limits<Q>::max()
                    );
            }
        }
    }
};

constexpr size_t operator"" _B(unsigned long long number) noexcept {
    return static_cast<size_t>(number);
}

constexpr size_t operator"" _KB(unsigned long long number) noexcept {
    return static_cast<size_t>(number * 1024u);
}

constexpr size_t operator"" _MB(unsigned long long number) noexcept {
    return static_cast<size_t>(number * 1024u * 1024u);
}

constexpr size_t operator"" _GB(unsigned long long number) noexcept {
    return static_cast<size_t>(number * 1024u * 1024u * 1024u);
}

constexpr long double operator"" _Radian(long double degree) noexcept {
    return (1. / 180) * Ceres::Math::PI * degree;
}

constexpr long double operator"" _Degree(long double radian) noexcept {
    return 180. / Ceres::Math::PI * radian;
}
#endif
