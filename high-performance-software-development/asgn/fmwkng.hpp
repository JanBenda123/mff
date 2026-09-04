#ifndef fmwkng_hpp_
#define fmwkng_hpp_

#include <string>
#include <functional>
#include <vector>
#include <initializer_list>
#include <thread>
#include <future>
#include <mutex>
#include <optional>
#include <list>
#include <iostream>
#include <iomanip>
#include <cassert>
#include <stdexcept>
#include <algorithm>
#include <numeric>
#include <array>
#include <type_traits>
#include <variant>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <cmath>
#include <chrono>

//#define PRINT_REDUCTION
//#define PRINT_META

namespace fmwkng {
	template<typename ... TL>
	void sink(TL&&...)
	{
	}

	namespace impl {

#pragma region utils1
		struct immovable {
			immovable() = default;
			immovable(const immovable&) = delete;
			immovable& operator=(const immovable&) = delete;
		};
#pragma endregion
#pragma region result_holder
		class abstract_element;

		using element_ptr = std::unique_ptr< abstract_element>;
		using element_observer = const abstract_element*;

		enum class element_sense { OPEN, CLOSE };

		enum class element_relevance { CHECK, TIME, SIZE_ };

		template< element_sense sense>
		struct sense_traits;

		template<>
		struct sense_traits< element_sense::OPEN> {
			static auto code_name() { return "fmwkng::impl::element_sense::OPEN"; }
		};

		template<>
		struct sense_traits< element_sense::CLOSE> {
			static auto code_name() { return "fmwkng::impl::element_sense::CLOSE"; }
		};

		enum class reduction_mode {
			UNDEF,
			LAST_FIRST,	// last time, first check
			AVG_FIRST,	// average time, first check
			AVG_EQUAL,	// average time, equal check
			AVG
		};

		class abstract_element : immovable {
		public:
			virtual ~abstract_element() noexcept = default;
			virtual element_ptr clone() const = 0;
			virtual void make_code(std::ostream& os) const = 0;
			virtual std::size_t data_size() const = 0;
			virtual void data_text(std::ostream& os, std::size_t i) const = 0;
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const = 0;
			virtual void metadata_marker(std::ostream& os) const = 0;
			virtual reduction_mode child_reduction_mode() const = 0;
			virtual bool useful() const = 0;
			virtual bool reducible() const = 0;
			virtual element_ptr aggregate_init() const = 0;
			virtual void aggregate_to(abstract_element* aggr, reduction_mode mode) const = 0;
			virtual element_sense sense() const = 0;
			virtual bool relevant(element_relevance er) const = 0;
			virtual bool equal(const abstract_element* bp) const = 0;
		};

		using element_vector = std::vector< element_ptr>;
		using element_const_iterator = element_vector::const_iterator;

		using element_observer_vector = std::vector< element_observer>;

		class element_list;

		class element_list_view {
		private:
			inline static element_vector empty_;
		public:
			element_list_view()
			{
				static element_vector empty_;
				b_ = empty_.begin();
				e_ = empty_.end();
			}

			element_list_view(element_const_iterator b, element_const_iterator e)
				: b_(b), e_(e)
			{}

			element_const_iterator begin() const
			{
				return b_;
			}

			element_const_iterator end() const
			{
				return e_;
			}

			std::size_t size() const
			{
				return e_ - b_;
			}

			const abstract_element* operator[](std::size_t i) const
			{
				return &*b_[i];
			}

			element_list clone() const;

			std::size_t data_size() const
			{
				std::size_t s = 0;
				for (auto&& a : *this)
				{
					s += a->data_size();
				}
				return s;
			}
			void data_text(std::ostream& os) const
			{
				std::size_t s = 0;
				for (auto&& a : *this)
				{
					auto n = a->data_size();
					for (std::size_t i = 0; i < n; ++i)
					{
						if (s)
							os << "\t";
						a->data_text(os, i);
						++s;
					}
				}
			}
			void gold_comparison_text(std::ostream& os, element_list_view gold, element_relevance er) const
			{
				std::size_t s = 0;

				auto git = gold.begin();
				for (auto it = begin(); it != end(); ++it)
				{
					if ((*it)->sense() == element_sense::CLOSE && (*it)->relevant(er))
					{
						if (s)
							os << "\t";
						(*it)->gold_comparison_text(os, &**git);
						++s;
						++git;
					}
				}
			}
			void metadata_text(std::ostream& os) const
			{
				for (auto&& a : *this)
				{
					a->metadata_marker(os);
				}
			}

			bool has_paired() const
			{
				for (auto&& a : *this)
				{
					if (a->sense() == element_sense::CLOSE)
						return true;
				}
				return false;
			}

			bool useful() const
			{
				for (auto&& a : *this)
				{
					if (a->useful())
						return true;
				}
				return false;
			}

			reduction_mode child_reduction_mode() const
			{
				if (b_ == e_)
					return reduction_mode::UNDEF;
				return (*b_)->child_reduction_mode();
			}
		private:
			element_const_iterator b_;
			element_const_iterator e_;
		};

		class element_list {
		public:
			operator element_list_view() const
			{
				return element_list_view(ev_.begin(), ev_.end());
			}

			element_const_iterator begin() const
			{
				return ev_.begin();
			}

			element_const_iterator end() const
			{
				return ev_.end();
			}

			std::size_t size() const
			{
				return ev_.size();
			}

			bool empty() const
			{
				return ev_.empty();
			}

			abstract_element* operator[](std::size_t i)
			{
				return &*ev_[i];
			}

			void push_back(element_ptr&& ep)
			{
				ev_.push_back(std::move(ep));
			}

			void push_back(element_list&& el)
			{
				ev_.insert(ev_.end(), std::make_move_iterator(el.ev_.begin()), std::make_move_iterator(el.ev_.end()));
			}

			element_list clone() const
			{
				element_list rv;
				for (auto&& a : ev_)
				{
					rv.push_back(a->clone());
				}
				return rv;
			}

			std::size_t data_size() const
			{
				return element_list_view(*this).data_size();
			}
			void data_text(std::ostream& os) const
			{
				element_list_view(*this).data_text(os);
			}
			void gold_comparison_text(std::ostream& os, const element_list & gold, element_relevance er) const
			{
				element_list_view(*this).gold_comparison_text(os, element_list_view(gold), er);
			}
			void metadata_text(std::ostream& os) const
			{
				element_list_view(*this).metadata_text(os);
			}

			bool has_paired() const
			{
				return element_list_view(*this).has_paired();
			}

			bool useful() const
			{
				return element_list_view(*this).useful();
			}

			void clear_paired()
			{
				auto it = ev_.end();
				while (it != ev_.begin())
				{
					auto it1 = it;
					--it;

					if (it1 != ev_.end()
						&& (*it1)->sense() == element_sense::CLOSE
						&& (*it)->sense() == element_sense::OPEN)
					{
						// a pair to delete
						it = ev_.erase(it);
						it = ev_.erase(it);
						// now it is the element after the pair
					}
				}
			}

			bool operator==(const element_list& b) const
			{
				if (ev_.size() != b.ev_.size())
					return false;
				auto n = ev_.size();
				for (std::size_t i = 0; i < n; ++i)
				{
					auto&& ap = ev_[i];
					auto&& bp = b.ev_[i];
					if (!ap->equal(&*bp))
						return false;
				}
				return true;
			}
		private:
			element_vector ev_;
		};

		inline element_list element_list_view::clone() const
		{
			element_list el;

			for (auto&& a : *this)
			{
				el.push_back(a->clone());
			}

			return el;
		}

		template< typename tag>
		struct tag_traits
		{
			static void code_tag(std::ostream& os)
			{
				os << tag::code_name();
			}
		};

		template< typename tag_category, typename tag, element_sense sense>
		struct element_traits;

		template< typename tag, element_sense sense>
		using element_traits_t = element_traits< typename tag::tag_category, tag, sense>;

		inline void print_list(element_list_view el, element_list_view prefix = {})
		{
#ifdef PRINT_META
			prefix.metadata_text(std::cout);
			el.metadata_text(std::cout);
#endif
			if (prefix.data_size())
			{
#ifdef PRINT_META
				std::cout << '\t';
#endif
				prefix.data_text(std::cout);
			}
			if (el.data_size())
			{
#ifndef PRINT_META
				if (prefix.data_size())
#endif
					std::cout << '\t';
				el.data_text(std::cout);
			}
			std::cout << std::endl;
		}

		struct reducer_node;
		using reducer_list = std::vector< reducer_node>;
		using reduced_list = std::vector< element_list>;

		struct reducer_node {
			element_list_view source_range;
			reducer_list children;
			element_list reduced_children;
		};

		inline reducer_list view_to_list(element_const_iterator& b, element_const_iterator e)
		{
			reducer_list rl;

			while (b != e && (*b)->sense() == element_sense::OPEN)
			{
				auto b1 = b;
				++b;
				reducer_node rn1;
				rn1.children = view_to_list(b, e);
				assert(b != e);
				assert((*b)->sense() == element_sense::CLOSE);
				++b;
				rn1.source_range = element_list_view(b1, b);
				rl.push_back(std::move(rn1));
			}

			return rl;
		}

		inline void print_list(std::ostream& os, reducer_list& rl, const std::string& indent = {})
		{
			for (auto&& a : rl)
			{
				os << indent;
				(*a.source_range.begin())->metadata_marker(os);
				os << "\t";
				a.source_range.metadata_text(os);
				os << std::endl;
				print_list(os, a.children, indent + "\t");
				os << indent;
				(*(a.source_range.end() - 1))->metadata_marker(os);
				os << std::endl;
			}
		}

		inline std::size_t deepest_reducible(const reducer_list& rl)
		{
			std::size_t m = 0;

			for (auto&& a : rl)
			{
				if ((*a.source_range.begin())->reducible())
				{
					m = std::max< std::size_t>(m, 0);
				}
				else
				{
					m = std::max< std::size_t>(m, 1 + deepest_reducible(a.children));
				}
			}
			return m;
		}

		inline void reduce_list(reduced_list& nl, const reducer_list& rl)
		{
			std::unordered_map< std::string, element_list> reduction_map;
			std::vector< std::unordered_map< std::string, element_list>::pointer> reduction_order;

			for (auto&& a : rl)
			{
				element_list_view src = a.source_range;
				if (!a.reduced_children.empty())
					src = a.reduced_children;

				auto mode = src.child_reduction_mode();

				std::ostringstream oss;
				src.metadata_text(oss);
				auto n = oss.str();

				//std::cout << "Reduce mode " << (int)mode << " for " << n;

				auto rv = reduction_map.try_emplace(std::move(n));
				auto&& e = rv.first->second;
				if (rv.second)
				{
					// first seen
					reduction_order.push_back(&*rv.first);
					auto sz = src.size();

					//std::cout << " first";
					for (std::size_t i = 0; i < sz; ++i)
					{
						//if (src[i]->data_size()) { std::cout << " "; src[i]->data_text(std::cout, 0); }

						e.push_back(src[i]->aggregate_init());
					}
				}
				else
				{
					auto sz = e.size();
					assert(sz == src.size());

					//std::cout << " next";
					for (std::size_t i = 0; i < sz; ++i)
					{
						//if (src[i]->data_size()) { std::cout << " "; src[i]->data_text(std::cout, 0); }

						src[i]->aggregate_to(e[i], mode);
					}
				}

				//std::cout << std::endl;
			}

			for (auto p : reduction_order)
			{
				nl.push_back(std::move(p->second));
			}
		}

		inline void reduce_node(reducer_node& rn, std::size_t depth)
		{
			if (depth != 0)
			{
				if (!(*rn.source_range.begin())->reducible())
				{
					for (auto&& a : rn.children)
					{
						reduce_node(a, depth - 1);
					}
				}
			}
			else
			{
#ifdef PRINT_REDUCTION
				std::cout << "Reducing \t";
				print_list(rn.source_range);
#endif
				reduced_list nl;
				reduce_list(nl, rn.children);

				rn.reduced_children.push_back((*rn.source_range.begin())->clone());
				for (auto&& a : nl)
				{
					rn.reduced_children.push_back(std::move(a));
				}
				rn.reduced_children.push_back((*(rn.source_range.end() - 1))->clone());
#ifdef PRINT_REDUCTION
				std::cout << "\t";
				print_list(rn.reduced_children);
#endif
			}
		}

		struct element_list_hash {
			std::size_t operator()(const element_list& el) const
			{
				std::ostringstream os;
				el.metadata_text(os);
				os << "\t";
				el.data_text(os);
				return hash_(os.str());
			}
		private:
			std::hash<std::string> hash_;
		};
	}

	struct gold_pair;

	struct gold_data {
		gold_data()
		{}

		gold_data(const gold_data& b);
		gold_data(gold_data&& b) noexcept = default;

		gold_data& operator=(const gold_data& b);
		gold_data & operator=(gold_data&& b) noexcept = default;

		~gold_data() noexcept = default;

		void insert(gold_pair p);

		void append(gold_data b)
		{
			dm.merge(b.dm);
			assert(b.dm.empty());
		}

		const impl::element_list* find(const impl::element_list& key) const
		{
			auto it = dm.find(key);
			return it == dm.end() ? nullptr : &it->second;
		}

		gold_data(std::initializer_list<gold_pair> il);

		using data_map = std::unordered_map< impl::element_list, impl::element_list, impl::element_list_hash>;
		data_map dm;
	};

	namespace impl {
#pragma region enum_range
		template< typename enum_t = std::size_t>
		class enum_iterator {
		private:
			using self_ = enum_iterator<enum_t>;
		public:
			using iterator_category = std::input_iterator_tag;
			using value_type = enum_t;
			using difference_type = int;
			using pointer = const enum_t*;
			using reference = const enum_t&;
			enum_iterator()
			{}
			explicit enum_iterator(enum_t v)
				: v_(std::move(v))
			{}
			self_& operator++()
			{
				v_ = enum_t((int)v_ + 1);
				return *this;
			}
			self_ operator++(int)
			{
				auto old = *this;
				operator++();
				return old;
			}
			bool operator==(const self_& b) const
			{
				return v_ == b.v_;
			}
			bool operator!=(const self_& b) const
			{
				return v_ != b.v_;
			}
			reference operator*() const
			{
				return v_;
			}
			pointer operator->() const
			{
				return &v_;
			}
		private:
			enum_t v_;
		};

