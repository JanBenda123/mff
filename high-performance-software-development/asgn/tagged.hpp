#ifndef tagged_hpp_
#define tagged_hpp_

#include <concepts>
#include <tuple>
#include <ostream>
#include <vector>
#include <variant>

namespace tagged {

	/// @addtogroup tagged 
	/// @{

	// TAG

	namespace impl {
		template< typename T>
		struct tag_traits;
	}

	/// <summary>
	/// Any tag used to specify a dimension
	/// 
	/// The tag may contain static information like size in the dimension
	/// </summary>
	template< typename T>
	concept tag = impl::tag_traits<T>::is_tag;

	/// <summary>
	/// A bare tag used to select a dimension
	/// 
	/// No other static information is present in a selector tag.
	/// </summary>
	template< typename T>
	concept selector_tag = impl::tag_traits<T>::is_selector;

	/// <summary>
	/// Extract selector tag from any tag
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template< tag T>
	using selector = typename impl::tag_traits<T>::selector;

	/// @cond INTERNAL
	template< typename T1, typename T2>
	concept same_selector = std::same_as< selector<T1>, selector<T2>>;

	struct tag_base {};

	template< tag T, std::size_t b, std::size_t e, typename RP>
	struct srr_tag;

	template< tag T, std::size_t b, std::size_t e>
	struct sr_tag {
		static constexpr bool is_tag = true;
		static constexpr bool is_direct = false;
		using core = sr_tag< T, b, e>;
		static constexpr bool is_selector = false;
		using selector = T;
		template<selector_tag T2>
		using retag = sr_tag< T2, b, e>;
		template<typename RP>
		using set_roundup = srr_tag<T, b, e, RP>;

		static constexpr bool is_static = true;
		static constexpr std::size_t begin = b;
		static constexpr std::size_t end = e;
	};

	template< tag T, std::size_t b, std::size_t e, typename RP>
	struct srr_tag : sr_tag< T, b, e> {
		static constexpr bool has_roundup = true;
		using roundup_policy = RP;

		using core = srr_tag< T, b, e, RP>;
		template<selector_tag T2>
		using retag = srr_tag< T2, b, e, RP>;
		template<typename RP2>
		using set_roundup = srr_tag< T, b, e, RP2>;
	};

	template< tag T, typename RP>
	struct r_tag {
		static constexpr bool is_tag = true;
		static constexpr bool is_direct = false;
		using core = r_tag< T, RP>;
		static constexpr bool is_selector = false;
		using selector = T;
		template<selector_tag T2>
		using retag = r_tag< T2, RP>;

		static constexpr bool has_roundup = true;
		using roundup_policy = RP;
		template<typename RP2>
		using set_roundup = r_tag< T, RP2>;
	};

	namespace impl {
		template< typename T>
		requires T::is_tag
		struct tag_traits<T>
		{
			static constexpr bool is_tag = true;
			static constexpr bool is_direct = false;
			using core = typename T::core;
			static constexpr bool is_selector = T::is_selector;
			using selector = typename T::selector;
			template<selector_tag T2>
			using retag = typename T::template retag<T2>;
			template<typename RP>
			using set_roundup = typename T::template set_roundup<RP>;
		};

		template< typename T>
			requires std::derived_from<T, tag_base>
		struct tag_traits<T>
		{
			static constexpr bool is_tag = true;
			static constexpr bool is_direct = true;
			using core = T;
			static constexpr bool is_selector = true;
			using selector = T;
			template<selector_tag T2>
			using retag = T2;
			template<typename RP>
			using set_roundup = r_tag<T, RP>;
		};
	};

	template< tag T>
	using core = typename impl::tag_traits<T>::core;

	template< typename T1, typename T2>
	concept same_tag = std::same_as< core<T1>, core<T2>>;

	template< selector_tag T2, tag T>
	using retag = typename impl::tag_traits<T>::template retag<T2>;

	template< tag T, typename RP>
	using set_roundup = typename impl::tag_traits<T>::template set_roundup<RP>;

	template< typename T>
	concept static_tag = tag<T> && T::is_static;

	template< typename T>
	concept non_static_tag = tag<T> && (!static_tag<T>);

	template< static_tag T1, static_tag T2>
	inline constexpr bool same_static_range = T1::begin == T2::begin && T1::end == T2::end;

	// CARRIER

	template< tag T>
	using index_carrier_type = std::size_t;
	/// @endcond

	/// @cond INTERNAL
	template< tag ... TL>
	class index_class;

	template< tag ... TL>
	class iterator_class;

	template< tag T, std::size_t D>
	class strided_iterator_class;

	template< tag ... TL>
	class range_class;

	template< typename E, tag ... TL>
	class tensor_view;
	/// @endcond 

	/// @cond INTERNAL
	namespace impl {
		struct range_base {};
	}

	template< typename T>
	concept is_range = std::derived_from< T, impl::range_base>;
	
	namespace impl {
		struct index_base {};

		template< tag T, tag ... TL>
		struct element_traits;

		template< tag T>
		struct element_traits< T> : std::false_type {};

		template< tag T, tag T2, tag ... TL>
			requires same_selector<T, T2>
		struct element_traits< T, T2, TL ...> : std::true_type {};

		template< tag T, tag T2, tag ... TL>
			requires (!same_selector<T, T2>)
		struct element_traits< T, T2, TL ...> : element_traits< T, TL ...> {};

		template< typename T, typename ... TL>
		concept one_of = element_traits< T, TL...>::value;

		template< tag T, tag ... TL>
		struct position_traits;

		template< tag T, tag T2, tag ... TL>
			requires same_selector<T, T2>
		struct position_traits< T, T2, TL ...>
			: std::integral_constant< std::size_t, 0>
		{};

		template< tag T, tag T2, tag ... TL>
			requires (!same_selector<T, T2>)
		struct position_traits< T, T2, TL ...>
			: std::integral_constant< std::size_t, position_traits< T, TL ...>::value + 1>
		{};

		template< typename T, typename ... TL>
		inline constexpr std::size_t position_of = position_traits< T, TL...>::value;
	}
	/// @endcond 

	/// <summary>
	/// A wrapped list of tags.
	/// </summary>
	/// <typeparam name="...TL">The tags</typeparam>
	template< typename ... TL>
	struct tag_list {};
	
	/// @cond INTERNAL
	namespace impl {
		template< typename TA, typename TB>
		struct concat_traits;
			
		template< tag TA, tag TB>
		struct concat_traits< TA, TB> {
			using type = tag_list< TA, TB>;
		};

		template< tag TA, tag ... LB>
		struct concat_traits< TA, tag_list< LB ...>> {
			using type = tag_list< TA, LB ...>;
		};

		template< typename TA, typename TB>
		using concat_list = typename concat_traits< TA, TB>::type;

		template< typename LA, typename LB>
		struct subtract_traits;

		template< tag ... TLA>
		struct subtract_traits< tag_list<TLA...>, tag_list<>> {
			using type = tag_list<TLA...>;
		};

		template< tag TA, tag ... TLA, tag TB>
		requires same_selector< TA, TB>
		struct subtract_traits< tag_list<TA, TLA...>, tag_list<TB>>
		{
			using type = tag_list<TLA ...>;
		};

		template< tag TA, tag ... TLA, tag TB>
			requires (!same_selector< TA, TB>)
		struct subtract_traits< tag_list<TA, TLA...>, tag_list<TB>>
		{
		private:
			using removed_a = typename subtract_traits< tag_list<TLA ...>, tag_list<TB>>::type;
		public:
			using type = concat_list< TA, removed_a>;
		};

