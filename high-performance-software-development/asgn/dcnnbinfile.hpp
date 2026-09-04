#ifndef dcnnbinfile_hpp_
#define dcnnbinfile_hpp_

#include <cstdint>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include <utility>
#include <array>

#include "tagged.hpp"

namespace dcnnasgn {

	inline constexpr std::uint8_t byteswap(std::uint8_t n) noexcept
	{
		return n;
	}

	inline constexpr std::uint16_t byteswap(std::uint16_t n) noexcept
	{
		return (n << 8) ^ (n >> 8);
	}

	inline constexpr std::uint32_t byteswap(std::uint32_t n) noexcept
	{
		return (n << 24) ^ ((n << 8) & 0xFF0000) ^ ((n >> 8) & 0xFF00) ^ (n >> 24);
	}

	template< typename T>
	inline void binary_read_be(std::istream& ifs, T& v)
	{
		ifs.read(reinterpret_cast<char*>(&v), sizeof(T));
		if constexpr (sizeof(T) != 1 && std::endian::native != std::endian::big)
		{
			v = byteswap(v);
		}
	}

	template< typename T>
	inline void binary_read_be(std::istream& ifs, T* p, std::size_t n)
	{
		ifs.read(reinterpret_cast<char*>(p), sizeof(T) * n);
		if constexpr (sizeof(T) != 1 && std::endian::native != std::endian::big)
		{
			T* e = p + n;
			for (; p != e; ++p)
			{
				*p = byteswap(*p);
			}
		}
	}

	template< typename T>
	inline void binary_read_ne(std::istream& ifs, T* p, std::size_t n)
	{
		ifs.read(reinterpret_cast<char*>(p), sizeof(T) * n);
	}

	template< typename T>
	inline void binary_write_ne(std::ostream& ofs, const T* p, std::size_t n)
	{
		ofs.write(reinterpret_cast<const char*>(p), sizeof(T) * n);
	}

	template< tagged::is_range range_t, typename indices>
	struct range_helper;

	template< tagged::is_range range_t, std::size_t ... IL>
	struct range_helper< range_t, std::index_sequence< IL ...>> {

		template< std::size_t I, typename X>
		static auto cast_one(const std::array<X, sizeof...(IL)>& a)
		{
			return tagged::range_class< typename range_t::template get_tag< I>>(a[I]);
		}

		template< typename X>
		static range_t cast(const std::array<X, sizeof...(IL)>& a)
		{
			return (... & cast_one< IL>(a));
		}

		template< typename X>
		static void print(const std::array<X, sizeof...(IL)>& a)
		{
			std::cout << "Index sizes:";
			(..., (std::cout << " " << a[IL]));
			std::cout << std::endl;
		}
	};

	template< typename E, tagged::tag ... TL>
	inline auto load_data(const std::filesystem::path& ifn)
	{
		static constexpr std::size_t dims = sizeof...(TL);
		using range_t = tagged::range_class< TL ...>;
		using vector_t = tagged::tensor_class< E, TL ...>;

		std::ifstream ifs(ifn, std::ios_base::binary);

		if (!ifs.good())
		{
			throw std::runtime_error("Cannot open file \"" + ifn.generic_string() + "\"");
		}

		ifs.seekg(0, std::ios_base::end);
		auto ifsize = ifs.tellg();
		ifs.seekg(0, std::ios_base::beg);

		//std::cout << "File size: " << ifsize << std::endl;

		std::uint16_t zero;
		binary_read_be(ifs, zero);
		//std::cout << "Zero: " << zero << std::endl;

		std::uint8_t element_bits;
		binary_read_be(ifs, element_bits);
		//std::cout << "Element bits: " << (unsigned)element_bits << std::endl;

		std::uint8_t dimensions;
		binary_read_be(ifs, dimensions);
		//std::cout << "Dimensions: " << (unsigned)dimensions << std::endl;

		if (dimensions != dims)
		{
			throw std::runtime_error("Mismatched number of dimensions");
		}

		std::array<std::uint32_t, dims> index_sizes;
		binary_read_be(ifs, index_sizes.data(), dims);

		using helper = range_helper<range_t, std::make_index_sequence< dims>>;
		//helper::print(index_sizes);
		range_t input_r = helper::cast(index_sizes);

		vector_t vec(input_r);

		binary_read_be(ifs, vec.flat_data(), ifsize);

		return vec;
	}

	template< typename E, tagged::tag T0, tagged::tag ... TL>
	inline void load_data_raw_auto(tagged::tensor_class< E, T0, TL ...> & vec, const std::filesystem::path& ifn)
	{
		tagged::range_class< TL ...> frl;
		auto frlsize = tagged::tensor_class< E, TL ...>::physical_size(frl);
		auto unitsize = frlsize * sizeof(E);
		
		std::ifstream ifs(ifn, std::ios_base::binary);

		if (!ifs.good())
		{
			throw std::runtime_error("Cannot open file \"" + ifn.generic_string() + "\"");
		}

		ifs.seekg(0, std::ios_base::end);
		auto ifsize = ifs.tellg();
		ifs.seekg(0, std::ios_base::beg);

		//std::cout << "File size: " << ifsize << std::endl;
		if (ifsize % unitsize != 0)
		{
			throw std::runtime_error("File \"" + ifn.generic_string() + "\" size " + std::to_string(ifsize) + " is not a multiple of unit size " + std::to_string(unitsize));
		}

		auto mainsize = ifsize / unitsize;
		tagged::range_class< T0> fr0(mainsize);
		tagged::range_class< T0, TL ...> fr(fr0 & frl);

		vec = tagged::tensor_class< E, T0, TL ...>(fr);
		auto frsize = vec.flat_size();

		binary_read_ne(ifs, vec.flat_data(), frsize);
	}

	template< typename FTL, typename E, tagged::tag ... TL>
	inline void load_data_raw(tagged::tensor_class< E, TL ...> & vec, const std::filesystem::path& ifn)
	{
		std::ifstream ifs(ifn, std::ios_base::binary);

		if (!ifs.good())
		{
			throw std::runtime_error("Cannot open file \"" + ifn.generic_string() + "\"");
		}

		ifs.seekg(0, std::ios_base::end);
		auto ifsize = ifs.tellg();
		ifs.seekg(0, std::ios_base::beg);

		using fvec_t = tagged::permute_tensor_class< FTL, E, tagged::set_roundup<TL, tagged::rp_dense>...>;
		fvec_t fvec(vec.range());

		auto frsize = fvec.flat_size();
		auto bytesize = frsize * sizeof(E);

		//std::cout << "File size: " << ifsize << std::endl;
		if (ifsize != bytesize)
		{
			throw std::runtime_error("File \"" + ifn.generic_string() + "\" size " + std::to_string(ifsize) + " does not match expected size " + std::to_string(bytesize));
		}

		binary_read_ne(ifs, fvec.flat_data(), frsize);
		permute_tensor(fvec, vec);
	}

	template< typename E, tagged::tag ... TL>
	inline void save_data_raw(const tagged::tensor_class< E, TL ...> & vec, const std::filesystem::path& ofn)
	{
		auto frsize = vec.flat_size();

		std::ofstream ofs(ofn, std::ios_base::binary);

		if (!ofs.good())
		{
			throw std::runtime_error("Cannot create file \"" + ofn.generic_string() + "\"");
		}

		binary_write_ne(ofs, vec.flat_data(), frsize);
	}

}

#endif