		template< typename enum_t>
		class enum_range {
		public:
			using iterator = enum_iterator< enum_t>;
			enum_range()
				: b_(enum_t(0)), e_(enum_t::SIZE_)
			{}
			enum_range(enum_t b, enum_t e)
				: b_(std::move(b)), e_(std::move(e))
			{}
			iterator begin() const
			{
				return iterator(b_);
			}
			iterator end() const
			{
				return iterator(e_);
			}
		private:
			enum_t b_;
			enum_t e_;
		};
#pragma endregion
		using element_observer_vector = std::vector<element_observer>;

		inline void print_node(const gold_data& gd, 
			const reducer_node& rn, 
			std::size_t depth,
			const element_observer_vector & openers = {},
			const element_observer_vector & closers = {})
		{
			if (depth != 0)
			{
				if (!(*rn.source_range.begin())->reducible())
				{
					auto o2 = openers;
					auto c2 = closers;
					o2.push_back(&**rn.source_range.begin());
					c2.push_back(&**(rn.source_range.end()-1));
					for (auto&& a : rn.children)
					{
						print_node(gd, a, depth - 1, o2, c2);
					}
				}
			}
			else
			{
				std::array< element_list, std::size_t(element_relevance::SIZE_)> key;
				for (auto&& a : openers)
				{
					for (auto v : enum_range<element_relevance>())
					{
						if (a->relevant(v))
						{
							key[std::size_t(v)].push_back(a->clone());
						}
					}
				}
				for (auto&& a : rn.reduced_children)
				{
					if (a->sense() == element_sense::OPEN)
					{
						for (auto v : enum_range<element_relevance>())
						{
							if (a->relevant(v))
							{
								key[std::size_t(v)].push_back(a->clone());
							}
						}
					}
				}

				std::array< const element_list *, std::size_t(element_relevance::SIZE_)> gold_value;
				for (auto v : enum_range<element_relevance>())
				{
					gold_value[std::size_t(v)] = gd.find(key[std::size_t(v)]);
				}
#ifdef PRINT_META
				for (auto&& a : openers)
				{
					a->metadata_marker(std::cout);
				}
				rn.reduced_children.metadata_text(std::cout);
				std::size_t s = 1;
#else
				std::size_t s = 0;
#endif
				for (auto&& a : openers)
				{
					for (std::size_t i = 0; i < a->data_size(); ++i)
					{
						if ( !!s )
							std::cout << '\t';
						a->data_text(std::cout, i);
						++s;
					}
				}
				if (rn.reduced_children.data_size())
				{
					if (!!s)
						std::cout << '\t';
					rn.reduced_children.data_text(std::cout);
					++s;
				}

				for (auto v : enum_range<element_relevance>())
				{
					if (!!s)
						std::cout << '\t';
					if (!!gold_value[std::size_t(v)] && gold_value[std::size_t(v)]->data_size())
					{
						rn.reduced_children.gold_comparison_text(std::cout, *gold_value[std::size_t(v)], v);
					}
					else
					{
						std::cout << '?';
					}
					++s;
				}
				std::cout << std::endl;
			}
		}

		inline void print_node_code(std::ostream& osdecl, 
			std::ostream& osinit,
			const reducer_node& rn, 
			std::size_t depth,
			element_relevance er, 
			std::size_t i,
			const std::string opener_prefix = {},
			const element_observer_vector& openers = {},
			const element_observer_vector& closers = {})
		{
			auto op2 = opener_prefix;
			if (!opener_prefix.empty())
				op2 += "_";
			op2 += std::to_string(i);

			osdecl << "    static fmwkng::gold_pair gr_" << op2 << "()" << std::endl;
			osdecl << "    {" << std::endl;
			osdecl << "        fmwkng::gold_pair rv;" << std::endl;
			if (!opener_prefix.empty())
				osdecl << "        rv.key = gp_" << opener_prefix << "();" << std::endl;
			for (auto&& a : rn.reduced_children)
			{
				if (a->sense() == element_sense::OPEN && a->relevant(er))
				{
					osdecl << "        rv.key.push_back(";
					a->make_code(osdecl);
					osdecl << ");";
					osdecl << std::endl;
				}
				if (a->sense() == element_sense::CLOSE && a->relevant(er))
				{
					osdecl << "        rv.value.push_back(";
					a->make_code(osdecl);
					osdecl << ");";
					osdecl << std::endl;
				}
			}
			osdecl << "        return rv;" << std::endl;
			osdecl << "    }" << std::endl;

			if (depth > 1)
			{
				osdecl << "    static fmwkng::impl::element_list gp_" << op2 << "()" << std::endl;
				osdecl << "    {" << std::endl;
				osdecl << "        fmwkng::impl::element_list rv";
				if (!opener_prefix.empty())
					osdecl << " = gp_" << opener_prefix << "()";
				osdecl << ";" << std::endl;
				auto&& a = *rn.source_range.begin();
				if (!a->reducible())
				{
					if (a->relevant(er))
					{
						osdecl << "        rv.push_back(";
						a->make_code(osdecl);
						osdecl << ");";
						osdecl << std::endl;
					}
				}
				osdecl << "        return rv;" << std::endl;
				osdecl << "    }" << std::endl;

				if (!(*rn.source_range.begin())->reducible())
				{
					auto o2 = openers;
					auto c2 = closers;
					o2.push_back(&**rn.source_range.begin());
					c2.push_back(&**(rn.source_range.end() - 1));
					std::size_t j = 0;
					for (auto&& a : rn.children)
					{
						++j;
						print_node_code(osdecl, osinit, a, depth - 1, er, j, op2, o2, c2);
					}
				}
			}
			{
				osinit << "        rv.insert(gr_" + op2 + "());" << std::endl;
			}
		}

		inline reducer_list reduce_list(element_list_view el)
		{
			auto b = el.begin();
			reducer_list root = view_to_list( b, el.end());
			assert(b == el.end());

			auto depth = deepest_reducible(root);

			//print_list(std::cout, root);

			for (auto d = depth; d > 0;)
			{
				--d;
				for (auto&& a : root)
				{
					reduce_node(a, d);
				}
			}

			return root;
		}

		inline void print_all(const gold_data & gd, element_list_view el, element_list_view prefix = {})
		{
			//print_list(el, prefix);
			auto root = reduce_list(el);
			auto depth = deepest_reducible(root);
			//print_list(nel, prefix);
			element_observer_vector openers;
			for (auto&& a : prefix)
			{
				openers.push_back(&*a);
			}
			for (auto d = depth; d > 1;)	// avoid aggregated version_tag
			{
				--d;
				for (auto&& a : root)
				{
					print_node(gd, a, d, openers);
				}
			}
		}

		inline void print_all(element_list_view el, element_list_view prefix = {})
		{
			print_all(gold_data(), el, prefix);
		}

		inline void print_all_code(std::ostream & osdecl, std::ostream& osinit, element_list_view el, element_relevance er)
		{
			auto root = reduce_list(el);
			auto depth = deepest_reducible(root);
			std::size_t i = 0;
			for (auto&& a : root)
			{
				++i;
				print_node_code(osdecl, osinit, a, depth, er, i);
			}
		}

		template< typename tag, element_sense sense_p, typename data_t>
		class element : public abstract_element {
		public:
			explicit element(data_t d)
				: d_(std::move(d))
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>(d_);
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::element_t<";
				tag_traits<tag>::code_tag(os);
				os << "," << sense_traits<sense_p>::code_name() << ">>(";
				my_traits::code_data(os, d_);
				os << ")";
			}
			virtual std::size_t data_size() const override
			{
				return my_traits::has_data(d_) ? 1 : 0;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(i == 0);
				my_traits::data_text(os, d_);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
				auto p = dynamic_cast<const self_*>(gold);
				assert(!!p);
				my_traits::gold_comparison_text(os, d_, p->d_);
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				if constexpr (sense_p == element_sense::CLOSE)
					return reduction_mode::UNDEF;
				else
					return my_traits::child_reduction_mode;
			}
			virtual element_sense sense() const override
			{
				return sense_p;
			}
			virtual bool relevant(element_relevance er) const override
			{
				return my_traits::relevant(er);
			}
			virtual bool useful() const override
			{
				return my_traits::useful;
			}
			virtual bool reducible() const override
			{
				return my_traits::reducible;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>(my_traits::aggregator_data(d_));
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode mode) const override
			{
				auto p = dynamic_cast<my_aggregate*>(aggr);
				assert(!!p);
				my_traits::aggregate(p->data(), d_, mode);
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return d_ == p->d_;
			}
			data_t& data()
			{
				return d_;
			}
		private:
			using my_traits = element_traits_t<tag, sense_p>;
			using self_ = element< tag, sense_p, data_t>;
			data_t d_;
			using my_aggregate = typename my_traits::template aggregator<sense_p>;
		};

		template< typename tag, element_sense sense_p>
		class element< tag, sense_p, void> : public abstract_element {
		public:
			element()
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>();
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::element_t<";
				tag_traits<tag>::code_tag(os);
				os << "," << sense_traits<sense_p>::code_name() << ">>()";
			}
			virtual std::size_t data_size() const override
			{
				return 0;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(false);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				if constexpr (sense_p == element_sense::CLOSE)
					return reduction_mode::UNDEF;
				else
					return my_traits::child_reduction_mode;
			}
			virtual element_sense sense() const override
			{
				return sense_p;
			}
			virtual bool relevant(element_relevance er) const override
			{
				return false;
			}
			virtual bool useful() const override
			{
				return false;
			}
			virtual bool reducible() const override
			{
				return my_traits::reducible;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>();
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode) const override
			{
				assert(!!dynamic_cast<my_aggregate*>(aggr));
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return true;
			}
		private:
			using my_traits = element_traits_t<tag, sense_p>;
			using self_ = element< tag, sense_p, void>;
			using my_aggregate = typename my_traits::template aggregator<sense_p>;
		};

		template< typename tag, element_sense sense>
		using element_t = element< tag, sense, typename element_traits_t< tag, sense>::data_type>;

		template< typename tag_category, typename tag>
		struct config_element_traits;

		template< typename tag>
		using config_element_traits_t = config_element_traits< typename tag::tag_category, tag>;

		template< typename tag_category, typename tag>
		struct result_element_traits;

		template< typename tag>
		using result_element_traits_t = result_element_traits< typename tag::tag_category, tag>;

		template< typename tag, element_sense sense_p>
		class config_element;

		template< typename tag, element_sense sense_p>
		class result_element;

		template< typename tag>
		class config_element< tag, element_sense::OPEN> : public abstract_element {
		private:
			using my_element_traits = element_traits_t<tag, element_sense::OPEN>;
			using my_traits = config_element_traits_t<tag>;
			using data_t = typename my_traits::data_type;
		public:
			explicit config_element(data_t d)
				: d_(std::move(d))
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>(d_);
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::config_element<";
				tag_traits<tag>::code_tag(os);
				os << ",fmwkng::impl::element_sense::OPEN>>(";
				my_traits::code_data(os, d_);
				os << ")";
			}
			virtual std::size_t data_size() const override
			{
				return 1;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(i == 0);
				my_traits::data_text(os, d_);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
				auto p = dynamic_cast<const self_*>(gold);
				assert(!!p);
				my_traits::gold_comparison_text(os, d_, p->d_);
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker_open(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				return my_traits::child_reduction_mode;
			}
			virtual element_sense sense() const override
			{
				return element_sense::OPEN;
			}
			virtual bool relevant(element_relevance er) const override
			{
				return my_traits::relevant(er);
			}
			virtual bool useful() const override
			{
				return false;
			}
			virtual bool reducible() const override
			{
				return false;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>(my_traits::aggregator_data(d_));
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode mode) const override
			{
				auto p = dynamic_cast<my_aggregate*>(aggr);
				assert(!!p);
				my_traits::aggregate(p->data(), d_, mode);
			}
			data_t & data()
			{
				return d_;
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return d_ == p->d_;
			}
		private:
			using self_ = config_element< tag, element_sense::OPEN>;
			data_t d_;
			using my_aggregate = typename my_traits::template aggregator<element_sense::OPEN>;
		};

		template< typename tag>
		class config_element< tag, element_sense::CLOSE> : public abstract_element {
		private:
			using my_element_traits = element_traits_t<tag, element_sense::CLOSE>;
		public:
			config_element()
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>();
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::config_element<";
				tag_traits<tag>::code_tag(os);
				os << ",fmwkng::impl::element_sense::CLOSE>>()";
			}
			virtual std::size_t data_size() const override
			{
				return 0;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(false);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker_close(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				return reduction_mode::UNDEF;
			}
			virtual element_sense sense() const override
			{
				return element_sense::CLOSE;
			}
			virtual bool relevant(element_relevance) const override
			{
				return false;
			}
			virtual bool useful() const override
			{
				return false;
			}
			virtual bool reducible() const override
			{
				return false;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>();
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode) const override
			{
				assert(!!dynamic_cast<my_aggregate*>(aggr));
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return true;
			}
		private:
			using my_traits = config_element_traits_t<tag>;
			using self_ = config_element< tag, element_sense::CLOSE>;
			using my_aggregate = typename my_traits::template aggregator<element_sense::CLOSE>;
		};

		template< typename tag>
		class result_element< tag, element_sense::OPEN> : public abstract_element {
		private:
			using my_element_traits = element_traits_t<tag, element_sense::OPEN>;
		public:
			result_element()
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>();
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::result_element<";
				tag_traits<tag>::code_tag(os);
				os << ",fmwkng::impl::element_sense::OPEN>>()";
			}
			virtual std::size_t data_size() const override
			{
				return 0;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(false);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker_open(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				return reduction_mode::UNDEF;
			}
			virtual element_sense sense() const override
			{
				return element_sense::OPEN;
			}
			virtual bool relevant(element_relevance) const override
			{
				return false;
			}
			virtual bool useful() const override
			{
				return false;
			}
			virtual bool reducible() const override
			{
				return false;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>();
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode) const override
			{
				assert(!!dynamic_cast<my_aggregate*>(aggr));
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return true;
			}
		private:
			using my_traits = result_element_traits_t<tag>;
			using self_ = result_element< tag, element_sense::OPEN>;
			using my_aggregate = typename my_traits::template aggregator<element_sense::OPEN>;
		};

		template< typename tag>
		class result_element< tag, element_sense::CLOSE> : public abstract_element {
		private:
			using my_element_traits = element_traits_t<tag, element_sense::CLOSE>;
			using my_traits = result_element_traits_t<tag>;
			using data_t = typename my_traits::data_type;
		public:
			explicit result_element(data_t d)
				: d_(std::move(d))
			{}
			virtual element_ptr clone() const override
			{
				return std::make_unique< self_>(d_);
			}
			virtual void make_code(std::ostream& os) const override
			{
				os << "std::make_unique<fmwkng::impl::result_element<";
				tag_traits<tag>::code_tag(os);
				os << ",fmwkng::impl::element_sense::CLOSE>>(";
				my_traits::code_data(os, d_);
				os << ")";
			}
			virtual std::size_t data_size() const override
			{
				return 1;
			}
			virtual void data_text(std::ostream& os, std::size_t i) const override
			{
				assert(i == 0);
				my_traits::data_text(os, d_);
			}
			virtual void gold_comparison_text(std::ostream& os, const abstract_element* gold) const override
			{
				auto p = dynamic_cast<const self_*>(gold);
				assert(!!p);
				my_traits::gold_comparison_text(os, d_, p->d_);
			}
			virtual void metadata_marker(std::ostream& os) const override
			{
				my_traits::metadata_marker_close(os);
			}
			virtual reduction_mode child_reduction_mode() const override
			{
				return reduction_mode::UNDEF;
			}
			virtual element_sense sense() const override
			{
				return element_sense::CLOSE;
			}
			virtual bool relevant(element_relevance er) const override
			{
				return my_traits::relevant(er);
			}
			virtual bool useful() const override
			{
				return false;
			}
			virtual bool reducible() const override
			{
				return false;
			}
			virtual element_ptr aggregate_init() const override
			{
				return std::make_unique< my_aggregate>(my_traits::aggregator_data(d_));
			}
			virtual void aggregate_to(abstract_element* aggr, reduction_mode mode) const override
			{
				auto p = dynamic_cast<my_aggregate*>(aggr);
				assert(!!p);
				my_traits::aggregate(p->data(), d_, mode);
			}
			virtual bool equal(const abstract_element* bp) const override
			{
				auto p = dynamic_cast<const self_*>(bp);
				if (!p)
					return false;
				return d_ == p->d_;
			}
			data_t& data()
			{
				return d_;
			}
		private:
			using self_ = result_element< tag, element_sense::CLOSE>;
			data_t d_;
			using my_aggregate = typename my_traits::template aggregator<element_sense::CLOSE>;
		};