		template< tag ... TLA, tag TB, tag ... TLB>
		struct subtract_traits< tag_list<TLA...>, tag_list<TB, TLB...>>
		{
		private:
			using removed_a = typename subtract_traits<tag_list<TLA...>, tag_list<TB>>::type;
		public:
			using type = typename subtract_traits<removed_a, tag_list<TLB ...>>::type;
		};

		template< selector_tag T, tag ... TL>
		struct pick_traits;

		template< selector_tag T, tag T0, tag ... TL>
			requires same_selector<T, T0>
		struct pick_traits< T, T0, TL ...>
		{
			using type = T0;
		};

		template< selector_tag T, tag T0, tag ... TL>
			requires (!same_selector<T, T0>)
		struct pick_traits< T, T0, TL ...>
			: pick_traits< T, TL ...>
		{};

		template< std::size_t I, tag ... TL>
		struct pick_index_traits;

		template< tag T0, tag ... TL>
		struct pick_index_traits< 0, T0, TL ...>
		{
			using type = T0;
		};

		template< std::size_t I, tag T0, tag ... TL>
		struct pick_index_traits< I, T0, TL ...>
			: pick_index_traits< I-1, TL ...>
		{};

		template< typename A, typename B>
		struct same_list_traits;

		template< tag ... AL, tag ... BL>
			requires (sizeof...(AL) == sizeof...(BL))
		struct same_list_traits< tag_list<AL...>, tag_list<BL...>>
		{
			static constexpr bool value = (same_selector<AL, BL> && ...);
		};

		template< typename A, typename B>
		concept same_selector_list = same_list_traits< A, B>::value;

		template< typename A, typename B>
		struct subset_traits;

		template< tag ... AL, tag ... BL>
		struct subset_traits< tag_list<AL...>, tag_list<BL...>>
		{
			static constexpr bool value = (one_of<AL, BL...> && ...);
		};

		template< typename A, typename B>
		concept subset_selector = subset_traits< A, B>::value;
	}

	template< typename T, typename ... TL>
	requires impl::one_of<T, TL...>
	using pick = typename impl::pick_traits< T, TL...>::type;

	template< std::size_t I, typename ... TL>
	requires (I < sizeof...(TL))
	using pick_index = typename impl::pick_index_traits< I, TL...>::type;
	/// @endcond

	/// <summary>
	/// A tagged index
	/// 
	/// Technically, an integer with a tag attached
	/// </summary>
	/// <typeparam name="T">Tag</typeparam>
	template< tag T>
	class index_class< T> : public impl::index_base {
	public:
		index_class() noexcept
			: i_(0)
		{}
		constexpr explicit index_class(index_carrier_type< T> v) noexcept
			: i_(v)
		{}
		template< tag T2>
		index_class< T2> retag() const
		{
			return index_class< T2>(i_);
		}
		index_carrier_type<T> value() const noexcept
		{
			return i_;
		}
		template< std::size_t I>
			requires (I == 0)
		auto&& get() const noexcept
		{
			return std::get< I>(i_);
		}
		template< same_selector<T> T2>
		auto&& get() const noexcept
		{
			return *this;
		}
	private:
		index_carrier_type< T> i_;
	};

	/// @cond INTERNAL
	template< tag T>
	std::ostream& operator<<(std::ostream& o, index_class<T> v)
	{
		o << v.value();
		return o;
	}

	template< tag T>
	bool operator==(index_class<T> a, index_class<T> b)
	{
		return a.value() == b.value();
	}

	template< tag T>
	bool operator!=(index_class<T> a, index_class<T> b)
	{
		return a.value() != b.value();
	}
	/// @endcond

	template< tag T, index_carrier_type<T> D>
	class strided_iterator_class;

	template< tag T, index_carrier_type<T> E>
	class static_sentinel_class {
	public:
		using difference_type = std::make_signed_t<index_carrier_type<T>>;

		static_sentinel_class() noexcept
		{
		}

		bool operator==(const iterator_class<T>& b) const noexcept
		{
			return E == b.v_;
		}
		bool operator!=(const iterator_class<T>& b) const noexcept
		{
			return E != b.v_;
		}

		template<index_carrier_type<T> D>
		bool operator==(const strided_iterator_class<T, D>& b) const noexcept
		{
			return E == b.v_;
		}
		template<index_carrier_type<T> D>
		bool operator!=(const strided_iterator_class<T, D>& b) const noexcept
		{
			return E != b.v_;
		}
	};

	/// @cond INTERNAL
	template< tag T>
	class iterator_class< T> {
	public:
		iterator_class() noexcept
			: v_(0)
		{}
		explicit iterator_class(index_carrier_type< T> v) noexcept
			: v_(v)
		{}
		template<index_carrier_type<T> E>
		iterator_class(const static_sentinel_class<T, E>& b) noexcept
			: v_(E)
		{
		}
		index_class< T> operator*() const noexcept
		{
			return index_class< T>(v_);
		}
		bool operator==(const iterator_class<T>& b) const noexcept
		{
			return v_ == b.v_;
		}
		bool operator!=(const iterator_class<T>& b) const noexcept
		{
			return v_ != b.v_;
		}
		template<index_carrier_type<T> E>
		bool operator==(const static_sentinel_class<T, E>& b) const noexcept
		{
			return v_ == E;
		}
		template<index_carrier_type<T> E>
		bool operator!=(const static_sentinel_class<T, E>& b) const noexcept
		{
			return v_ != E;
		}
		iterator_class<T>& operator++() noexcept
		{
			++v_;
			return *this;
		}
		iterator_class<T> operator++(int) noexcept
		{
			auto tmp = *this;
			operator++();
			return tmp;
		}
	private:
		index_carrier_type< T> v_;

		template< tag T2, index_carrier_type<T2> E>
		friend class static_sentinel_class;
	};

	template< tag T, index_carrier_type<T> D>
	class strided_iterator_class {
	public:
		using difference_type = std::make_signed_t<index_carrier_type<T>>;

		strided_iterator_class() noexcept
			: v_(0)
		{
		}
		explicit strided_iterator_class(index_carrier_type< T> v) noexcept
			: v_(v)
		{
		}
		template<index_carrier_type<T> E>
		strided_iterator_class(const static_sentinel_class<T, E>& b) noexcept
			: v_(E)
		{
		}
		index_class< T> operator*() const noexcept
		{
			return index_class< T>(v_);
		}
		bool operator==(const strided_iterator_class<T, D>& b) const noexcept
		{
			return v_ == b.v_;
		}
		bool operator!=(const strided_iterator_class<T, D>& b) const noexcept
		{
			return v_ != b.v_;
		}
		template<index_carrier_type<T> E>
		bool operator==(const static_sentinel_class<T, E>& b) const noexcept
		{
			return v_ == E;
		}
		template<index_carrier_type<T> E>
		bool operator!=(const static_sentinel_class<T, E>& b) const noexcept
		{
			return v_ != E;
		}
		strided_iterator_class<T, D>& operator++() noexcept
		{
			v_ += D;
			return *this;
		}
		strided_iterator_class<T, D> operator++(int) noexcept
		{
			auto tmp = *this;
			operator++();
			return tmp;
		}
	private:
		index_carrier_type< T> v_;

		template< tag T2, index_carrier_type<T> E>
		friend class static_sentinel_class;
	};
	/// @endcond

