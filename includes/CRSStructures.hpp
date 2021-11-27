#ifndef __CERES_STRUCTURES_HPP__
#define __CERES_STRUCTURES_HPP__
#include <cstdint>

namespace Ceres {
	template<typename T>
	struct _struct4 {
		T x;
		T y;
		T z;
		T w;
	};

	typedef _struct4<float> Float32_4;
	typedef _struct4<double> Float64_4;
	typedef _struct4<std::int8_t> Int8_4;
	typedef _struct4<std::int16_t> Int16_4;
	typedef _struct4<std::int32_t> Int32_4;
	typedef _struct4<std::int64_t> Int64_4;
	typedef _struct4<std::uint8_t> Uint8_4;
	typedef _struct4<std::uint16_t> Uint16_4;
	typedef _struct4<std::uint32_t> Uint32_4;
	typedef _struct4<std::uint64_t> Uint64_4;

	template<typename T>
	struct _struct3 {
		T x;
		T y;
		T z;
	};

	typedef _struct3<float> Float32_3;
	typedef _struct3<double> Float64_3;
	typedef _struct3<std::int8_t> Int8_3;
	typedef _struct3<std::int16_t> Int16_3;
	typedef _struct3<std::int32_t> Int32_3;
	typedef _struct3<std::int64_t> Int64_3;
	typedef _struct3<std::uint8_t> Uint8_3;
	typedef _struct3<std::uint16_t> Uint16_3;
	typedef _struct3<std::uint32_t> Uint32_3;
	typedef _struct3<std::uint64_t> Uint64_3;

	template<typename T>
	struct _struct2 {
		T x;
		T y;
	};

	typedef _struct2<float> Float32_2;
	typedef _struct2<double> Float64_2;
	typedef _struct2<std::int8_t> Int8_2;
	typedef _struct2<std::int16_t> Int16_2;
	typedef _struct2<std::int32_t> Int32_2;
	typedef _struct2<std::int64_t> Int64_2;
	typedef _struct2<std::uint8_t> Uint8_2;
	typedef _struct2<std::uint16_t> Uint16_2;
	typedef _struct2<std::uint32_t> Uint32_2;
	typedef _struct2<std::uint64_t> Uint64_2;

	struct Rect {
		std::uint64_t left;
		std::uint64_t right;
		std::uint64_t top;
		std::uint64_t bottom;
	};
}

#endif