#pragma endregion
#pragma region index_range
		template< typename index_t = std::size_t>
		class index_iterator {
		private:
			using self_ = index_iterator<index_t>;
		public:
			using iterator_category = std::bidirectional_iterator_tag;
			using value_type = index_t;
			using difference_type = std::make_signed_t<index_t>;
			using pointer = const index_t*;
			using reference = const index_t&;
			index_iterator()
			{}
			explicit index_iterator(index_t v)
				: v_(std::move(v))
			{}
			self_& operator++()
			{
				++v_;
				return *this;
			}
			self_ operator++(int)
			{
				return self_(v_++);
			}
			self_& operator--()
			{
				--v_;
				return *this;
			}
			self_ operator--(int)
			{
				return self_(v_--);
			}
			bool operator==(const self_& b) const
			{
				return v_ == b.v_;
			}
			bool operator!=(const self_& b) const
			{
				return v_ != b.v_;
			}
			reference operator*() const
			{
				return v_;
			}
			pointer operator->() const
			{
				return &v_;
			}
		private:
			index_t v_;
		};

		template< typename index_t = std::size_t>
		class index_range {
		public:
			using iterator = index_iterator< index_t>;
			index_range(index_t b, index_t e)
				: b_(std::move(b)), e_(std::move(e))
			{}
			iterator begin() const
			{
				return iterator(b_);
			}
			iterator end() const
			{
				return iterator(e_);
			}
		private:
			index_t b_;
			index_t e_;
		};
#pragma endregion
#pragma region bool_range
		template< typename value_f>
		class bool_iterator {
		private:
			using self_ = bool_iterator<value_f>;
		public:
			using iterator_category = std::input_iterator_tag;
			using value_type = std::remove_cv_t< std::remove_reference_t< decltype(std::declval<value_f>()())>>;
			using difference_type = int;
			//using pointer = decltype(& std::declval<value_f>()());
			using reference = decltype(std::declval<value_f>()());
			template<typename F>
			explicit bool_iterator(bool v, F&& f)
				: v_(v), f_(std::forward<F>(f))
			{}
			self_& operator++()
			{
				v_ = true;
				return *this;
			}
			self_ operator++(int)
			{
				self_ rv(*this);
				v_ = true;
				return this;
			}
			bool operator==(const self_& b) const
			{
				return v_ == b.v_;
			}
			bool operator!=(const self_& b) const
			{
				return v_ != b.v_;
			}
			reference operator*() const
			{
				return f_();
			}
			/*
			pointer operator->() const
			{
				return &f_();
			}
			*/
		private:
			bool v_;
			value_f f_;
		};

		template< typename value_f>
		class bool_range {
		public:
			using iterator = bool_iterator< value_f>;
			template< typename F>
			bool_range(bool r, F&& f)
				: r_(r), f_(std::forward<F>(f))
			{}
			iterator begin() const
			{
				return iterator(false, f_);
			}
			iterator end() const
			{
				return iterator(r_, f_);
			}
		private:
			bool r_;
			value_f f_;
		};

		template<typename F>
		bool_range(bool, F&&)->bool_range<std::remove_cv_t< std::remove_reference_t<F>>>;
#pragma endregion
#pragma region context_range
		template< typename range_tag>
		using enumerator_value_t = typename decltype(range_tag::enumerator())::value_type;

		template< typename range_tag>
		using controller_tag_category = typename decltype(range_tag::enumerator())::controller_tag_category;

		template< typename context_t, typename diff_t>
		class context_iterator {
		private:
			using self_ = context_iterator<context_t, diff_t>;
		public:
			using iterator_category = std::input_iterator_tag;
			using value_type = context_t;
			using difference_type = diff_t;
			using pointer = context_t*;
			using reference = context_t&;

			explicit context_iterator(context_t* p)
				: p_(p)
			{}
			self_& operator++()
			{
				p_ = p_->advance();
				return *this;
			}
			self_ operator++(int)
			{
				self_ rv(*this);
				p_ = p_->advance();
				return this;
			}
			bool operator==(const self_& b) const
			{
				return p_ == b.p_;
			}
			bool operator!=(const self_& b) const
			{
				return p_ != b.p_;
			}
			reference operator*() const
			{
				return *p_;
			}
			pointer operator->() const
			{
				return p_;
			}

		private:
			context_t* p_;
		};

		template< typename context_t, typename diff_t>
		class context_range {
		public:
			using iterator = context_iterator< context_t, diff_t>;
			template< typename ... TL>
			context_range(TL&& ... vl)
				: c_(std::forward<TL>(vl) ...)
			{}
			iterator begin()
			{
				return iterator(c_.current());
			}
			iterator end()
			{
				return iterator(nullptr);
			}
		private:
			context_t c_;
		};
#pragma endregion
	}
	using average_t = std::uint_fast64_t;
	namespace impl {
#pragma region parallel_utils
		class master : impl::immovable {
		public:
			master()
			{}

			std::lock_guard<std::mutex> guard()
			{
				return std::lock_guard<std::mutex>(mtx_);
			}

			template< typename F>
			void ex(F&& f)
			{
				std::lock_guard lg(mtx_);
				f();
			}
		private:
			std::mutex mtx_;
		};

		template< typename ab_t, typename ba_t>
		class seesaw : impl::immovable {
		public:
			seesaw()
			{}

			ab_t ab_wait()
			{
				auto abf = abp_.get_future();
				abf.wait();
				return abf.get();
			}

			void ab_send(ab_t v)	// clears the ba channel
			{
				bap_ = ba_promise();
				abp_.set_value(std::move(v));
			}

			ba_t ba_wait()
			{
				auto baf = bap_.get_future();
				baf.wait();
				return baf.get();
			}

			void ba_send(ba_t v)	// clears the ab channel
			{
				abp_ = ab_promise();
				bap_.set_value(std::move(v));
			}
		private:
			using ab_promise = std::promise<ab_t>;
			using ba_promise = std::promise<ba_t>;
			ab_promise abp_;
			ba_promise bap_;
		};

		using master_worker_message = std::variant<std::monostate, std::monostate, average_t, std::monostate>;
		struct master_worker_message_type { 
			static constexpr std::size_t STOP = 0;
			static constexpr std::size_t RUN = 1;
			static constexpr std::size_t AVERAGE = 2;
			static constexpr std::size_t CONFIRM_ENTER_SERIAL = 3;
		};

		using worker_master_message = std::variant<std::monostate, std::monostate, average_t, element_list, std::monostate, std::monostate>;
		struct worker_master_message_type { 
			static constexpr std::size_t FINISH = 0;
			static constexpr std::size_t CONTINUE = 1;
			static constexpr std::size_t COMPUTE_AVERAGE = 2;
			static constexpr std::size_t SEND_ELEMENTS = 3;
			static constexpr std::size_t WANT_ENTER_SERIAL = 4;
			static constexpr std::size_t EXIT_SERIAL = 4;
		};

		using master_worker_seesaw = seesaw<master_worker_message, worker_master_message>;

		class worker : impl::immovable {
		public:
			template< typename F>
			worker(master* m, std::size_t i, F&& f)
				: thr_(std::forward<F>(f), &ss_, m, i), working_(true)
			{}

			bool working() const
			{
				return working_;
			}

			void launch_worker(master_worker_message s)	// assuming worker waiting at worker_future
			{
				assert(working_);
				ss_.ab_send(std::move(s));
			}

			worker_master_message wait_for_worker()
			{
				assert(working_);
				auto rv = ss_.ba_wait();
				working_ = (rv.index() != worker_master_message_type::FINISH);
				return rv;
			}

			void join()
			{
				assert(!working_);
				thr_.join();
			}

		private:
			master_worker_seesaw ss_;		// must be initialized before the thread thr_
			std::thread thr_;
			bool working_;
		};

		class workers {
		public:
			template<typename F>
			workers(std::size_t n, master* m, F&& f)
			{
				for (std::size_t i = 0; i < n; ++i)
				{
					ws_.emplace_back(m, i, f);
				}
			}

			~workers() noexcept
			{
				while (!ws_.empty())
				{
					auto&& b = ws_.back();
					try {
						b.join();
					}
					catch (...)
					{
					}
					ws_.pop_back();
				}
			}

			std::vector< worker_master_message> wait_for_workers()
			{
				std::vector< worker_master_message> rva;

				for (auto&& w : ws_)
				{
					if (w.working())
					{
						auto rv = w.wait_for_worker();
						rva.push_back(std::move(rv));
					}
					else
					{
						rva.push_back(worker_master_message(std::in_place_index< worker_master_message_type::FINISH>));
					}
				}

				return rva;
			}

			std::vector< worker_master_message> launch_and_wait_workers_batched(master_worker_message s, std::size_t batch_size)	// assuming workers waiting at worker_future
			{
				std::vector< worker_master_message> rva;

				auto b = ws_.begin();
				auto e = ws_.end();
				while (b != e)
				{
					auto b1 = b;
					for (std::size_t i = 0; i < batch_size && b1 != e; ++i, ++b1)
					{
						auto&& w = *b1;
						if (w.working())
						{
							w.launch_worker(s);
						}
					}
					for (; b != b1; ++b)
					{
						auto&& w = *b;
						if (w.working())
						{
							auto rv = w.wait_for_worker();
							rva.push_back(std::move(rv));
						}
						else
						{
							rva.push_back(worker_master_message(std::in_place_index< worker_master_message_type::FINISH>));
						}
					}
				}

				return rva;
			}
		private:
			std::list< worker> ws_;		// must be immovable
		};
#pragma endregion
#pragma region tag_list_utils1
		template< template< typename, typename, typename...> class C,
			typename X, typename Y, typename ... ZL>
			struct remove_first;

		template< template< typename, typename, typename...> class C,
			typename X, typename Y, typename U, typename ... ZL>
			struct remove_first< C, X, Y, U, ZL ...>
		{
			using type = C<X, Y, ZL...>;
		};

		template< template< typename, typename, typename...> class C,
			typename X, typename Y, typename ... ZL>
			using remove_first_t = typename remove_first< C, X, Y, ZL...>::type;
#pragma endregion
#pragma region data_tuple
		template< typename tag_category, typename tag>
		struct data_policy;

		template< typename tag>
		using data_holder = typename data_policy< typename tag::tag_category, tag>::type;

		template< typename my_tag, typename ... parent_tags>
		class data_tuple;

		template< typename my_tag, typename first_parent_tag, typename ... other_parent_tags>
		class data_tuple< my_tag, first_parent_tag, other_parent_tags...>
		{
		private:
			using self_ = data_tuple< my_tag, first_parent_tag, other_parent_tags...>;
			using parent_pointer_tuple = std::tuple< const data_holder< first_parent_tag>*, const data_holder< other_parent_tags> *...>;
			using parent_data = data_holder< first_parent_tag>;
			using parent_parent_pointer_tuple = std::tuple< const data_holder< other_parent_tags> *...>;
		public:
			template< typename ... AL>
			data_tuple(const parent_data* pd, const parent_parent_pointer_tuple& pppt, AL&& ... al)
				: md_(std::forward<AL>(al)...),
				ppt_(pd, std::get<const data_holder< other_parent_tags>*>(pppt)...)
			{}

			template< typename tag>
			const data_holder< tag>* get_pointer() const
			{
				return std::conditional_t< std::is_same_v< tag, my_tag>,
					my_policy, parent_policy<tag>>::get_pointer(this);
			}

			using my_data = data_holder< my_tag>;
			my_data* get_my_pointer()
			{
				return &md_;
			}

			const my_data* get_my_pointer() const
			{
				return &md_;
			}

			const parent_pointer_tuple& get_parent_pointer_tuple() const
			{
				return ppt_;
			}
		private:
			my_data md_;
			parent_pointer_tuple ppt_;

			struct my_policy {
				static const my_data* get_pointer(const self_* t)
				{
					return &t->md_;
				}
			};

			template< typename tag>
			struct parent_policy {
				static const data_holder<tag>* get_pointer(const self_* t)
				{
					return std::get<const data_holder<tag>*>(t->ppt_);
				}
			};
		};

		template< typename my_tag>
		class data_tuple< my_tag>
		{
		public:
			template< typename ... AL>
			data_tuple(AL&& ... al)
				: md_(std::forward<AL>(al)...)
			{}

			template< typename tag>
			const data_holder< tag>* get_pointer() const
			{
				static_assert(std::is_same_v< tag, my_tag>, "Tag not found");
				return &md_;
			}

			using my_data = data_holder< my_tag>;
			my_data* get_my_pointer()
			{
				return &md_;
			}

			const my_data* get_my_pointer() const
			{
				return &md_;
			}

			std::tuple<> get_parent_pointer_tuple() const
			{
				return std::tuple<>();
			}
		private:
			my_data md_;
		};
#pragma endregion
	}