	/// <summary>
	/// A range generating tagged index values 
	/// 
	/// A tagged equivalent of [std::iota_view](https://en.cppreference.com/w/cpp/ranges/iota_view).
	/// 
	/// Optimization: If the tag carries statically defined begin/end of the range, 
	/// the corresponding \ref range_class will carry no runtime data
	/// and its member functions will be `constexpr`.
	/// </summary>
	/// <typeparam name="T">Tag</typeparam>
	template< non_static_tag T>
	class range_class< T> : public impl::range_base {
	public:
		using selector = tagged::selector<T>;

		range_class() noexcept
			: b_(0), e_(0)
		{}
		explicit range_class(index_carrier_type< T> e) noexcept
			: b_(0), e_(e)
		{}
		range_class(index_carrier_type< T> b, index_carrier_type< T> e) noexcept
			: b_(b), e_(e)
		{}
		range_class(const range_class<T>& b) = default;
		range_class<T>& operator=(const range_class<T>& b) = default;
		range_class(range_class<T>&& b) noexcept
			: b_(b.b_), e_(b.e_)
		{
			b.b_ = 0;
			b.e_ = 0;
		}
		range_class<T>& operator=(range_class<T>&& b) noexcept
		{
			b_ = b.b_;
			e_ = b.e_;
			b.b_ = 0;
			b.e_ = 0;
			return *this;
		}
		template< tag ... TL2>
			requires (sizeof...(TL2) >= 1)
		explicit range_class(const range_class< TL2...>& r) noexcept
			: b_(r.template get<selector>().begin_value()), e_(r.template get<selector>().end_value())
		{}
		template<typename T2>
			requires same_tag<T, T2>
		bool operator==(const range_class<T2>& b) const
		{
			return b_ == b.begin_value() && e_ == b.end_value();
		}
		template<typename T2>
			requires same_tag<T, T2>
		bool operator!=(const range_class<T2>& b) const
		{
			return b_ != b.begin_value() || e_ != b.end_value();
		}
		template< tag T2>
		range_class< T2> retag() const
		{
			return range_class< T2>(b_, e_);
		}
		template<typename T2>
			requires same_selector<T, T2>
		index_carrier_type<T> flat(const index_class< T2>& i) const
		{
			return i.value() - b_;
		}
		index_carrier_type<T> size() const
		{
			return e_ - b_;
		}
		template<std::size_t S>
			requires (S > 0)
		auto perfectly_strided() const
		{
			if ((e_ - b_) % S != 0)
			{
				throw std::logic_error("range is not perfectly strided");
			}
			using strided_iterator = strided_iterator_class<selector, S>;
			return std::ranges::subrange<strided_iterator>(
				strided_iterator(b_),
				strided_iterator(e_));
		}
		iterator_class<selector> begin() const noexcept
		{
			return iterator_class<selector>(b_);
		}
		iterator_class<selector> end() const noexcept
		{
			return iterator_class<selector>(e_);
		}
		index_carrier_type<T> begin_value() const noexcept
		{
			return b_;
		}
		index_carrier_type<T> end_value() const noexcept
		{
			return e_;
		}
		template< same_selector< T> T2>
		auto&& get() const noexcept
		{
			return *this;
		}
		template< std::size_t I>
			requires (I == 0)
		auto&& get() const noexcept
		{
			return *this;
		}
		template< std::size_t I>
			requires (I == 0)
		using get_tag = T;
	private:
		index_carrier_type< T> b_, e_;
	};

	/// @cond INTERNAL
	template< static_tag T>
	class range_class< T> : public impl::range_base {
	public:
		using selector = tagged::selector<T>;

		constexpr range_class() noexcept
		{}
		constexpr explicit range_class(index_carrier_type< T> e) 
		{
			if (0 != T::begin || e != T::end)
			{
				throw std::logic_error("WTF");
			}
		}
		constexpr range_class(index_carrier_type< T> b, index_carrier_type< T> e) 
		{
			if (b != T::begin || e != T::end)
			{
				throw std::logic_error("WTF");
			}
		}
		template< tag ... TL2>
			requires (sizeof...(TL2) >= 1)
		explicit range_class(const range_class< TL2...>&) noexcept
			requires pick<selector, TL2...>::is_static
		{}
		template<typename T2>
		requires same_selector<T, T2>
		constexpr bool operator==(const range_class<T2>&) const
		{
			return same_static_range<T, T2>;
		}
		template<typename T2>
			requires same_selector<T, T2>
		constexpr bool operator!=(const range_class<T2>&) const
		{
			return !same_static_range<T, T2>;
		}
		template< static_tag T2>
		static constexpr range_class< T2> retag()
		{
			return range_class< T2>();
		}
		static index_carrier_type<T> flat(const index_class< selector>& i)
		{
			return i.value() - T::begin;
		}
		static constexpr index_carrier_type<T> size()
		{
			return T::end - T::begin;
		}
		template<std::size_t S>
			requires (S > 0)
		auto perfectly_strided() const
		{
			static_assert((T::end - T::begin) % S == 0);
			using strided_iterator = strided_iterator_class<selector, S>;
			using static_sentinel = static_sentinel_class<selector, T::end>;
			return std::ranges::subrange<strided_iterator, static_sentinel>(
				strided_iterator(T::begin),
				static_sentinel());
		}
		static iterator_class<selector> begin() noexcept
		{
			return iterator_class<selector>(T::begin);
		}
		static static_sentinel_class<selector, T::end> end() noexcept
		{
			return static_sentinel_class<selector, T::end>();
		}
		static constexpr index_carrier_type<T> begin_value() noexcept
		{
			return T::begin;
		}
		static constexpr index_carrier_type<T> end_value() noexcept
		{
			return T::end;
		}
		template< same_selector< T> T2>
		static constexpr auto get() noexcept
		{
			return range_class<T>{};
		}
		template< std::size_t I>
			requires (I == 0)
		auto&& get() const noexcept
		{
			return *this;
		}
		template< std::size_t I>
			requires (I == 0)
		using get_tag = T;
	};
	/// @endcond

	template<std::size_t S, tag T>
		requires (S > 0)
	auto perfectly_strided(const range_class< T>& r)
	{
		return r.template perfectly_strided<S>();
	}

	/// <summary>
	/// A list of tagged indexes (a position in an N-dimensional space)
	/// 
	/// Although the order of tags is technically preserved,
	/// most functions working with index lists ignore the order
	/// </summary>
	/// <typeparam name="...TL">Tag list</typeparam>
	template< tag ... TL>
	class index_class : public impl::index_base {
	public:
		index_class() noexcept
			: i_(index_carrier_type< TL>(0) ...)
		{}
		constexpr index_class(index_carrier_type< TL> ... vl) noexcept
			: i_(index_class< TL>(vl) ...)
		{}
		index_class(index_class< TL> ... vl) noexcept
			: i_(vl ...)
		{}
		/// <summary>
		/// Retrieve individual tagged index by zero-based position
		/// </summary>
		/// <typeparam name="I">Index of dimension</typeparam>
		/// <returns>The tagged index</returns>
		template< std::size_t I>
			requires (I < sizeof...(TL))
		auto&& get() const noexcept
		{
			return std::get< I>(i_);
		}
		/// <summary>
		/// Retrieve individual tagged index by selector tag
		/// </summary>
		/// <typeparam name="I">Index of dimension</typeparam>
		/// <returns>The tagged index</returns>
		template< impl::one_of< TL ...> T>
		auto&& get() const noexcept
		{
			return std::get< index_class< pick<selector<T>, TL...>>>(i_);
		}
	private:
		std::tuple< index_class< TL> ...> i_;
	};

	/// @cond INTERNAL
	template<>
	class index_class<> : public impl::index_base {
	public:
		constexpr index_class() noexcept
		{}
	};
	/// @endcond 

	/// <summary>
	/// Concatenate two (multi-dimensional) indexes together
	/// </summary>
	/// <typeparam name="...TL1">Tag list 1</typeparam>
	/// <typeparam name="...TL2">Tag list 2</typeparam>
	/// <param name="ia">(Multi-)tagged index 1</param>
	/// <param name="ib">(Multi-)tagged index 2</param>
	/// <returns>Multi-tagged index</returns>
	template< tag ... TL1, tag ... TL2>
	index_class< TL1 ..., TL2 ...> operator&(const index_class< TL1 ...>& ia, const index_class< TL2 ...>& ib)
	{
		return index_class< TL1 ..., TL2 ...>(ia.template get< TL1>() ..., ib.template get< TL2>() ...);
	}

	/// @cond INTERNAL
	template< tag T1, tag ... TL2>
	std::ostream& operator<<(std::ostream& o, index_class<T1, TL2 ...> v)
	{
		((o << "[" << v.template get<T1>()), ..., (o << "," << v.template get<TL2>())), o << "]";
		return o;
	}
	/// @endcond

	/// @cond INTERNAL
	template< tag ... TL>
	class iterator_class {
	public:
		iterator_class() noexcept
			: rngp_(nullptr), it_(iterator_class< TL>(0) ...)
		{}
		iterator_class(const range_class< TL...>* rngp, iterator_class< selector<TL>> ... v) noexcept
			: rngp_(rngp), it_(v ...)
		{}
		index_class< selector<TL> ...> operator*() const noexcept
		{
			return index_class< selector<TL> ...>(*std::get< iterator_class< selector< TL>>>(it_)...);
		}
		bool operator==(const iterator_class<TL ...>& b) const noexcept
		{
			return equal< sizeof...(TL)>(b);
		}
		bool operator!=(const iterator_class<TL ...>& b) const noexcept
		{
			return !equal< sizeof...(TL)>(b);
		}
		iterator_class<TL ...>& operator++() noexcept
		{
			increment< sizeof...(TL)>();
			return *this;
		}
		iterator_class<TL ...> operator++(int) noexcept
		{
			auto tmp = *this;
			operator++();
			return tmp;
		}
	private:
		template< std::size_t I>
		bool equal(const iterator_class<TL ...>& b) const noexcept
		{
			if constexpr (I > 0)
			{
				if (std::get<I - 1>(it_) != std::get<I - 1>(b.it_))
					return false;
				return equal< I - 1>(b);
			}
			else
			{
				return true;
			}
		}

		template< std::size_t I>
		void increment() noexcept
		{
			auto&& iti = std::get<I - 1>(it_);
			++iti;
			if constexpr (I > 1)
			{
				auto&& rngi = rng().template get<I - 1>();
				if (iti != rngi.end())
					return;
				iti = rngi.begin();
				increment< I - 1>();
			}
		}

		const range_class< TL...>& rng() const
		{
			return *rngp_;
		}
		const range_class< TL...>* rngp_;
		std::tuple< iterator_class< selector<TL>> ...> it_;
	};
	/// @endcond 

	/// <summary>
	/// A list of tagged ranges (an N-dimensional box)
	/// 
	/// Although the order of tags is technically preserved,
	/// most functions working with range lists ignore the order
	/// </summary>
	/// <typeparam name="...TL"></typeparam>
	template< tag ... TL>
	class range_class : public impl::range_base {
	public:
		range_class() noexcept
		{}
		range_class(const range_class< TL> & ... vl) noexcept requires (sizeof...(TL) > 0)
			: i_(vl ...)
		{}
		/// @cond INTERNAL
		template< tag ... TL2>
		requires (sizeof...(TL2) >= sizeof...(TL))
		explicit range_class(const range_class< TL2...> & r) noexcept
			: i_(r.template get<selector<TL>>() ...)
		{}
		/// @endcond
		/// <summary>
		/// Size (volume) of the range
		/// </summary>
		/// <returns>The size</returns>
		std::size_t size() const
		{
			return (1 * ... * get< TL>().size());
		}
		/// <summary>
		/// Lexicographical iterator through the N-dimensional box
		/// </summary>
		/// <returns>Iterator returning multidimensional index containing the lowermost values of all ranges</returns>
		iterator_class<TL ...> begin() const noexcept
		{
			return iterator_class<TL ...>(this, get_begin< TL>() ...);
		}
		/// <summary>
		/// Lexicographical iterator through the N-dimensional box
		/// </summary>
		/// <returns>The sentinel iterator</returns>
		iterator_class<TL ...> end() const noexcept
		{
			return iterator_class<TL ...>(this, get_end< TL>() ...);
		}
		/// <summary>
		/// Retrieve individual range by selector tag
		/// </summary>
		/// <typeparam name="T">Selector tag</typeparam>
		/// <returns>Range</returns>
		template< typename T>
		requires impl::one_of< selector<T>, selector<TL> ...>
		&& non_static_tag< pick<selector<T>, TL ...>>
		auto&& get() const noexcept
		{
			return std::get< range_class< pick<selector<T>, TL ...>>>(i_);
		}
		/// <summary>
		/// Retrieve individual range by selector tag
		/// </summary>
		/// <typeparam name="T">Selector tag</typeparam>
		/// <returns>Range</returns>
		template< typename T>
		requires impl::one_of< selector<T>, selector<TL> ...>
		&& static_tag< pick<selector<T>, TL ...>>
		static constexpr auto get() noexcept
		{
			return range_class< pick<selector<T>, TL ...>>{};
		}
		/// <summary>
		/// Retrieve individual range by index
		/// </summary>
		/// <typeparam name="I">0-based index of dimension</typeparam>
		/// <returns>Range</returns>
		template< std::size_t I>
		auto&& get() const noexcept
		{
			return std::get< I>(i_);
		}
		/// @cond INTERNAL
		template< std::size_t I>
		using get_tag = std::tuple_element_t<I, std::tuple<TL ...>>;
		/// @endcond
	private:
		template< tag T>
		auto get_begin() const noexcept
		{
			auto&& rngi = std::get< range_class< T>>(i_);
			return rngi.begin();
		}
		template< tag T>
		auto get_end() const noexcept
		{
			auto&& rngi = std::get< range_class< T>>(i_);
			if constexpr (impl::position_of<T, TL ...> == 0)
				return rngi.end();
			else
				return rngi.begin();
		}
		using i_type = std::tuple< range_class< TL> ...>;
		i_type i_;
	};

	/// <summary>
	/// Concatenate two (multi-dimensional) ranges
	/// </summary>
	/// <typeparam name="...TL1">Tag list 1</typeparam>
	/// <typeparam name="...TL2">Tag list 2</typeparam>
	/// <param name="rnga">(Multi-)tagged range 1</param>
	/// <param name="rngb">(Multi-)tagged range 2</param>
	/// <returns>Multi-tagged range</returns>
	template< tag ... TL1, tag ... TL2>
	range_class< TL1 ..., TL2 ...> operator&(const range_class< TL1 ...>& rnga, const range_class< TL2 ...>& rngb)
	{
		return range_class< TL1 ..., TL2 ...>(rnga.template get< TL1>() ..., rngb.template get< TL2>() ...);
	}