#pragma region categories
	struct platform_tag_category {};
	struct range_tag_category {};
	struct parallel_tag_category {};
	struct measurement_tag_category {};
	struct serial_tag_category {};
	struct result_tag_category {};

	struct all_platforms_tag {
		using tag_category = platform_tag_category;
	};

	namespace impl {
		template<>
		struct tag_traits<all_platforms_tag>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::all_platforms_tag";
			}
		};
	}

	struct all_threads_tag {
		using tag_category = parallel_tag_category;
	};

	namespace impl {
		template<>
		struct tag_traits<all_threads_tag>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::all_threads_tag";
			}
		};
	}
#pragma endregion
	namespace impl {
#pragma region utils2
		template< typename T>
		struct pass {
			using type = T;
		};
		template< typename P>
		using pass_t = typename std::remove_cv_t<std::remove_reference_t<P>>::type;
#pragma endregion
#pragma region root1
		struct root_tag_category {};

		template< typename config_t>
		struct root_tag {
			using tag_category = root_tag_category;
			using config_type = config_t;
		};

		template< typename config_t>
		struct tag_traits<root_tag<config_t>>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::impl::root_tag<" << config_t::code_name() << ">";
			}
		};

		template< typename config_t>
		struct element_traits< root_tag_category, root_tag< config_t>, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
			}
			using data_type = std::string;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type&d)
			{
				os << d;
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "\"" << d << "\"";
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			static constexpr bool useful = false;
			static constexpr bool reducible = false;
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			template< element_sense sense>
			using aggregator = element_t< root_tag< config_t>, sense>;
			static data_type aggregator_data(const data_type& v)
			{
				return v;
			}
			static void aggregate(data_type&, const data_type&, reduction_mode)
			{
				assert(0);
			}
		};

		template< typename config_t>
		struct element_traits< root_tag_category, root_tag< config_t>, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
			}
			using data_type = void;
			static constexpr bool reducible = false;
			template< element_sense sense>
			using aggregator = element_t< root_tag< config_t>, sense>;
		};

		struct version_tag_category {};

		struct version_tag {
			using tag_category = version_tag_category;
		};

		template<>
		struct tag_traits<version_tag>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::impl::version_tag";
			}
		};

		template<>
		struct element_traits< version_tag_category, version_tag, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
			}
			using data_type = std::tuple< std::string, std::string, std::string>;
			static bool has_data(const data_type&d) 
			{
				using std::get;
				return !get<0>(d).empty() || !get<1>(d).empty() || !get<2>(d).empty(); 
			}
			static void data_text(std::ostream& os, const data_type& d)
			{
				using std::get;
				os << get<0>(d);
				os << "\t" << get<1>(d);
				os << "\t" << get<2>(d);
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				assert(0);
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			static constexpr bool useful = false;
			static constexpr bool reducible = false;
			static bool relevant(element_relevance er)
			{
				return false;
			}
			template< element_sense sense>
			using aggregator = config_element< version_tag, sense>;
			static std::monostate aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(std::monostate&, const data_type&, reduction_mode)
			{
				// no data - nothing to do
			}
		};

		template<>
		struct element_traits< version_tag_category, version_tag, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
			}
			using data_type = void;
			static constexpr bool reducible = false;
			template< element_sense sense>
			using aggregator = element_t< version_tag, sense>;
		};

		template< typename config_t>
		class root_data_holder {
		private:
			using self_ = root_data_holder< config_t>;
		public:
			root_data_holder(int argc, char** argv, const gold_data& gd = gold_data{})
				: gd_(gd), direct_print_(true), threads_(1)
			{
				std::fill(platform_enablers_.begin(), platform_enablers_.end(), true);
				process_arguments(std::vector< std::string>(argv + 1, argv + argc));
			}
			template< typename platform_tag>
			bool check_platform() const
			{
				static constexpr std::size_t index = config_t::platforms::template index_v<platform_tag>;
				return platform_enablers_[index];
			}
			template< typename F>
			void for_platforms(F&& f) const
			{
				config_t::platforms::for_each([this, &f](auto ps) {
					using platform_tag = pass_t<decltype(ps)>;
					static constexpr std::size_t index = config_t::platforms::template index_v<platform_tag>;
					if (platform_enablers_[index])
					{
						f(ps);
					}
					});
			}
			template< typename range_tag>
			auto& get_range_config() const
			{
				static constexpr std::size_t index = config_t::ranges::template index_v<range_tag>;
				return std::get<index>(range_configs_);
			}
			template< typename dt_t>
			void entry(const dt_t&)
			{
				push_element<root_tag<config_t>, element_sense::OPEN>( 
#ifdef NDEBUG
					machine_name_
#else
					machine_name_ + "/Debug"
#endif
					);
				push_element<version_tag, element_sense::OPEN>(std::make_tuple(
					author_, commit_, date_));
				//std::cout << "enter_root" << std::endl;
			}

			template< typename dt_t>
			void exit(const dt_t&)
			{
				push_element<version_tag, element_sense::CLOSE>();
				push_element<root_tag<config_t>, element_sense::CLOSE>();
				//std::cout << "exit_root" << std::endl;
				if (el_.has_paired())
				{
					print_elements();
				}
				print_all_elements();
				for (int i = 0; i < int(element_relevance::SIZE_); ++i)
				{
					if (!code_fn_[i].empty())
					{
						std::cout << "Generating C++ code into " << code_fn_[i] << std::endl;
						std::ofstream os(code_fn_[i]);

						std::ostringstream oss1;
						std::ostringstream oss2;

						print_all_code(oss1, oss2, all_el_, element_relevance(i));

						os << "#include \"fmwkng.hpp\"" << std::endl;
						os << "#include \"" << config_t::code_header_name() << "\"" << std::endl;
						os << "" << std::endl;
						os << "namespace " << config_t::code_namespace_name() << " {" << std::endl;

						os << oss1.str();

						os << "    static fmwkng::gold_data gold_results_()" << std::endl;
						os << "    {" << std::endl;
						os << "        fmwkng::gold_data rv;" << std::endl;

						os << oss2.str();

						os << "        return rv;" << std::endl;
						os << "    }" << std::endl;
						os << "    static fmwkng::gold_holder gh_(gold_master(), gold_results_);" << std::endl;
						os << "}" << std::endl;
					}
				}
			}

			void flush() const
			{
				if (el_.has_paired())
				{
					print_elements();
					el_.clear_paired();
				}
			}

			master* get_master_pointer() const
			{
				return &master_;
			}

			std::size_t thread_index() const
			{
				return 0;
			}

			template< typename dt_t>
			void rendezvous(const dt_t& dt) const
			{
				if (el_.has_paired())
				{
					print_elements();
					el_.clear_paired();
				}
			}

			template< typename dt_t>
			average_t rendezvous_average(const dt_t& dt, average_t v) const
			{
				if (el_.has_paired())
				{
					print_elements();
					el_.clear_paired();
				}
				return v;
			}

			std::lock_guard<std::mutex> guard() const
			{
				return master_.guard();
			}

			template< typename tag, element_sense sense, typename T>
			void push_element(T&& t) const
			{
				auto p = std::make_unique<element_t<tag, sense>>(std::forward<T>(t));
				push_element_ptr(std::move(p));
			}

			template< typename tag, element_sense sense>
			void push_element() const
			{
				auto p = std::make_unique<element_t<tag, sense>>();
				push_element_ptr(std::move(p));
			}

			void push_element_ptr(element_ptr && p) const
			{
				all_el_.push_back(p->clone());
				el_.push_back(std::move(p));
			}

			void append_elements(element_list&& el) const
			{
				all_el_.push_back(std::move(el));
			}

			void clear_paired() const
			{
				el_.clear_paired();
			}

			const element_list& el() const
			{
				return el_;
			}
			bool direct_print() const
			{
				return direct_print_;
			}
			std::size_t preferred_concurrency() const
			{
				return threads_;
			}
		private:
			std::array<bool, config_t::platforms::size_v> platform_enablers_;
			typename config_t::ranges::tuple_t range_configs_;
			mutable master master_;
			mutable element_list el_;
			mutable element_list all_el_;
			std::array< std::string, std::size_t(element_relevance::SIZE_)> code_fn_;
			gold_data gd_;
			std::string machine_name_;
			std::string author_;
			std::string commit_; 
			std::string date_;
			bool direct_print_;
			std::size_t threads_;

			void print_elements() const
			{
				if (direct_print_ && el_.useful())
				{
#ifdef PRINT_META
					el_.metadata_text(std::cout);
#endif
					if (el_.data_size())
					{
#ifdef PRINT_META
						std::cout << '\t';
#endif
						el_.data_text(std::cout);
					}
					std::cout << std::endl;
				}
			}

			void print_all_elements() const
			{
				print_all(gd_, all_el_);
			}

			void process_arguments(const std::vector< std::string>& arg)
			{
				{
#pragma warning(push)
#pragma warning(disable: 4996)
					auto slurm_partition = getenv("SLURM_JOB_PARTITION");
#pragma warning(pop)
					if (slurm_partition)
					{
						machine_name_ = slurm_partition;
						auto pos = machine_name_.rfind('-');
						if (pos != std::string::npos)
						{
							machine_name_.resize(pos);
						}
					}
					else
					{
#ifdef __linux__
						auto comp_name = getenv("HOSTNAME");
#else
#pragma warning(push)
#pragma warning(disable: 4996)
						auto comp_name = getenv("COMPUTERNAME");
#pragma warning(pop)
#endif
						if (comp_name)
						{
							machine_name_ = comp_name;
						}
					}
				}
				{
					threads_ = std::thread::hardware_concurrency();
					try {
#pragma warning(push)
#pragma warning(disable: 4996)
						auto env1 = std::getenv("SLURM_CPUS_ON_NODE");
#pragma warning(pop)
						if (env1)
						{
							auto num1 = std::stoi(env1);
							if (num1 >= 1 && num1 <= 256)
								threads_ = num1;
						}
					}
					catch (...)
					{
					}
				}
				for (auto it = arg.begin(); it != arg.end(); ++it)
				{
					auto& a = *it;
					if (a.size() >= 2 && a[0] == '-' && a[1] == '-')
					{
						auto cit = a.begin() + 2;
						auto cite = find(cit, a.end(), '=');
						auto name = std::string_view(&*cit, cite - cit);
						std::string value;
						if (cite != a.end())
						{
							value = std::string_view(&*cite + 1, a.end() - cite - 1);
						}
						while (it + 1 != arg.end() && (it[1][0] != '-' || it[1][1] != '-'))
						{
							if (value.empty())
							{
								value = it[1];
							}
							else
							{
								value += " " + it[1];
							}
							++it;
						}

						if (name == "code-check")
						{
							code_fn_[std::size_t(element_relevance::CHECK)] = value;
						}
						else if (name == "code-time")
						{
							code_fn_[std::size_t(element_relevance::TIME)] = value;
						}
						else if (name == "machine")
						{
							machine_name_ = value;
						}
						else if (name == "author")
						{
							author_ = value;
						}
						else if (name == "commit")
						{
							commit_ = value;
						}
						else if (name == "date")
						{
							date_ = value;
						}
						else if (name == "threads")
						{
							try {
								auto num1 = std::stoi(std::string(value));
								if (num1 >= 1 && num1 <= 256)
									threads_ = num1;
							}
							catch (...)
							{
							}
						}
						else if (name == "direct-print")
						{
							if (value == "1" || value == "true" || value == "on" || value == "yes")
								direct_print_ = true;
							else
								direct_print_ = false;
						}
						else if (name == "platform")
						{
							config_t::platforms::for_each([this, value](auto rs) {
								using platform_tag = pass_t<decltype(rs)>;
								static constexpr std::size_t index = config_t::platforms::template index_v<platform_tag>;
								auto&& cfg = std::get<index>(platform_enablers_);
								cfg = (value == platform_tag::name());
								});
						}
						else
						{
							config_t::ranges::for_each([this, name, value](auto rs) {
								using range_tag = pass_t<decltype(rs)>;
								if (name == range_tag::name())
								{
									static constexpr std::size_t index = config_t::ranges::template index_v<range_tag>;
									auto&& cfg = std::get<index>(range_configs_);
									cfg.config.set_arg(value);
								}
								});

							config_t::platforms::for_each([this, name, value](auto rs) {
								using platform_tag = pass_t<decltype(rs)>;
								if (name == platform_tag::name())
								{
									static constexpr std::size_t index = config_t::platforms::template index_v<platform_tag>;
									auto&& cfg = std::get<index>(platform_enablers_);
									if (value == "1" || value == "true" || value == "on" || value == "yes")
										cfg = true;
									else
										cfg = false;
								}
								});
						}
					}

				}
			}
		};

		template< typename tag>
		struct data_policy< root_tag_category, tag> {
			using type = root_data_holder< typename tag::config_type>;
		};