	struct rp_dense {
		constexpr static std::size_t roundup(std::size_t s)
		{
			return s;
		}
	};

	struct rp_odd {
		constexpr static std::size_t roundup(std::size_t s)
		{
			return s | 1;
		}
	};

	/// @cond INTERNAL
	namespace impl {

		template< tag T>
		inline constexpr std::size_t physical_roundup(std::size_t s)
		{
			return T::roundup_policy::roundup(s);
		}

		template< tag T>
		struct size_traits
		{
			static constexpr std::size_t static_multiplier = 1;
			static constexpr bool has_dynamic_multiplier = true;
			template< typename T2>
			static std::size_t dynamic_multiplier(T2&& r)
			{
				return physical_roundup<T>(r.template get<selector<T>>().size());
			}
		};

		template< tag T>
			requires T::is_static
		struct size_traits<T>
		{
			static constexpr std::size_t static_multiplier = physical_roundup<T>(T::end - T::begin);
			static constexpr bool has_dynamic_multiplier = false;
		};

		template< tag T>
		class multiplier_class
		{
		public:
			multiplier_class()
				: value_(0)
			{}
			explicit multiplier_class(std::size_t v)
				: value_(v)
			{}
			void assign_value(std::size_t v)
			{
				value_ = v;
			}
			std::size_t value() const
			{
				return value_;
			}
		private:
			std::size_t value_;
		};

		template< tag T, std::size_t s>
		struct sm_tag
		{
			static constexpr bool is_tag = true;
			static constexpr bool is_direct = false;
			using core = sm_tag< T, s>;
			static constexpr bool is_selector = false;
			using selector = T;
			template<selector_tag T2>
			using retag = sm_tag< T2, s>;
			template<typename RP2>
			using set_roundup = void;

			static constexpr bool has_static_multiplier = true;
			static constexpr std::size_t static_multiplier = s;
		};

		template< tag T, std::size_t b, std::size_t e, std::size_t s>
		struct srm_tag
		{
			static constexpr bool is_tag = true;
			static constexpr bool is_direct = false;
			using core = sm_tag< T, s>;
			static constexpr bool is_selector = false;
			using selector = T;
			template<selector_tag T2>
			using retag = sm_tag< T2, s>;
			template<typename RP2>
			using set_roundup = void;

			static constexpr bool is_static = true;
			static constexpr std::size_t begin = b;
			static constexpr std::size_t end = e;

			static constexpr bool has_static_multiplier = true;
			static constexpr std::size_t static_multiplier = s;
		};

		template< typename T>
		concept has_static_multiplier = requires {
			requires tag<T>;
			{T::has_static_multiplier} -> std::convertible_to<bool>;
			requires T::has_static_multiplier;
		};

		template< tag T, std::size_t s>
		class multiplier_class<sm_tag<T, s>>
		{
		public:
			multiplier_class()
			{}
			static constexpr std::size_t value()
			{
				return s;
			}
		};

		template< tag ... TL>
		struct multiplier_list_traits;

		template<>
		struct multiplier_list_traits<>
		{
			static constexpr std::size_t static_multiplier = 1;
			using multiplier_tag_list = tag_list<>;
			static constexpr bool has_dynamic_multiplier = false;
		};

		template< tag T0, tag ... TL>
			requires (!multiplier_list_traits< TL ...>::has_dynamic_multiplier)
			struct multiplier_list_traits< T0, TL ...>
		{
		private:
			using head_traits = size_traits<T0>;
			using tail_traits = multiplier_list_traits< TL ...>;
		public:
			static constexpr std::size_t static_multiplier = head_traits::static_multiplier * tail_traits::static_multiplier;
		private:
			using head_multiplier_tag = sm_tag<selector<T0>, tail_traits::static_multiplier>;
			using tail_multiplier_tag_list = typename tail_traits::multiplier_tag_list;
		public:
			using multiplier_tag_list = concat_list< head_multiplier_tag, tail_multiplier_tag_list>;
			static constexpr bool has_dynamic_multiplier = head_traits::has_dynamic_multiplier;
			template< tag ... TL2, tag ... TL3>
			static std::size_t fill_dynamic_multiplier(std::tuple< multiplier_class< TL2>...>&, const range_class<TL3 ...>& r)
				requires has_dynamic_multiplier
			{
				return head_traits::dynamic_multiplier(r);
			}
		};

		template< tag T0, tag ... TL>
			requires multiplier_list_traits< TL ...>::has_dynamic_multiplier
			struct multiplier_list_traits< T0, TL ...>
		{
		private:
			using head_traits = size_traits<T0>;
			using tail_traits = multiplier_list_traits< TL ...>;
		public:
			static constexpr std::size_t static_multiplier = head_traits::static_multiplier * tail_traits::static_multiplier;
		private:
			using head_multiplier_tag = selector<T0>;
			using tail_multiplier_tag_list = typename tail_traits::multiplier_tag_list;
		public:
			using multiplier_tag_list = concat_list< head_multiplier_tag, tail_multiplier_tag_list>;
			static constexpr bool has_dynamic_multiplier = true;
			template< tag ... TL2, tag ... TL3>
			static std::size_t fill_dynamic_multiplier(std::tuple< multiplier_class< TL2>...>& m, const range_class<TL3 ...>& r)
			{
				std::size_t dm = tail_traits::fill_dynamic_multiplier(m, r);
				std::get< multiplier_class<head_multiplier_tag>>(m).assign_value(tail_traits::static_multiplier * dm);
				if constexpr (head_traits::has_dynamic_multiplier)
				{
					dm *= head_traits::dynamic_multiplier(r);
				}
				return dm;
			}
		};

		template< tag ... TL>
		class multiplier_list_class
		{
		public:
			multiplier_list_class()
			{}
			template< tag ... TL3>
				requires (sizeof...(TL3) == sizeof...(TL))
			explicit multiplier_list_class(const range_class<TL3 ...>& r)
			{
				using traits = multiplier_list_traits<pick<selector<TL>, TL3...> ...>;
				if constexpr (traits::has_dynamic_multiplier)
				{
					traits::fill_dynamic_multiplier(m_, r);
				}
			}
			template< tag ... TL3>
				requires (sizeof...(TL3) >= sizeof...(TL))
			explicit multiplier_list_class(const multiplier_list_class<TL3 ...>& r)
				: m_( r.template get<TL>() ...)
			{}
			template< tag ... TL3, tag ... TL2>
				requires same_selector_list<tag_list<TL3...>, tag_list<TL...>>
				&& subset_selector< tag_list<TL2...>, tag_list<TL...>>
			std::size_t flat(const range_class<TL3 ...>& r, const index_class<TL2 ...>& i) const
			{
				return (0 + ... + flat_one<TL2>(r, i));
			}
			template< tag T2>
			auto&& get() const
			{
				return std::get< multiplier_class<pick<selector<T2>, TL...>>>(m_);
			}
			template< std::size_t I2>
			auto&& get() const
			{
				return std::get< I2>(m_);
			}
		private:
			std::tuple< multiplier_class< TL>...> m_;

			template< tag T, tag ... TL3, tag ... TL2>
			std::size_t flat_one(const range_class<TL3 ...>& r, const index_class<TL2 ...>& i) const
			{
				auto&& ix = i.template get<selector<T>>();
				auto&& rx = r.template get<selector<T>>();
					
				std::size_t mv = std::get< multiplier_class< pick<selector<T>, TL...>>>(m_).value();
				std::size_t fv = rx.flat(ix);
				return mv * fv;
			}
		};