#pragma endregion
#pragma region search_category_tag
		template< typename T>
		struct identity {
			using type = T;
		};

		template< typename tag_category, typename ... tags>
		struct search_category_tag;

		template< typename tag_category, typename tag0, typename ... tags>
		struct search_category_tag< tag_category, tag0, tags ...> {
			using type = typename std::conditional_t< std::is_same_v< tag_category, typename tag0::tag_category>,
				identity<tag0>,
				search_category_tag< tag_category, tags...>>::type;
		};

		template< typename tag_category>
		struct search_category_tag< tag_category> {
			//static_assert(!std::is_void_v<std::void_t<tag_category>>, "tag_category not found");
			using type = void;
		};

		template< typename tag_category, typename ... tags>
		using search_category_tag_t = typename search_category_tag< tag_category, tags...>::type;
#pragma endregion
#pragma region root2
		template< typename tag_category, typename ... tags>
		inline auto category_pointer(const data_tuple< tags...>& dt)
		{
			using c_tag = impl::search_category_tag_t<tag_category, tags...>;
			static_assert(!std::is_void_v<c_tag>, "tag_category not found");
			return dt.template get_pointer<c_tag>();
		}
		template< typename ... tags>
		inline auto root_pointer(const data_tuple< tags...>& dt)
		{
			using root_tag = impl::search_category_tag_t<impl::root_tag_category, tags...>;
			static_assert(!std::is_void_v<root_tag>, "root_tag not found");
			//using root_holder = impl::data_holder< root_tag>;
			return dt.template get_pointer< root_tag>();
		}
		template< typename ... tags>
		inline auto thread_pointer(const data_tuple< tags...>& dt)
		{
			using root_tag = impl::search_category_tag_t<impl::root_tag_category, tags...>;
			static_assert(!std::is_void_v<root_tag>, "root_tag not found");
			using parallel_tag = impl::search_category_tag_t<parallel_tag_category, tags...>;
			using thread_tag = std::conditional_t<std::is_void_v<parallel_tag>, root_tag, parallel_tag>;	// if parallel_tag exists, use it
			//using thread_holder = impl::data_holder< thread_tag>;
			return dt.template get_pointer< thread_tag>();
		}
#pragma endregion
#pragma region platform
		template< typename platform_tag>
		struct element_traits< platform_tag_category, platform_tag, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "platform:";
			}
			using data_type = std::monostate;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type&)
			{
				os << platform_tag::name();
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type&)
			{
				os << "std::monostate{}";
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::AVG_EQUAL;
			static constexpr bool useful = false;
			static constexpr bool reducible = false;
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			template< element_sense sense>
			using aggregator = config_element< all_platforms_tag, sense>;
			static data_type aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(data_type&, const data_type&, reduction_mode)
			{
				// NOTHING TO DO WITH MONOSTATE
			}
		};

		template< typename platform_tag>
		struct element_traits< platform_tag_category, platform_tag, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << ".";
			}
			using data_type = void;
			static constexpr bool reducible = false;
			template< element_sense sense>
			using aggregator = config_element< all_platforms_tag, sense>;
		};

		template< typename platform_tag>
		class platform_data_holder {
		public:
			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				impl::thread_pointer(dt)->template push_element< platform_tag, element_sense::OPEN>(std::monostate{});
				/*
				auto g = impl::root_pointer(dt)->guard();
				std::cout << "enter_platform<" << platform_tag::name() << ">" << std::endl;
				*/
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
				impl::thread_pointer(dt)->template push_element< platform_tag, element_sense::CLOSE>();
				impl::thread_pointer(dt)->flush();
				/*
				auto g = impl::root_pointer(dt)->guard();
				std::cout << "exit_platform<" << platform_tag::name() << ">" << std::endl;
				*/
			}
		};

		template< typename tag>
		struct data_policy< platform_tag_category, tag> {
			using type = platform_data_holder< tag>;
		};
#pragma endregion
#pragma region range
		template< typename range_tag>
		struct range_config_holder {
			using enumerator_t = std::remove_cv_t<std::remove_reference_t<decltype(range_tag::enumerator())>>;
			enumerator_t config;
			explicit range_config_holder()
				: config(range_tag::enumerator())
			{}
		};

		template< typename range_tag>
		struct element_traits< range_tag_category, range_tag, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << range_tag::name() << ":";
			}
			using value_data_type = enumerator_value_t< range_tag>;
			using aggregator_data_type = typename range_config_holder< range_tag>::enumerator_t;
			using data_type = std::pair< value_data_type, aggregator_data_type>;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d.first;
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::make_pair(" 
					<< d.first
					<< ",";
				d.second.code_data(os);
				os << ")";
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::AVG;
			static constexpr bool useful = false;
			static constexpr bool reducible = false;
			static bool relevant(element_relevance)
			{
				return true;
			}
			template< element_sense sense>
			using aggregator = config_element< range_tag, sense>;
			static aggregator_data_type aggregator_data(const data_type& v)
			{
				return v.second;	// USE THE CONFIG AS THE AGGREGATE
			}
			static void aggregate(aggregator_data_type& r, const data_type& v, reduction_mode)
			{
				assert(r == v.second);	// AGGREGATING TO A RANGE VALUE IS NONSENSE
				//r = v.second;	// LET THE LAST CONFIG WIN IF THE EQUALITY IS FAKE
			}
		};

		template< typename range_tag>
		struct element_traits< range_tag_category, range_tag, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << ".";
			}
			using data_type = void;
			static constexpr bool reducible = false;
			template< element_sense sense>
			using aggregator = config_element< range_tag, sense>;
		};

		template<>
		struct config_element_traits< version_tag_category, version_tag>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "version:";
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << ".";
			}
			static bool relevant(element_relevance er)
			{
				return true;	// distinguish aggregation over version_tag
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			using data_type = std::monostate;	//typename element_traits_t<version_tag,element_sense::OPEN>::data_type;
			static bool has_data(const data_type&) { return 0; }
			static void data_text(std::ostream&, const data_type&)
			{
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::monostate()";
			}
			template< element_sense sense>
			using aggregator = config_element< version_tag, sense>;
			static data_type aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(data_type&, const data_type&, reduction_mode)
			{
				// nothing to do with monostate
			}
		};

		template<>
		struct config_element_traits< platform_tag_category, all_platforms_tag>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "platforms:";
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << ".";
			}
			static bool relevant(element_relevance er)
			{
				return true;	// distinguish between a particular platform and the aggregate
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			using data_type = std::monostate;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << "all";
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::monostate()";
			}
			template< element_sense sense>
			using aggregator = config_element< all_platforms_tag, sense>;
			static data_type aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(data_type&, const data_type&, reduction_mode)
			{
				// nothing to do with monostate
			}
		};

		template<>
		struct config_element_traits< parallel_tag_category, all_threads_tag>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "threads:";
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << ".";
			}
			static bool relevant(element_relevance er)
			{
				return true;	// distinguish from debug (no thread) mode 
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			using data_type = std::monostate;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << "all";
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::monostate()";
			}
			template< element_sense sense>
			using aggregator = config_element< all_threads_tag, sense>;
			static data_type aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(data_type&, const data_type&, reduction_mode)
			{
				// nothing to do with monostate
			}
		};

		template< typename range_tag>
		struct config_element_traits< range_tag_category, range_tag>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "(" << range_tag::name();
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << ")";
			}
			static bool relevant(element_relevance er)
			{
				return true;
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::UNDEF;
			using data_type = typename range_config_holder< range_tag>::enumerator_t;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type & d)
			{
				d.data_text(os);
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				d.code_data(os);
			}
			template< element_sense sense>
			using aggregator = config_element< range_tag, sense>;
			static data_type aggregator_data(const data_type& v)
			{
				return v;
			}
			static void aggregate(data_type& r, const data_type& v, reduction_mode)
			{
				assert( r == v);
				//r = v;	// LET THE LAST CONFIG WIN IF THE EQUALITY IS FAKE
			}
		};

		template< typename tag>
		class range_data_holder {
		public:
			using value_type = enumerator_value_t<tag>;
			value_type& value()
			{
				return v_;
			}
			const value_type& value() const
			{
				return v_;
			}

			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				auto&& c = get_my_config(dt).config;
				c.init(v_);
				impl::thread_pointer(dt)->template push_element<tag, element_sense::OPEN>(std::make_pair(v_, c));
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "enter_range<" << tag::name() << ">(" << v_ << ")" << std::endl;
					*/
				}
			}

			template< typename dt_t>
			bool valid(const dt_t& dt)
			{
				auto&& c = get_my_config(dt).config;
				return c.valid(v_);
			}

			template< typename dt_t>
			bool advance(const dt_t& dt)
			{
				auto&& c = get_my_config(dt).config;
				auto rv = c.advance(v_);
				if (rv)
				{
					impl::thread_pointer(dt)->template push_element<tag, element_sense::CLOSE>();
					impl::thread_pointer(dt)->template push_element<tag, element_sense::OPEN>(std::make_pair(v_, c));
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "advance_range<" << tag::name() << ">(" << v_ << ")" << std::endl;
					*/
				}
				return rv;
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
				impl::thread_pointer(dt)->template push_element<tag, element_sense::CLOSE>();
				/*
				auto g = impl::root_pointer(dt)->guard();
				std::cout << "exit_range<" << tag::name() << ">" << std::endl;
				*/
			}
		private:
			value_type v_;
			template<typename dt_t>
			const range_config_holder<tag>& get_my_config(const dt_t& dt) const
			{
				using controller_category = controller_tag_category< tag>;
				auto root = category_pointer<controller_category>(dt);
				return root->template get_range_config<tag>();
			}
		};

		template< typename tag>
		struct data_policy< range_tag_category, tag> {
			using type = range_data_holder< tag>;
		};
#pragma endregion
#pragma region parallel1
		struct parallel_tag {
			using tag_category = parallel_tag_category;
		};

		template<>
		struct tag_traits<parallel_tag>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::impl::parallel_tag";
			}
		};

		template<>
		struct element_traits< parallel_tag_category, parallel_tag, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "thr:";
			}
			using data_type = std::size_t;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				assert(0);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static constexpr reduction_mode child_reduction_mode = reduction_mode::AVG_FIRST;
			static constexpr bool useful = false;
			static constexpr bool reducible = false;
			static bool relevant(element_relevance)
			{
				return true;
			}
			template< element_sense sense>
			using aggregator = config_element< all_threads_tag, sense>;
			using aggregate_data_type = std::monostate;
			static aggregate_data_type aggregator_data(const data_type&)
			{
				return {};
			}
			static void aggregate(aggregate_data_type&, const data_type&, reduction_mode)
			{
				// NOTHING TO DO
			}
		};

		template<>
		struct element_traits< parallel_tag_category, parallel_tag, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << ".";
			}
			using data_type = void;
			static constexpr bool reducible = false;
			template< element_sense sense>
			using aggregator = config_element< all_threads_tag, sense>;
		};

		class parallel_data_holder {
		public:
			parallel_data_holder(master_worker_seesaw* ss, master* m, std::size_t index)
				: ss_(ss), master_(m), index_(index)
			{}
			const std::size_t& thread_index() const
			{
				return index_;
			}

			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				push_element<parallel_tag, element_sense::OPEN>(index_);
				/*
				auto g = guard();
				std::cout << "enter_parallel(" << index_ << ")" << std::endl;
				*/
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
				push_element<parallel_tag, element_sense::CLOSE>();
				/*
				auto g = guard();
				std::cout << "exit_parallel(" << index_ << ")" << std::endl;
				*/
				if (el_.has_paired())
				{
					print_elements(dt);
				}
				//print_all_elements(dt);
				ss_->ba_send(worker_master_message(std::in_place_index< worker_master_message_type::SEND_ELEMENTS>, std::move(all_el_)));
				auto rv = ss_->ab_wait();
				assert(rv.index() == master_worker_message_type::RUN); sink(rv);
			}

			template< typename dt_t>
			void rendezvous(const dt_t& dt) const
			{
				{
					/*
					auto g = guard();
					std::cout << "Worker " << index_ << " waiting for rendezvous" << std::endl;
					*/
				}
				if (el_.has_paired())
				{
					print_elements(dt);
					el_.clear_paired();
				}
				ss_->ba_send(worker_master_message(std::in_place_index<worker_master_message_type::CONTINUE>));
				auto rv = ss_->ab_wait();
				assert(rv.index() == master_worker_message_type::RUN); sink(rv);
			}

			template< typename dt_t>
			average_t rendezvous_average(const dt_t& dt, average_t v) const
			{
				{
					/*
					auto g = guard();
					std::cout << "Worker " << index_ << " waiting for rendezvous" << std::endl;
					*/
				}
				if (el_.has_paired())
				{
					print_elements(dt);
					el_.clear_paired();
				}
				ss_->ba_send(worker_master_message(std::in_place_index< worker_master_message_type::COMPUTE_AVERAGE>, v));
				auto rv = ss_->ab_wait();
				assert(rv.index() == master_worker_message_type::AVERAGE);
				return std::get< master_worker_message_type::AVERAGE>(rv);
			}

			void enter_serial() const
			{
				{
					/*
					auto g = guard();
					std::cout << "Worker " << index_ << " waiting for rendezvous" << std::endl;
					*/
				}
				ss_->ba_send(worker_master_message(std::in_place_index< worker_master_message_type::WANT_ENTER_SERIAL>));
				auto rv = ss_->ab_wait();
				assert(rv.index() == master_worker_message_type::CONFIRM_ENTER_SERIAL); sink(rv);
			}

			void exit_serial() const
			{
				{
					/*
					auto g = guard();
					std::cout << "Worker " << index_ << " waiting for rendezvous" << std::endl;
					*/
				}
				ss_->ba_send(worker_master_message(std::in_place_index< worker_master_message_type::EXIT_SERIAL>));
				auto rv = ss_->ab_wait();
				assert(rv.index() == master_worker_message_type::RUN); sink(rv);
			}

			std::lock_guard<std::mutex> guard() const
			{
				return master_->guard();
			}

			template< typename tag, element_sense sense, typename T>
			void push_element(T&& t) const
			{
				auto p = std::make_unique<element_t<tag, sense>>(std::forward<T>(t));
				push_element_ptr(std::move(p));
			}

			template< typename tag, element_sense sense>
			void push_element() const
			{
				auto p = std::make_unique<element_t<tag, sense>>();
				push_element_ptr(std::move(p));
			}

			void push_element_ptr(element_ptr && p) const
			{
				all_el_.push_back(p->clone());
				el_.push_back(std::move(p));
			}
		private:
			master_worker_seesaw* ss_;
			master* master_;
			std::size_t index_;
			mutable element_list el_;
			mutable element_list all_el_;

			template< typename dt_t>
			void print_elements(const dt_t& dt) const
			{
				
				if (root_pointer(dt)->direct_print() && el_.useful())
				{
					auto g = guard();
					auto&& rel = root_pointer(dt)->el();
#ifdef PRINT_META
					rel.metadata_text(std::cout);
					el_.metadata_text(std::cout);
#endif
					if (rel.data_size())
					{
#ifdef PRINT_META
						std::cout << '\t';
#endif
						rel.data_text(std::cout);
					}
					if (el_.data_size())
					{
#ifndef PRINT_META
						if (rel.data_size())
#endif
							std::cout << '\t';
						el_.data_text(std::cout);
					}
					std::cout << std::endl;
				}
			}

			/*
			template< typename dt_t>
			void print_all_elements(const dt_t& dt) const
			{
				auto g = guard();
				print_all(all_el_, root_pointer(dt)->el());
			}
			*/
		};

		template<>
		struct data_policy< parallel_tag_category, parallel_tag> {
			using type = parallel_data_holder;
		};
#pragma endregion
#pragma region measurement
		template< typename measurement_policy>
		struct measurement_tag {
			using tag_category = measurement_tag_category;
		};

		template< typename measurement_policy>
		struct tag_traits<measurement_tag< measurement_policy>>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::impl::measurement_tag<"
				<< measurement_policy::code_name()
				<< ">";
			}
		};

		using clock = std::chrono::high_resolution_clock;

		template< typename measurement_policy>
		struct element_traits< measurement_tag_category, measurement_tag< measurement_policy>, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "[";
			}
			using data_type = void;
			static constexpr reduction_mode child_reduction_mode = reduction_mode::AVG;
			static constexpr bool reducible = true;
			template< element_sense sense>
			using aggregator = result_element< measurement_tag<measurement_policy>, sense>;
		};

		template< typename measurement_policy>
		struct element_traits< measurement_tag_category, measurement_tag<measurement_policy>, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "[ns]]";
			}
			using data_type = double;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				auto ratio = d / gold_d;
				//os << (ratio*100) << "%";
				os << ratio;
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static constexpr bool useful = true;
			static constexpr bool reducible = true;
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			using aggregator_data_type = std::pair< double, std::size_t>;
			template< element_sense sense>
			using aggregator = result_element< measurement_tag<measurement_policy>, sense>;
			static aggregator_data_type aggregator_data(const data_type& v)
			{
				return aggregator_data_type(v, 1);
			}
			static void aggregate(aggregator_data_type& r, const data_type& v, reduction_mode mode)
			{
				if (mode == reduction_mode::LAST_FIRST)
				{
					// THE LAST MEASUREMENT WINS
					r.first = std::log(v);
					r.second = 1;
				}
				else if (mode == reduction_mode::AVG)
				{
					// ARITHMETIC AVERAGE on logarithmic scale
					r.first += std::log(v);
					r.second += 1;
				}
				else throw std::logic_error("wrong mode at measurement_tag");
			}
		};

		template<typename measurement_policy>
		struct result_element_traits< measurement_tag_category, measurement_tag<measurement_policy>>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "[";
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << "[ns]]";
			}
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			using data_type = std::pair< double, std::size_t>;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << std::exp(d.first / d.second);
			}
			static double logfactor()
			requires requires { {measurement_policy::log10factor()} -> std::convertible_to<double>; }
			{
				return measurement_policy::log10factor() / std::log(10);
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				auto logratio = (d.first / d.second) - (gold_d.first / gold_d.second);
				//os << std::fixed << std::setprecision(0) << (std::exp(logratio)*100) << "%";
				os << std::exp(logratio);
				static double factor = - logfactor();
				os << "\t" << (logratio * factor);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::make_pair("
					<< d.first
					<< "," << d.second
					<< ")";
			}
			template< element_sense sense>
			using aggregator = result_element< measurement_tag<measurement_policy>, sense>;
			static data_type aggregator_data(const data_type& v)
			{
				return v;
			}
			static void aggregate(data_type& r, const data_type& v, reduction_mode mode)
			{
				if (mode == reduction_mode::AVG || mode == reduction_mode::AVG_FIRST)
				{
					// AVERAGE
					r.first += v.first;
					r.second += v.second;
				}
				else throw std::logic_error("wrong mode at measurement_tag");
			}
		};

		template<typename measurement_policy>
		class measurement_data_holder {
		public:
			measurement_data_holder(std::size_t complexity)
			: complexity_(complexity)
			{}

			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "enter_measurement" << std::endl;
					*/
				}
				impl::thread_pointer(dt)->rendezvous(dt);
				impl::thread_pointer(dt)->template push_element<measurement_tag<measurement_policy>, element_sense::OPEN>();
				start_ = clock::now();
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
				stop_ = clock::now();
				auto delta = stop_ - start_;
				auto delta_recalculated = (double)delta.count() / complexity_;
				impl::thread_pointer(dt)->template push_element<measurement_tag<measurement_policy>, element_sense::CLOSE>(delta_recalculated);
				impl::thread_pointer(dt)->rendezvous(dt);
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "exit_measurement(" << delta.count() << ")" << std::endl;
					*/
				}
			}
		private:
			std::size_t complexity_;
			using time_point = clock::time_point;
			time_point start_, stop_;
		};

		template<typename measurement_policy>
		struct data_policy< measurement_tag_category, measurement_tag<measurement_policy>> {
			using type = measurement_data_holder<measurement_policy>;
		};
#pragma endregion
#pragma region result
		template<typename result_tag>
		struct determiner_reduction_mode {
			using data_type = typename result_tag::value_type;
			static void aggregate(data_type& r, const data_type& v)
			{
				static constexpr auto digits10 = std::numeric_limits<data_type>::digits10;
				static constexpr auto full_range = pow10(digits10);
				static constexpr auto half_range = pow10(digits10 / 2);
				auto avg = (r + v) / 2;
				auto diff = v >= r ? v - r : full_range + v - r;
				r = avg + (diff % half_range) * half_range + (diff / half_range);
			}
		private:
			static constexpr data_type pow10(unsigned n)
			{
				data_type s = 1;
				while (n--) s *= 10;
				return s;
			}
		};
		template<typename result_tag>
			requires requires (typename result_tag::value_type a) { 
				{result_tag::reduction(a,a)} -> std::convertible_to<typename result_tag::value_type>; 
		}
		struct determiner_reduction_mode< result_tag>
		{
			using data_type = typename result_tag::value_type;
			static void aggregate(data_type& r, const data_type& v)
			{
				r = result_tag::reduction(r, v);
			}
		};

		template<typename result_tag>
		struct element_traits< result_tag_category, result_tag, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "<" << result_tag::name();
			}
			using data_type = void;
			static constexpr reduction_mode child_reduction_mode = reduction_mode::LAST_FIRST;
			static constexpr bool reducible = true;
			template< element_sense sense>
			using aggregator = element_t< result_tag, sense>;
		};

		template<typename result_tag>
		struct element_traits< result_tag_category, result_tag, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << ">";
			}
			using data_type = typename result_tag::value_type;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static bool gold_comparison(const data_type& d, const data_type& gold_d)
			{
				return d == gold_d;
			}
			static bool gold_comparison(const data_type& d, const data_type& gold_d)
			requires requires { {result_tag::ok(d, gold_d)} -> std::convertible_to<bool>; }
			{
				return result_tag::ok(d, gold_d);
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				if (gold_comparison(d, gold_d))
					os << "OK";
				else
					os << "MISMATCH";
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << d;
				if constexpr (std::is_unsigned_v<data_type>)
				{
					os << "U";
				}
			}
			static constexpr bool useful = true;
			static constexpr bool reducible = true;
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::CHECK;
			}
			template< element_sense sense>
			using aggregator = element_t< result_tag, sense>;
			static data_type aggregator_data(const data_type& v)
			{
				return v;
			}
			static void aggregate(data_type&r, const data_type&v, reduction_mode mode)
			{
				if (mode == reduction_mode::AVG || mode == reduction_mode::AVG_EQUAL)
				{
					determiner_reduction_mode<result_tag>::aggregate(r, v);
				}
				else if (mode == reduction_mode::LAST_FIRST || mode == reduction_mode::AVG_FIRST)
				{
					// THE FIRST RESULT WINS
				}
				else throw std::logic_error("wrong mode at result_tag");
			}
		};
#pragma endregion
#pragma region tag_list_utils2
		template< typename T, typename ...L>
		struct index_of;

		template< typename T, typename ...L>
		struct index_of<T, T, L...>
		{
			static constexpr std::size_t value = 0;
		};

		template< typename T, typename T0, typename ...L>
		struct index_of<T, T0, L...>
		{
			static constexpr std::size_t value = 1 + index_of<T, L...>::value;
		};

		template< std::size_t index, typename ...L>
		struct at_position;

		template< typename T, typename ...L>
		struct at_position<0, T, L...>
		{
			using type = T;
		};

		template< std::size_t index, typename T0, typename ...L>
		struct at_position<index, T0, L...>
		{
			using type = typename at_position<index - 1, L...>::type;
		};
#pragma endregion
	}
#pragma region enumerators1
	template< typename value_t = std::size_t>
	class logarithmic {
	public:
		using controller_tag_category = impl::root_tag_category;
		using value_type = value_t;
		logarithmic(value_t v_first, value_t v_last, value_t v_factor = 2)
			: v_first_(v_first), v_last_(v_last), v_factor_(v_factor)
		{}

		void set_arg(std::string_view s)
		{
			v_first_ = v_last_ = (value_type)std::stoull(std::string(s));
		}

		void set_v_last(std::size_t v_last)
		{
			v_last_ = v_last;
		}

		void init(value_t& v) const
		{
			v = v_first_;
		}

		bool valid(const value_t& v) const
		{
			return v <= v_last_;
		}

		bool advance(value_t& v) const
		{
			v *= v_factor_;
			return v <= v_last_;
		}

		bool operator==(const logarithmic& b) const
		{
			return v_first_ == b.v_first_
				&& v_last_ == b.v_last_
				&& v_factor_ == b.v_factor_;
		}

		void data_text(std::ostream& os) const
		{
			os << "(" << v_first_ << "," << v_last_ << "," << v_factor_ << ")";
		}
		void code_data(std::ostream& os) const
		{
			os << "fmwkng::logarithmic(" << v_first_ << "," << v_last_ << "," << v_factor_ << ")";
		}
	private:
		value_t v_first_;
		value_t v_last_;
		value_t v_factor_;
	};

	template< typename ... range_tags>
	struct ranges {
		static constexpr std::size_t size_v = sizeof...(range_tags);

		template< typename tag>
		static constexpr std::size_t index_v = impl::index_of< tag, range_tags...>::value;

		using tuple_t = std::tuple< impl::range_config_holder< range_tags> ...>;

		template< typename F>
		static void for_each(F&& f)
		{
			(f(impl::pass<range_tags>()), ...);
		}
	};