		template<typename L>
		struct multiplier_list_creator;

		template<tag ... TL2>
		struct multiplier_list_creator< tag_list< TL2 ...>>
		{
			using type = multiplier_list_class< TL2 ...>;
		};

		template< tag ... TL3>
		using multiplier_list = typename multiplier_list_creator< typename multiplier_list_traits< TL3...>::multiplier_tag_list>::type;

		template< tag RT, tag MT>
		struct mixer_traits;

		template< tag RT, tag MT>
			requires same_tag<RT, selector<MT>>
		struct mixer_traits<RT, MT>
		{
			using type = MT;
		};

		template< tag RT, tag MT>
			requires same_tag<selector<RT>, MT>
		struct mixer_traits<RT, MT>
		{
			using type = RT;
		};

		template< non_static_tag RT, tag MT>
			requires MT::has_static_multiplier
		struct mixer_traits<RT, MT>
		{
			using type = sm_tag<selector<RT>, MT::static_multiplier>;
		};

		template< static_tag RT, tag MT>
			requires MT::has_static_multiplier
		struct mixer_traits<RT, MT>
		{
			using type = srm_tag<selector<RT>, RT::begin, RT::end, MT::static_multiplier>;
		};

		template< typename RC, typename MLC>
		struct mixer_list_traits;

		template<>
		struct mixer_list_traits< range_class<>, multiplier_list_class<>>
		{
			using type = tag_list<>;
		};

		template< tag RT, tag ... RL, tag MT, tag ... ML>
			requires (sizeof...(RL) == sizeof...(ML))
		struct mixer_list_traits< range_class< RT, RL...>, multiplier_list_class< MT, ML...>>
		{
		private:
			using head_traits = mixer_traits< RT, MT>;
			using tail_traits = mixer_list_traits< range_class< RL...>, multiplier_list_class< ML...>>;
		public:
			using type = concat_list< typename head_traits::type, typename tail_traits::type>;
		};

		template< tag T>
		struct range_demixer_traits
		{
			using type = selector<T>;
		};

		template< tag T>
			requires T::is_static
		struct range_demixer_traits<T>
		{
			using type = sr_tag<selector<T>, T::begin, T::end>;
		};

		template< tag T>
		struct multiplier_demixer_traits
		{
			using type = selector<T>;
		};

		template< tag T>
			requires T::has_static_multiplier
		struct multiplier_demixer_traits<T>
		{
			using type = sm_tag<selector<T>, T::static_multiplier>;
		};
	}

	template< typename E, tag ... TL>
	class tensor_class;

	template< typename E, tag ... TL>
	class tensor_view;

	namespace impl {
		template< typename E, typename X>
		struct tensor_view_creator;

		template< typename E, tag ... TL>
		struct tensor_view_creator< E, tag_list< TL...>>
		{
			using type = tensor_view< E, TL...>;
		};
	}
	/// @endcond

	template< typename E, tag ... TL>
	struct static_tensor_view {
	};

	/// <summary>
	/// A reference to a sub-space of a tensor
	/// 
	/// The \ref tensor_view type shall newer be used directly
	/// because the tag list is used to pass layout information
	/// from the \ref tensor_class being referenced.
	/// 
	/// Instead, always use an \c auto variable to store \ref tensor_view
	/// returned from an \c operator[]
	/// </summary>
	/// <typeparam name="E">Element type, possibly \c const</typeparam>
	/// <typeparam name="...TL">Tag list</typeparam>
	template< typename E, tag ... TL>
	class tensor_view {
	private:
		using self_ = tensor_view< E, TL...>;
		using range_t = range_class< typename impl::range_demixer_traits< TL>::type ...>;
	public:
		/// @cond INTERNAL
		template< tag ... TL3, tag ... TL2>
		explicit tensor_view(const range_class< TL3 ...>& rng, const impl::multiplier_list_class< TL2...>& mult, E* data) 
			: rng_(rng),
			mult_(mult),
			arr_(data)
		{}

		self_& operator=(const self_&) = delete;
		self_& operator=(self_&&) = delete;
		/// @endcond

		/// <summary>
		/// The range corresponding to the sub-space
		/// </summary>
		/// <returns></returns>
		const range_t& range() const
		{
			return rng_;
		}

		/// <summary>
		/// Extract a sub-space of this sub-space 
		/// 
		/// The new sub-space is defined by fixing one or more indexes
		/// defined by the tagged (multi-dimensional) index argument
		/// to the operator
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index</param>
		/// <returns>A \ref tensor_view</returns>
		template< tag ... TL2>
		auto operator[](const index_class< TL2 ...>& i) const
			requires (sizeof...(TL2) < sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			using result_list = typename impl::subtract_traits<tag_list< TL...>, tag_list< TL2...>>::type;
			using result_view = typename impl::tensor_view_creator< E, result_list>::type;
			return result_view(rng_, mult_, arr_ + mult_.flat(rng_, i));
		}

		/// <summary>
		/// Access an element of this sub-space
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index covering (in any order) all the dimensions of this \ref tensor_view</param>
		/// <returns>A (possibly modifiable) reference to the element</returns>
		template< tag ... TL2>
		E& operator[](const index_class< TL2 ...>& i) const
			requires (sizeof...(TL2) == sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			return arr_[mult_.flat(rng_, i)];
		}

		/// <summary>
		/// A pointer to the beginning of the array containing the sub-space data
		/// 
		/// Available only if the \ref tensor_view is single-dimensional 
		/// and the dimension corresponds to the right-most tag of the \ref tensor_class being referenced
		/// (i.e. when the data elements of the view are stored contiguously)
		/// </summary>
		/// <returns>A (possibly modifiable) pointer to the associated contiguous data sub-array in the associated \ref tensor_class</returns>
		E* data() const
			requires (sizeof...(TL) == 1) && ((TL::has_static_multiplier) && ...) && ((TL::static_multiplier == 1) && ...)
		{
			return arr_;
		}

		/// <summary>
		/// A pointer to the element at the position defined by the lowermost index values of all dimensions of the \ref tensor_view
		/// 
		/// It is the responsibility of the user to properly analyze the layout of the data
		/// using the \ref dimensions, \ref dim_size, and \ref dim_multiplier members
		/// </summary>
		/// <returns>A (possibly modifiable) pointer into the associated \ref tensor_class data</returns>
		E* flat_data() const
		{
			return arr_;
		}

		/// <summary>
		/// The number of dimensions of this \ref tensor-view
		/// </summary>
		static constexpr std::size_t dimensions = sizeof...(TL);

		/// <summary>
		/// Return the sub-space size in a dimension specified by a tag
		/// </summary>
		/// <typeparam name="T2">Selector tag</typeparam>
		/// <returns>The size</returns>
		template< tag T2>
		std::size_t dim_size() const
		{
			return rng_.template get< selector<T2>>().size();
		}

		/// <summary>
		/// Return the sub-space size in a dimension specified by an index
		/// </summary>
		/// <typeparam name="I2">0-based dimension index</typeparam>
		/// <returns>The size</returns>
		template< std::size_t I2>
		std::size_t dim_size() const
		{
			return rng_.template get< I2>().size();
		}