#pragma endregion
	template< typename ppt_t>
	class temporary_context;
	template< typename ppt_t>
	temporary_context(const ppt_t &)->temporary_context<ppt_t>;
	namespace impl {
#pragma region auto_measurement
		template< typename measurement_policy>
		struct auto_measurement_tag {
			using tag_category = measurement_tag_category;
			static fmwkng::logarithmic<> enumerator() { return fmwkng::logarithmic<>(1, 16); }
		};

		template< typename measurement_policy>
		struct tag_traits<auto_measurement_tag<measurement_policy>>
		{
			static void code_tag(std::ostream& os)
			{
				os << "fmwkng::impl::auto_measurement_tag<" << measurement_policy::code_name() << ">";
			}
		};

		template< typename measurement_policy>
		struct element_traits< measurement_tag_category, auto_measurement_tag< measurement_policy>, element_sense::OPEN>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << "[";
			}
			using data_type = void;
			/*
			using data_type = std::size_t;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static constexpr bool useful = false;
			*/
			static constexpr reduction_mode child_reduction_mode = reduction_mode::LAST_FIRST;
			static constexpr bool reducible = true;
			template< element_sense sense>
			using aggregator = result_element< auto_measurement_tag< measurement_policy>, sense>;
		};

		template< typename measurement_policy>
		struct element_traits< measurement_tag_category, auto_measurement_tag< measurement_policy>, element_sense::CLOSE>
		{
			static void metadata_marker(std::ostream& os)
			{
				os << measurement_policy::name() << "[ns]]";
			}
			using data_type = double;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				auto ratio = d / gold_d;
				//os << (ratio*100) << "%";
				os << ratio;
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << d;
			}
			static constexpr bool useful = true;
			static constexpr bool reducible = true;
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			template< element_sense sense>
			using aggregator = result_element< auto_measurement_tag< measurement_policy>, sense>;
			using aggregator_data_type = std::pair< double, std::size_t>;
			static aggregator_data_type aggregator_data(const data_type& v)
			{
				// CONVERTED TO LOGARITHMIC SCALE
				return std::make_pair(std::log(v),1);
			}
			static void aggregate(aggregator_data_type& r, const data_type& v, reduction_mode mode)
			{
				if (mode == reduction_mode::LAST_FIRST)
				{
					// THE LAST MEASUREMENT WINS, CONVERTED TO LOGARITHMIC SCALE
					r.first = std::log(v);
					r.second = 1;
				}
				else throw std::logic_error("wrong mode at auto_measurement_tag");
			}
		};

		template< typename measurement_policy>
		struct result_element_traits< measurement_tag_category, auto_measurement_tag< measurement_policy>>
		{
			static void metadata_marker_open(std::ostream& os)
			{
				os << "[";
			}
			static void metadata_marker_close(std::ostream& os)
			{
				os << measurement_policy::name() << "[ns]]";
			}
			static bool relevant(element_relevance er)
			{
				return er == element_relevance::TIME;
			}
			using data_type = std::pair< double, std::size_t>;
			static bool has_data(const data_type&) { return true; }
			static void data_text(std::ostream& os, const data_type& d)
			{
				os << std::exp(d.first / d.second);
			}
			static void gold_comparison_text(std::ostream& os, const data_type& d, const data_type& gold_d)
			{
				auto logratio = (d.first / d.second) - (gold_d.first / gold_d.second);
				//os << std::fixed << std::setprecision(0) << (std::exp(logratio)*100) << "%";
				os << std::exp(logratio);
				static double factor = -80.0 / std::log(10);
				os << "\t" << (logratio * factor);
			}
			static void code_data(std::ostream& os, const data_type& d)
			{
				os << "std::make_pair("
					<< d.first
					<< "," << d.second
					<< ")";
			}
			template< element_sense sense>
			using aggregator = result_element< auto_measurement_tag< measurement_policy>, sense>;
			static data_type aggregator_data(const data_type& v)
			{
				return v;
			}
			static void aggregate(data_type& r, const data_type& v, reduction_mode mode)
			{
				if (mode == reduction_mode::AVG || mode == reduction_mode::AVG_FIRST || mode == reduction_mode::AVG_EQUAL )
				{
					// AVERAGE (IN LOGARITHMIC SCALE)
					r.first += v.first;
					r.second += v.second;
				}
				else throw std::logic_error("wrong mode at auto_measurement_tag");
			}
		};

		template< typename measurement_policy>
		class auto_measurement_data_holder {
		public:
			auto_measurement_data_holder(std::size_t v_last)
				: p_(phase::LEAD_IN)
			{
				rch_.config.set_v_last( v_last);
			}

			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				p_ = phase::LEAD_IN;
				rch_.config.init(v_);

				enter_phase(dt);
			}

			template< typename dt_t>
			bool stop_for_results(const dt_t& dt)
			{
				if (p_ == phase::TEST)
				{
					exit_phase(dt);
					p_ = phase::RESULTS;
					return true;
				}
				return false;
			}

			template< typename dt_t>
			bool valid(const dt_t& dt)
			{
				return rch_.config.valid(v_);
			}

			template< typename dt_t>
			bool advance(const dt_t& dt)
			{
				if (p_ != phase::RESULTS)
				{
					exit_phase(dt);
				}
				if (p_ == phase::LEAD_IN)
				{
					p_ = phase::TEST;
				}
				else if (p_ == phase::TEST || p_ == phase::RESULTS)
				{
					p_ = phase::LEAD_OUT;
				}
				else if (p_ == phase::LEAD_OUT)
				{
					if (avg_delta_ >= minimum_count)
						return false;
					auto rv = rch_.config.advance(v_);
					if (!rv)
						return false;
					p_ = phase::LEAD_IN;
				}
				enter_phase(dt);
				return true;
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
			}

			template< typename range_tag>
			auto& get_range_config() const
			{
				static constexpr std::size_t index = my_ranges::template index_v<range_tag>;
				return std::get<index>(range_configs_);
			}

		private:
			enum class phase { LEAD_IN, TEST, RESULTS, LEAD_OUT };
			phase p_;
			using time_point = clock::time_point;
			using time_delta = clock::duration;
			time_point start_, stop_;
			time_delta delta_;
			average_t avg_delta_;
			using my_tag = auto_measurement_tag< measurement_policy>;
			range_config_holder<my_tag> rch_;
			using value_type = enumerator_value_t<my_tag>;
			value_type v_;
			static constexpr average_t minimum_count = measurement_policy::minimum_count;
			using my_ranges = typename measurement_policy::ranges;
			typename my_ranges::tuple_t range_configs_;
			std::uint_fast64_t count_sum_;

			template< typename dt_t>
			void reconfig(const dt_t& dt, std::size_t multiplier, std::size_t divisor)
			{
				auto root = impl::root_pointer(dt);
				count_sum_ = 0;
				my_ranges::for_each([this, root, multiplier, divisor](auto p) {
					using range_tag = impl::pass_t<decltype(p)>;
					using c_type = typename range_config_holder<range_tag>::enumerator_t;
					static constexpr std::size_t index = my_ranges::template index_v<range_tag>;
					auto&& base_c = root->template get_range_config<range_tag>();
					auto&& my_c = std::get<index>(range_configs_);
					my_c.config = c_type(base_c.config, multiplier, divisor);
					//std::cout << my_c.config.count() << " = " << base_c.config.count() << " * " << multiplier << " / " << divisor << std::endl;
					count_sum_ += my_c.config.count();
					});
			}

			template< typename dt_t>
			void push_config_open(const dt_t& dt)
			{
				auto thread = impl::thread_pointer(dt);
				my_ranges::for_each([this, thread](auto p) {
					using range_tag = impl::pass_t<decltype(p)>;
					using my_config_element = config_element< range_tag, element_sense::OPEN>;
					static constexpr std::size_t index = my_ranges::template index_v<range_tag>;
					auto&& my_c = std::get<index>(range_configs_);
					thread->push_element_ptr(std::make_unique<my_config_element>(my_c.config));
					});
			}

			template< typename dt_t>
			void push_config_close(const dt_t& dt)
			{
				auto thread = impl::thread_pointer(dt);
				my_ranges::for_each([thread](auto p) {
					using range_tag = impl::pass_t<decltype(p)>;
					using my_config_element = config_element< range_tag, element_sense::CLOSE>;
					//static constexpr std::size_t index = my_ranges::template index_v<range_tag>;
					//auto&& my_c = std::get<index>(range_configs_);
					thread->push_element_ptr(std::make_unique<my_config_element>());
					});
			}

			template< typename dt_t>
			void enter_phase(const dt_t& dt)
			{
				reconfig(dt, v_, (std::uint_fast64_t)complexity(dt) * (p_ == phase::TEST ? 1 : 5));	// 20% lead-in/out
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "enter_measurement" << std::endl;
					*/
				}
				if (p_ == phase::LEAD_IN)
				{
					impl::thread_pointer(dt)->rendezvous(dt);
				}
				if (p_ == phase::TEST)
				{
					impl::thread_pointer(dt)->template push_element<my_tag, element_sense::OPEN>();
					push_config_open(dt);
					start_ = clock::now();
				}
			}

			template< typename dt_t>
			void exit_phase(const dt_t& dt)
			{
				if (p_ == phase::TEST)
				{
					stop_ = clock::now();
					delta_ = stop_ - start_;
					auto delta_cnt = delta_.count();
					auto delta_recalculated = (double)delta_cnt / (complexity(dt) * count_sum_);
					push_config_close(dt);
					impl::thread_pointer(dt)->template push_element<my_tag, element_sense::CLOSE>(delta_recalculated);
				}
				if (p_ == phase::LEAD_OUT)
				{
					auto delta_cnt = delta_.count();
					avg_delta_ = impl::thread_pointer(dt)->rendezvous_average(dt, delta_cnt);
				}
			}

			template< typename dt_t>
			auto complexity(const dt_t& dt)
			{
				auto c = measurement_policy::complexity(temporary_context(dt.get_parent_pointer_tuple()));
				return std::max<decltype(c)>(c, 1);
			}
		};

		template< typename measurement_policy>
		struct data_policy< measurement_tag_category, auto_measurement_tag< measurement_policy>> {
			using type = auto_measurement_data_holder< measurement_policy>;
		};
#pragma endregion
	}
#pragma region tagged_context1
	template< typename ... tags>
	class tagged_context;
#pragma endregion 
	namespace impl {
#pragma region parallel2
		template< typename function_t, typename ... tags>
		class thread_functor {
		public:
			template< typename F>
			thread_functor(const impl::data_tuple< tags...>& dt, F&& f)
				: dt_(dt), f_(std::forward<F>(f))
			{}

			void operator()(master_worker_seesaw* ss, master* m, std::size_t i) {
				try {
					//m->ex([i]() { std::cout << "Worker " << i << " prepared" << std::endl; });
					{
						child_context chc(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple(), ss, m, i);
						// INITIAL MESSAGE NO LONGER SENT: auto rv = ss->ab_wait();
						f_(chc);
					}
					//m->ex([i]() { std::cout << "Worker " << i << " finished" << std::endl; });
				}
				catch (...)
				{
					//m->ex([i]() { std::cout << "Worker " << i << " caught an exception" << std::endl; });
				}
				ss->ba_send(worker_master_message(std::in_place_index<worker_master_message_type::FINISH>));
			}
		private:
			const impl::data_tuple< tags...>& dt_;
			function_t f_;
			using child_context = tagged_context<impl::parallel_tag, tags...>;
		};

		template< typename F, typename ... tags>
		thread_functor(const impl::data_tuple< tags...>&, F&& f)->thread_functor< std::remove_cv_t<std::remove_reference_t<F>>, tags ...>;
#pragma endregion
#pragma region sequential
		struct serial_tag {
			using tag_category = serial_tag_category;
		};
		
		class serial_data_holder {
		public:
			serial_data_holder()
			{}

			template< typename dt_t>
			void entry(const dt_t& dt)
			{
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "enter_measurement" << std::endl;
					*/
				}
				impl::thread_pointer(dt)->enter_serial();
			}

			template< typename dt_t>
			void exit(const dt_t& dt)
			{
				impl::thread_pointer(dt)->exit_serial();
				{
					/*
					auto g = impl::root_pointer(dt)->guard();
					std::cout << "exit_measurement(" << delta.count() << ")" << std::endl;
					*/
				}
			}
		};

		template<>
		struct data_policy< serial_tag_category, serial_tag> {
			using type = serial_data_holder;
		};
#pragma endregion
	}
#pragma region temporary_context
	template< typename ppt_t>
	class temporary_context {
	private:
		using self_ = temporary_context< ppt_t>;
	public:
		temporary_context(const ppt_t& ppt)
			: ppt_(ppt)
		{}

		template< typename range_tag>
		auto get() const
		{
			auto p = std::get<const impl::data_holder<range_tag>*>(ppt_);
			return p->value();
		}

		/*
		template< typename range_tag>
		auto count() const
		{
			using value_type = impl::enumerator_value_t<range_tag>;

			using controller_category = impl::controller_tag_category< range_tag>;
			auto root = impl::category_pointer<controller_category>(*dt_);
			auto&& my_config = root->template get_range_config<range_tag>().config;

			return my_config.count();
		}
		*/
	private:
		ppt_t ppt_;
	};
#pragma endregion
#pragma region tagged_context2
	template< typename ... tags>
	class tagged_context : impl::immovable {
	private:
		using self_ = tagged_context< tags ...>;
	public:
		template< typename ... TL>
		tagged_context(TL&& ... tl)
			: dt_(std::forward<TL>(tl)...)
		{
			dt_.get_my_pointer()->entry(dt_);
		}

		~tagged_context() noexcept
		{
			dt_.get_my_pointer()->exit(dt_);
		}

		template< typename platform_tag>
		auto for_platform() const
		{
			bool v = my_root_pointer()->template check_platform<platform_tag>();
			return impl::bool_range(v, [this]() {
				return tagged_context<platform_tag, tags...>(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple());
				});
		}

		template< typename F>
		void for_platforms(F && f) const
		{
			my_root_pointer()->for_platforms([this, &f](auto p) {
				using platform_tag = impl::pass_t<decltype(p)>;
				tagged_context<platform_tag, tags...> ctx(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple());
				f(ctx);
				});
		}

		template< typename F>
		void for_parallel(F&& f, std::size_t threads = 0, std::size_t batch_size = 0) const
		{
			if (!batch_size)
			{
				batch_size = preferred_concurrency();
			}
			if (!threads)
			{
				threads = batch_size;
			}
			{
				/*
				auto g = guard();
				std::cout << "Master creating workers" << std::endl;
				*/
			}
			impl::thread_functor thread_f(dt_, std::forward<F>(f));
			{
				impl::workers ws(threads, my_root_pointer()->get_master_pointer(), std::move(thread_f));
				auto rvs = ws.wait_for_workers();
				//std::size_t step = 0;
				for (;;)
				{
					{
						/*
						auto g = guard();
						std::cout << "Master waiting in step " << step << std::endl;
						*/
					}
					std::size_t n_continue = 0;
					std::size_t n_average = 0;
					std::size_t n_elements = 0;
					std::size_t n_serial = 0;
					average_t sum_average = 0;
					for (auto&& rv : rvs)
					{
						switch (rv.index()) {
						case impl::worker_master_message_type::CONTINUE:
							++n_continue;
							my_root_pointer()->clear_paired();
							break;
						case impl::worker_master_message_type::COMPUTE_AVERAGE:
							++n_average;
							sum_average += std::get<impl::worker_master_message_type::COMPUTE_AVERAGE>(rv);
							my_root_pointer()->clear_paired();
							break;
						case impl::worker_master_message_type::SEND_ELEMENTS:
						{
							++n_elements;
							auto&& elem = std::get<impl::worker_master_message_type::SEND_ELEMENTS>(rv);
							impl::thread_pointer(dt_)->append_elements(std::move(elem));
						}
							break;
						case impl::worker_master_message_type::WANT_ENTER_SERIAL:
							++n_serial;
							break;
						}
					}

					assert(!n_continue || !n_average);
					assert(!n_average || !n_elements);
					assert(!n_continue || !n_elements);
					if (!!n_continue)
					{
						{
							/*
							auto g = guard();
							std::cout << "Master launching workers in step " << step << std::endl;
							*/
						}
						rvs = ws.launch_and_wait_workers_batched(impl::master_worker_message(std::in_place_index<impl::master_worker_message_type::RUN>), batch_size);
					}
					else if (!!n_average)
					{
						auto avg = sum_average / n_average;
						rvs = ws.launch_and_wait_workers_batched(impl::master_worker_message(std::in_place_index<impl::master_worker_message_type::AVERAGE>, avg), batch_size);
					}
					else if (!!n_elements)
					{
						rvs = ws.launch_and_wait_workers_batched(impl::master_worker_message(std::in_place_index<impl::master_worker_message_type::RUN>), batch_size);
					}
					else if (!!n_serial)
					{
						rvs = ws.launch_and_wait_workers_batched(impl::master_worker_message(std::in_place_index<impl::master_worker_message_type::CONFIRM_ENTER_SERIAL>), 1);
						for (auto&& rv : rvs)
						{
							assert(rv.index() == impl::worker_master_message_type::EXIT_SERIAL); sink(rv);
						}
						rvs = ws.launch_and_wait_workers_batched(impl::master_worker_message(std::in_place_index<impl::master_worker_message_type::RUN>), batch_size);
					}
					else
					{
						break;
					}
					//++step;
				}
			}
			{
				/*
				auto g = guard();
				std::cout << "Workers dropped" << std::endl;
				*/
			}
		}

		std::size_t thread_index() const
		{
			auto tp = impl::thread_pointer(dt_);
			return tp->thread_index();
		}

		template< typename range_tag>
		auto for_range() const
		{	// !!!
			using child_context = tagged_context< range_tag, tags ...>;
			using diff_t = impl::enumerator_value_t<range_tag>;

			return impl::context_range< child_context, diff_t>(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple());
		}

		template< typename range_tag>
		auto for_index() const
		{	// !!!
			using value_type = impl::enumerator_value_t<range_tag>;

			using controller_category = impl::controller_tag_category< range_tag>;
			auto root = impl::category_pointer<controller_category>(dt_);
			auto&& my_config = root->template get_range_config<range_tag>().config;

			return impl::index_range< value_type>(my_config.begin(), my_config.end());
		}

		template< typename measurement_policy>
		auto measurement( std::size_t complexity) const
		{
			using child_context = tagged_context< impl::measurement_tag<measurement_policy>, tags ...>;

			return child_context(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple(), complexity);
		}

		template< typename measurement_policy>
		auto auto_measurement(std::size_t v_last) const
		{
			using my_measurement_tag = impl::auto_measurement_tag< measurement_policy>;
			using child_context = tagged_context< my_measurement_tag, tags ...>;
			using diff_t = impl::enumerator_value_t<my_measurement_tag>;

			return impl::context_range< child_context, diff_t>(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple(), v_last);
		}

		bool stop_for_results()
		{
			return dt_.get_my_pointer()->stop_for_results(dt_);
		}

		auto sequential() const
		{
			using child_context = tagged_context< impl::serial_tag, tags ...>;

			return child_context(dt_.get_my_pointer(), dt_.get_parent_pointer_tuple());
		}

		self_* current()
		{
			auto rv = dt_.get_my_pointer()->valid(dt_);
			return rv ? this : nullptr;
		}

		self_* advance()
		{
			auto rv = dt_.get_my_pointer()->advance(dt_);
			return rv ? this : nullptr;
		}

		template< typename range_tag>
		auto get() const
		{
			auto p = dt_.template get_pointer<range_tag>();
			return p->value();
		}

		template< typename range_tag>
		auto count() const
		{
			//using value_type = impl::enumerator_value_t<range_tag>;

			using controller_category = impl::controller_tag_category< range_tag>;
			auto root = impl::category_pointer<controller_category>(dt_);
			auto&& my_config = root->template get_range_config<range_tag>().config;

			return my_config.count();
		}

		template< typename result_tag, typename T>
		void store_result( T && v) const
		{
			auto tp = impl::thread_pointer(dt_);
			tp->template push_element<result_tag, impl::element_sense::OPEN>();
			tp->template push_element<result_tag, impl::element_sense::CLOSE>(std::forward<T>(v));
		}

		std::lock_guard<std::mutex> guard() const
		{
			return my_root_pointer()->guard();
		}

		using platform_t = impl::search_category_tag_t<platform_tag_category, tags...>;
	private:
		auto my_root_pointer() const
		{
			using root_tag = impl::search_category_tag_t<impl::root_tag_category, tags...>;
			static_assert(!std::is_void_v<root_tag>, "root_tag not found");
			return dt_.template get_pointer<root_tag>();
		}
		using my_tuple_t = impl::data_tuple< tags...>;
		using my_data = typename my_tuple_t::my_data;
		my_tuple_t dt_;

		std::size_t preferred_concurrency() const
		{
			return my_root_pointer()->preferred_concurrency();
		}
	};
#pragma endregion
#pragma region root
	template< typename config_t>
	using root = tagged_context< impl::root_tag< config_t>>;
#pragma endregion
#pragma region config
	template< typename ... platform_tags>
	struct platforms {

		static constexpr std::size_t size_v = sizeof...(platform_tags);

		template< typename tag>
		static constexpr std::size_t index_v = impl::index_of< tag, platform_tags...>::value;

		template< std::size_t index>
		using at_t = typename impl::at_position< index, platform_tags...>::type;

		template< typename F>
		static void for_each(F&& f)
		{
			(f(impl::pass<platform_tags>()), ...);
		}
	};

	template< typename value_t = std::size_t, value_t v_step = 1>
	class linear {
	public:
		using controller_tag_category = impl::root_tag_category;
		using value_type = value_t;
		linear(value_t v_first, value_t v_last)
			: v_first_(v_first), v_last_(v_last)
		{}

		void init(value_t& v) const
		{
			v = v_first_;
		}

		bool valid(const value_t& v) const
		{
			return v <= v_last_;
		}

		bool advance(value_t& v) const
		{
			v += v_step_;
			return v <= v_last_;
		}

		value_t begin() const
		{
			return v_first_;
		}

		value_t end() const
		{
			return v_first_ + ((v_last_ - v_first_) / v_step_) * v_step_ + v_step_;
		}
	private:
		value_t v_first_;
		value_t v_last_;
		static constexpr value_t v_step_ = v_step;
	};

	class auto_repeat {
	public:
		using controller_tag_category = measurement_tag_category;
		using value_type = std::size_t;
		auto_repeat(value_type v_count)
			: v_count_(v_count)
		{}

		auto_repeat(const auto_repeat & base, value_type multiplier, value_type divisor)
			: v_count_(std::max<value_type>(base.v_count_ * multiplier / divisor, 1))
		{}

		void set_arg(std::string_view s)
		{
			v_count_ = std::stoll(std::string(s));
		}

		void init(value_type& v) const
		{
			v = 0;
		}

		bool valid(const value_type& v) const
		{
			return v < v_count_;
		}

		bool advance(value_type& v) const
		{
			++v;
			return v < v_count_;
		}

		value_type begin() const
		{
			return 0;
		}

		value_type end() const
		{
			return v_count_;
		}

		value_type count() const
		{
			return v_count_;
		}

		void data_text(std::ostream& os) const
		{
			os << v_count_;
		}

		void code_data(std::ostream& os) const
		{
			os << v_count_;
		}

		bool operator==(const auto_repeat& b) const
		{
			// IGNORE ANY DIFFERENCES, REPORT THE FIRST COUNT return v_count_ == b.v_count_;	
			return true;
		}
	private:
		value_type v_count_;
	};
	class flag {
	public:
		using controller_tag_category = impl::root_tag_category;
		using value_type = bool;
		flag(value_type v_flag)
			: v_flag_(v_flag)
		{}

		void set_arg(std::string_view s)
		{
			if (s == "1" || s == "true" || s == "on" || s == "yes")
				v_flag_ = true;
			else
				v_flag_ = false;
		}

		void init(value_type& v) const
		{
			v = false;
		}

		bool valid(const value_type& v) const
		{
			return ! v && v_flag_;
		}

		bool advance(value_type& v) const
		{
			v = true;
			return false;
		}

		value_type count() const
		{
			return v_flag_;
		}

		void data_text(std::ostream& os) const
		{
			os << "fmwkng::flag(" << (v_flag_ ? "true" : "false") << ")";
		}

	private:
		value_type v_flag_;
	};
	template< typename D>
	class parameter {
	public:
		using controller_tag_category = impl::root_tag_category;
		using value_type = std::optional<D>;
		parameter(value_type v_flag)
			: v_flag_(v_flag)
		{}

		void set_arg(std::string_view s)
		{
			v_flag_ = s;
		}

		void init(value_type& v) const
		{
			v = v_flag_;
		}

		bool valid(const value_type& v) const
		{
			return !!v;
		}

		bool advance(value_type& v) const
		{
			v.reset();
			return false;
		}

		value_type count() const
		{
			return v_flag_;
		}

		void data_text(std::ostream& os) const
		{
			os << "fmwkng::parameter<std::string>(" << (!!v_flag_ ? *v_flag_ : "{}") << ")";
		}

	private:
		value_type v_flag_;
	};
#pragma endregion
#pragma region public_wrappers
	template< typename X>
	using platform_t = typename std::remove_cv_t< std::remove_reference_t< X>>::platform_t;

	template< typename F, typename ... tags>
	inline auto for_platforms(const tagged_context< tags ...>& ctx, F && f)
	{
		return ctx.for_platforms( std::forward<F>(f));
	}

	template< typename platform_tag, typename ... tags>
	inline auto for_platform(const tagged_context< tags ...>& ctx)
	{
		return ctx.template for_platform< platform_tag>();
	}

	template< typename range_tag, typename ... tags>
	inline auto for_range(const tagged_context< tags ...>& ctx)
	{
		return ctx.template for_range< range_tag>();
	}

	template< typename range_tag, typename ... tags>
	inline auto get(const tagged_context< tags ...>& ctx)
	{
		return ctx.template get< range_tag>();
	}

	template< typename range_tag, typename dt_t>
	inline auto get(const temporary_context< dt_t>& ctx)
	{
		return ctx.template get< range_tag>();
	}

	template< typename range_tag, typename ... tags>
	inline auto count(const tagged_context< tags ...>& ctx)
	{
		return ctx.template count< range_tag>();
	}
	/*
	template< typename range_tag, typename dt_t>
	auto count(const temporary_context< dt_t>& ctx)
	{
		return ctx.template count< range_tag>();
	}
	*/
	template< typename range_tag, typename ... tags>
	inline auto for_index(const tagged_context< tags ...>& ctx)
	{
		return ctx.template for_index< range_tag>();
	}

	template< typename F, typename ... tags>
	inline auto for_parallel(const tagged_context< tags ...>& ctx, F&& f, std::size_t threads = 0, std::size_t batch_size = 0)
	{
		return ctx.for_parallel(std::forward<F>(f), threads, batch_size);
	}

	template< typename ... tags>
	inline std::size_t thread_index(const tagged_context< tags ...>& ctx)
	{
		return ctx.thread_index();
	}

	template< typename measurement_policy, typename ... tags>
	inline auto measurement(const tagged_context< tags ...>& ctx, std::size_t complexity)
	{
		return ctx.template measurement< measurement_policy>(complexity);
	}

	template< typename measurement_policy, typename ... tags>
	inline auto auto_measurement(const tagged_context< tags ...>& ctx, std::size_t v_last)
	{
		return ctx.template auto_measurement< measurement_policy>( v_last);
	}

	template< typename ... tags>
	inline auto stop_for_results(tagged_context< tags ...>& ctx)
	{
		return ctx.stop_for_results();
	}

	template< typename result_tag, typename T, typename ... tags>
	inline void store_result(const tagged_context< tags ...>& ctx, T && v)
	{
		ctx.template store_result< result_tag>(std::forward<T>(v));
	}

	template< typename ... tags>
	inline auto sequential(const tagged_context< tags ...>& ctx)
	{
		return ctx.sequential();
	}

	template< typename ... tags>
	inline std::lock_guard<std::mutex> guard(const tagged_context< tags ...>& ctx)
	{
		return ctx.guard();
	}
#pragma endregion
#pragma region gold_data

	struct gold_element_list
	{
		gold_element_list(std::initializer_list<impl::element_ptr> il)
		{
			for (auto&& a : il)
			{
				el.push_back(a->clone());
			}
		}
		impl::element_list el;
	};

	struct gold_pair {
		gold_pair()
		{}
		gold_pair(gold_element_list&& key, gold_element_list&& value)
			: key(std::move(key.el)), value(std::move(value.el))
		{}
		impl::element_list key;
		impl::element_list value;
	};

	inline gold_data::gold_data(std::initializer_list<gold_pair> il)
	{
		for (auto&& a : il)
		{
			auto rv = dm.emplace(a.key.clone(), a.value.clone());
			assert(rv.second); sink(rv);
		}
	}

	inline gold_data::gold_data(const gold_data& b)
	{
		for (auto&& a : b.dm)
		{
			auto rv = dm.emplace(a.first.clone(), a.second.clone());
			assert(rv.second); sink(rv);
		}
	}

	inline gold_data& gold_data::operator=(const gold_data& b)
	{
		return operator=(gold_data(b));
	}

	inline void gold_data::insert(gold_pair p)
	{
		auto rv = dm.emplace(std::move(p.key), std::move(p.value));
		assert(rv.second); sink(rv);
	}

	using gold_fnc_ptr = gold_data(*)();

	class gold_holder : impl::immovable {
	public:
		gold_holder()	// MASTER
			: prev_(this), next_(this), fnc_(nullptr)
		{}
		gold_holder(gold_holder & master, gold_fnc_ptr fnc)	// SLAVE
			: prev_(master.prev_), next_(&master), fnc_(fnc)
		{
			prev_->next_ = this;
			next_->prev_ = this;
		}
		gold_data collect() const
		{
			gold_data gd;
			for (auto p = next_; p != this; p = p->next_)
			{
				assert(!!p->fnc_);
				gd.append(p->fnc_());
			}
			return gd;
		}
	private:
		gold_holder* prev_;
		gold_holder* next_;
		gold_fnc_ptr fnc_;
	};

#pragma endregion
#pragma region random
	class well_defined_uniform {
	public:
		well_defined_uniform(std::size_t mn, std::size_t mx)
			: mn_(mn), mod_(mx - mn + 1)
		{}

		template< typename E>
		std::size_t operator()(E&& e)
		{
			auto r = e();
			return mn_ + (r % mod_);
		}
	private:
		std::size_t mn_;
		std::size_t mod_;
	};
#pragma endregion
#pragma region hash
	class well_defined_hash {
	public:
		using result_type = std::uint64_t;
		result_type operator()(std::string_view s)
		{
			result_type h = 0;
			for (auto c : s)
			{
				h = (h << 9) ^ (h >> 55) ^ std::uint8_t(c);
			}
			return h;
		}
	};
#pragma endregion
}

#endif