		/// <summary>
		/// Return the multiplier associated with the dimension specified by a tag
		/// 
		/// The multiplier must be used to multiply the value of a 0-based (non-tagged) index
		/// in the specified dimension when accessing the elements 
		/// using the pointer returned by \ref flat_data
		/// </summary>
		/// <typeparam name="T2">Selector tag</typeparam>
		/// <returns>The multiplier</returns>
		template< tag T2>
			requires impl::has_static_multiplier< pick< selector<T2>, TL...>>
		static constexpr std::size_t dim_multiplier() 
		{ 
			return pick< selector<T2>, TL...>::static_multiplier; 
		}

		/// @cond INTERNAL
		template< tag T2>
			requires (!impl::has_static_multiplier< pick< selector<T2>, TL...>>)
		std::size_t dim_multiplier() const
		{
			return mult_.template get< selector<T2>>().value();
		}
		/// @endcond 

		/// <summary>
		/// Return the multiplier associated with the dimension specified by an index
		/// 
		/// The multiplier must be used to multiply the value of a 0-based (non-tagged) index
		/// in the specified dimension when accessing the elements 
		/// using the pointer returned by \ref flat_data
		/// </summary>
		/// <typeparam name="I2">Dimension index</typeparam>
		/// <returns>The multiplier</returns>
		template< std::size_t I2>
			requires impl::has_static_multiplier< pick_index< I2, TL...>>
		static constexpr std::size_t dim_multiplier() 
		{ 
			return pick_index< I2, TL...>::static_multiplier; 
		}

		/// @cond INTERNAL
		template< std::size_t I2>
			requires (!impl::has_static_multiplier< pick_index< I2, TL...>>)
		std::size_t dim_multiplier() const
		{
			return mult_.template get< I2>().value();
		}
		/// @endcond 

		static constexpr static_tensor_view< E, TL...> st{};

	private:
		range_t rng_;
		impl::multiplier_list_class< typename impl::multiplier_demixer_traits< TL>::type ...> mult_;
		E* arr_;
	};

	template< tag T2, typename E, tag ... TL>
		requires impl::has_static_multiplier< pick< selector<T2>, TL...>>
	inline constexpr std::size_t dim_multiplier(static_tensor_view<E, TL...>)
	{
		return tensor_view<E, TL...>::template dim_multiplier< T2>();
	}

	template< std::size_t I2, typename E, tag ... TL>
		requires (!impl::has_static_multiplier< pick_index< I2, TL...>>)
	inline constexpr std::size_t dim_multiplier(static_tensor_view<E, TL...>)
	{
		return tensor_view<E, TL...>::template dim_multiplier< I2>();
	}

	/// <summary>
	/// The type of a \ref tensor_view acting as a reference
	/// to the complete \ref tensor_class with the given tag list
	/// </summary>
	/// <typeparam name="E">Element type (possibly \c const)</typeparam>
	/// <typeparam name="...TL">Tag list</typeparam>
	template< typename E, tag ... TL>
	using extract_tensor_view = typename impl::tensor_view_creator< E, typename impl::mixer_list_traits< range_class< TL...>, impl::multiplier_list< TL...>>::type>::type;

	/// <summary>
	/// A tensor - a multi-dimensional tagged generalization of vector/matrix
	/// 
	/// The order of tags in the template argument list defines the layout.
	/// The right-most tag becomes the inner-most dimension (with contiguously stored elements).
	/// 
	/// The tensor contains precomputed multipliers for each dimension
	/// so that indexing in each dimension works in constant time.
	/// 
	/// Optimization: If K rightmost tags have statically defined range,
	/// the multipliers of the righmost (K+1) dimensions are precomputed
	/// statically and not stored as run-time data inside the class.
	/// The same precomputation is applied in every \ref tensor_view
	/// referencing this \ref tensor_class.
	/// </summary>
	/// <typeparam name="E">Element type</typeparam>
	/// <typeparam name="...TL">Tag list</typeparam>
	template< typename E, tag ... TL>
	class tensor_class {
	public:
		tensor_class() noexcept
		{}
		/// <summary>
		/// Initialize the \ref tensor_class to a size
		/// defined by a \ref range_class.
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="rng">Multi-tagged range</param>
		template< tag ... TL2>
			requires (sizeof...(TL2) == sizeof...(TL))
		explicit tensor_class(const range_class< TL2 ...>& rng)
			: rng_(rng),
			mult_( rng),
			arr_(physical_size(rng))
		{}
		/// <summary>
		/// Initialize the \ref tensor_class to a size
		/// defined by a \ref range_class.
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="rng">Multi-tagged range</param>
		/// <param name="e">Initial values for all elements</param>
		template< tag ... TL2>
			requires (sizeof...(TL2) == sizeof...(TL))
		tensor_class(const range_class< TL2 ...>& rng, const E& e) noexcept
			: rng_(rng),
			mult_(rng),
			arr_(physical_size(rng), e)
		{}

		using view_type = extract_tensor_view< E, TL ...>;
		using const_view_type = extract_tensor_view< const E, TL ...>;

		/// <summary>
		/// Return \ref tensor_view acting as a reference to the complete \ref tensor_class
		/// </summary>
		/// <returns>A \ref tensor_view</returns>
		view_type view()
		{
			return view_type(rng_, mult_, arr_.data());
		}

		/// <summary>
		/// Return \ref tensor_view acting as a \c const reference to the complete \ref tensor_class
		/// </summary>
		/// <returns>A \ref tensor_view</returns>
		const_view_type view() const
		{
			return const_view_type(rng_, mult_, arr_.data());
		}

		/// <summary>
		/// Extract a reference to a sub-space of this tensor 
		/// 
		/// The new sub-space is defined by fixing one or more indexes
		/// defined by the tagged (multi-dimensional) index argument
		/// to the operator
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index</param>
		/// <returns>A \ref tensor_view</returns>
		template< tag ... TL2>
		auto operator[](const index_class< TL2 ...>& i)
			requires (sizeof...(TL2) < sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			return view()[i];
		}

		/// <summary>
		/// Extract an immutable reference to a sub-space of this tensor 
		/// 
		/// The new sub-space is defined by fixing one or more indexes
		/// defined by the tagged (multi-dimensional) index argument
		/// to the operator
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index</param>
		/// <returns>An immutable \ref tensor_view</returns>
		template< tag ... TL2>
		auto operator[](const index_class< TL2 ...>& i) const
			requires (sizeof...(TL2) < sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			return view()[i];
		}

		/// <summary>
		/// The range corresponding to this tensor
		/// </summary>
		/// <returns></returns>
		const range_class< TL ...>& range() const
		{
			return rng_;
		}

		/// <summary>
		/// Access an element of this tensor
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index covering (in any order) all the dimensions of this tensor</param>
		/// <returns>A modifiable reference to the element</returns>
		template< tag ... TL2>
		E& operator[](const index_class< TL2...>& i)
			requires (sizeof...(TL2) == sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			return arr_[mult_.flat(rng_, i)];
		}

		/// <summary>
		/// Read an element of this tensor
		/// </summary>
		/// <typeparam name="...TL2">Tag list</typeparam>
		/// <param name="i">A (multi-)tagged index covering (in any order) all the dimensions of this tensor</param>
		/// <returns>A \c const reference to the element</returns>
		template< tag ... TL2>
		const E& operator[](const index_class< TL2...>& i) const
			requires (sizeof...(TL2) == sizeof...(TL))
		&& impl::subset_selector< tag_list< TL2...>, tag_list< TL...>>
		{
			return arr_[mult_.flat(rng_, i)];
		}

		/// <summary>
		/// A pointer to the beginning of the array containing the data
		/// 
		/// Available only if the \ref tensor_view is single-dimensional 
		/// </summary>
		/// <returns>A modifiable pointer to the underlying contiguous data array</returns>
		E* data()
			requires (sizeof...(TL) == 1)
		{
			return arr_.data();
		}

		/// <summary>
		/// A \c const pointer to the beginning of the array containing the data
		/// 
		/// Available only if the \ref tensor_view is single-dimensional 
		/// </summary>
		/// <returns>A \c const pointer to the underlying contiguous data array</returns>
		const E* data() const
			requires (sizeof...(TL) == 1)
		{
			return arr_.data();
		}

		/// <summary>
		/// A pointer to the beginning of the array containing the data
		/// 
		/// It is the responsibility of the user to properly analyze the layout of the data
		/// </summary>
		/// <returns>A modifiable pointer to the underlying single-dimensional data array</returns>
		E* flat_data()
		{
			return arr_.data();
		}

		/// <summary>
		/// A \c const pointer to the beginning of the array containing the data
		/// 
		/// It is the responsibility of the user to properly analyze the layout of the data
		/// </summary>
		/// <returns>A \c const pointer to the underlying single-dimensional data array</returns>
		const E* flat_data() const
		{
			return arr_.data();
		}

		std::size_t flat_size() const
		{
			return arr_.size();
		}

		template< tag ... TL2>
			requires (sizeof...(TL2) == sizeof...(TL))
		static std::size_t physical_size(const range_class< TL2 ...>& rng)
		{
			return (1 * ... * impl::physical_roundup<TL>(rng.template get<TL2>().size()));
		}
	private:
		range_class< TL ...> rng_;
		impl::multiplier_list< TL ...> mult_;
		std::vector< E> arr_;
	};

	/// @cond INTERNAL
	namespace impl {
		template< typename P, typename C>
		struct permute;
		
		template< typename ... SL, typename C>
		struct permute< tag_list< SL...>, C>
		{
			using type = typename C::template type< SL...>;
		};

		template< typename P, typename C>
		using permute_t = typename permute< P, C>::type;

		template< typename E, tag ... TL>
		struct permutator_tensor_class
		{
			template< typename ... SL>
			using type = tensor_class< E, pick<selector<SL>, TL...> ...>;
		};

		template< tag ... TL>
		struct permutator_range_class
		{
			template< typename ... SL>
			using type = range_class< pick<SL, TL...> ...>;
		};

		struct permutator_range
		{
			template< typename ... SL>
			struct type {
				template< tag ... TL>
				static auto permute_range(const range_class<TL...>& r)
				{
					using range = range_class< pick<SL, TL...> ...>;
					return range((r.template get<SL>() & ...));
				}
			};
		};
	}
	/// @endcond 

	/// <summary>
	/// Provide a \ref tensor_class for the selected dimensions 
	/// with layout specified by a \ref tagged::tag_list
	/// </summary>
	/// <typeparam name="P">A \ref tagged::tag_list of selector tags</typeparam>
	/// <typeparam name="E">An element type</typeparam>
	/// <typeparam name="...TL">A tag list, possibly containing tags carrying static range information</typeparam>
	template< typename P, typename E, tag ... TL>
	using permute_tensor_class = impl::permute_t< P, impl::permutator_tensor_class<E, TL...>>;

	/// @cond INTERNAL
	template< typename P, tag ... TL>
	using permute_range_class = impl::permute_t< P, impl::permutator_range_class<TL...>>;

	template< typename P, tag ... TL>
	auto permute_range(const range_class<TL...>& r)
	{
		using permutator = impl::permute_t<P, impl::permutator_range>;
		return permutator::permute_range(r);
	}
	/// @endcond

	// CO 

	/// @cond INTERNAL
	namespace impl {
		template< selector_tag T>
		struct c {
			static constexpr bool is_tag = true;
			static constexpr bool is_direct = false;
			using core = c<T>;
			static constexpr bool is_selector = true;
			using selector = c<T>;
			template<selector_tag T2>
			using retag = T2;
			template<typename RP2>
			using set_roundup = void;
		};

		template< selector_tag T>
		struct co_traits {
			using co = c< T>;
		};

		template< selector_tag T>
		struct co_traits< c<T>> {
			using co = T;
		};
	}
	/// @endcond

	/// <summary>
	/// Provide a co-tag for a given tag
	/// 
	/// Co-tagging is a self-inverse operation, i.e. \c co<co<T>>==T
	/// 
	/// The purpose of co-tagging is the conversion between [covariant and contravariant indices](https://mathworld.wolfram.com/MixedTensor.html). 
	/// 
	/// Co-tagging preserves any static information that may be attached to the tag.
	/// </summary>
	/// <typeparam name="T">A tag</typeparam>
	template< tag T>
	using co = retag< typename impl::co_traits<selector<T>>::co, T>;

	/// @cond INTERNAL
	namespace impl {
		template< typename X>
		struct co_list_traits;
			
		template< tag ... TL>
		struct co_list_traits< tag_list<TL ...>> {
			using co_list = tag_list<co<TL>...>;
		};
	}
	/// @endcond

	/// <summary>
	/// Co-tag every element of a \ref tag_list
	/// </summary>
	/// <typeparam name="X">A \ref tag_list</typeparam>
	template< typename X>
	using co_list = typename impl::co_list_traits< X>::co_list;

	/// <summary>
	/// Return a co-tagged range with the same extent
	/// </summary>
	/// <typeparam name="T">Tag</typeparam>
	/// <param name="r">Range</param>
	/// <returns>Co-tagged range</returns>
	template< tag T>
	inline constexpr range_class<co<T>> operator~(const range_class<T>& r)
	{
		return range_class<co<T>>(r.template retag<co<T>>());
	}

	/// <summary>
	/// Return a co-tagged index with the same value
	/// </summary>
	/// <typeparam name="T">Tag</typeparam>
	/// <param name="r">Tagged index</param>
	/// <returns>Co-tagged index</returns>
	template< tag T>
	inline index_class<co<T>> operator~(const index_class<T>& r)
	{
		return index_class<co<T>>(r.template retag<co<T>>());
	}

	/// @}

	template< typename E, tagged::tag STL0, tagged::tag DTL0>
	inline void permute_tensor(const tagged::tensor_view< const E, STL0>& svec, const tagged::tensor_view< E, DTL0>& dvec)
	{
		auto r0 = dvec.range().template get<DTL0>();
		for (auto i0 : r0)
		{
			dvec[i0] = svec[i0];
		}
	}

	template< typename E, tagged::tag ... STL, tagged::tag DTL0, tagged::tag ... DTL>
	inline void permute_tensor(const tagged::tensor_view< const E, STL ...>& svec, const tagged::tensor_view< E, DTL0, DTL ...>& dvec)
	{
		auto r0 = dvec.range().template get<DTL0>();
		for (auto i0 : r0)
		{
			auto sslice = svec[i0];
			auto dslice = dvec[i0];

			permute_tensor(sslice, dslice);
		}
	}

	template< typename E, tagged::tag ... STL, tagged::tag ... DTL>
		requires (sizeof...(STL) == sizeof...(DTL))
	inline void permute_tensor(const tagged::tensor_class< E, STL ...>& svec, tagged::tensor_class< E, DTL ...>& dvec)
	{
		permute_tensor(svec.view(), dvec.view());
	}

}

#endif