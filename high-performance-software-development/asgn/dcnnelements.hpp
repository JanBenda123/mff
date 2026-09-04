#ifndef dcnnelements_hpp_
#define dcnnelements_hpp_

#include "tagged.hpp"

#include <cassert>
#include <random>
#include <cmath>

/// @cond INTERNAL
namespace dcnnasgn {

	template<typename ... TL>
	void sink(TL&&...)
	{
	}

	struct permutation_policy_tag {};
	struct permutation_policy_back_tag {};

	template< typename PP>
	concept is_policy = std::derived_from<PP, permutation_policy_tag>
		&& (!std::derived_from<PP, permutation_policy_back_tag>);

	template< typename BPP>
	concept is_policy_back = std::derived_from<BPP, permutation_policy_back_tag>;
}

namespace dcnnsol {

	using dcnnasgn::is_policy;

	template< typename SP, is_policy PP>
	class image_data;

	template< typename CSP, is_policy PP>
	class feature_data;

	template< typename KSP, typename CSPI, typename CSPO, is_policy PP>
	class conv_weights;

	template< typename CSPI, typename CSPO, is_policy PP>
	class feature_weights;

	template< typename CSP, is_policy PP>
	class feature_multiplier;

	template< typename CSP, is_policy PP>
	class feature_bias;

	template< typename CSPI, typename CSPO, typename KSP, is_policy PP>
	class complete_cnn_model;

	template< typename SPI, typename SPO, is_policy PP>
	struct complete_cnn_internal;

	template< typename SPI, typename SPO, typename KSP, is_policy PP>
	struct complete_cnn_layer;

}
/// @endcond

namespace dcnnasgn {

	/// @addtogroup tags
	/// 
	/// @{

	/// @cond INTERNAL
	struct input_selector : tagged::tag_base {};
	struct input_tag : tagged::r_tag<input_selector, tagged::rp_dense> {};
	using input_range = tagged::range_class< input_tag>;
	using input_index = tagged::index_class< input_tag>;
	/// @endcond

	/// <summary>
	/// Tag: Images within a minibatch
	/// </summary>
	struct batch_selector : tagged::tag_base {};
	struct batch_tag : tagged::r_tag<batch_selector, tagged::rp_odd> {};

	/// @}

	/// @addtogroup config
	/// 
	/// @{

	/// <summary>
	/// The range of images within a minibatch
	/// </summary>
	using batch_range = tagged::range_class< batch_tag>;

	/// @}

	/// @addtogroup tags
	/// 
	/// @{

	/// <summary>
	/// Tag: Height dimension of an image
	/// </summary>
	struct height_selector : tagged::tag_base {};
	/// <summary>
	/// Tag: Width dimension of an image
	/// </summary>
	struct width_selector : tagged::tag_base {};

	/// @cond INTERNAL
	template< std::size_t H>
	struct height_stag : tagged::srr_tag<height_selector, 0, H, tagged::rp_odd> {};

	template< std::size_t W>
	struct width_stag : tagged::srr_tag<width_selector, 0, W, tagged::rp_odd> {};
	/// @endcond

	/// @}

	/// @addtogroup sizing 
	/// 
	/// @{

	/// <summary>
	/// Image size policy
	/// </summary>
	/// <typeparam name="H">Image height</typeparam>
	/// <typeparam name="W">Image width</typeparam>
	template< std::size_t H, std::size_t W>
	struct image_size_policy {
		/// <summary>
		/// Tag: Height dimension of an image, statically sized
		/// </summary>
		using height_tag = height_stag<H>;
		/// <summary>
		/// Tag: Width dimension of an image, statically sized
		/// </summary>
		using width_tag = width_stag<W>;

		/// <summary>
		/// Height range of an image, statically sized
		/// </summary>
		inline static constexpr tagged::range_class< height_tag> hr{ H };
		/// <summary>
		/// Width range of an image, statically sized
		/// </summary>
		inline static constexpr tagged::range_class< width_tag> wr{ W };
	};

	/// @}

	/// @addtogroup tags
	/// 
	/// @{

	/// <summary>
	/// Tag: Channel dimension
	/// </summary>
	struct channel_selector : tagged::tag_base {};

	/// @cond INTERNAL
	template< std::size_t C>
	struct channel_stag : tagged::srr_tag<channel_selector, 0, C, tagged::rp_odd> {};
	/// @endcond

	/// <summary>
	/// Tag: Kernel height dimension
	/// 
	/// The height dimension of a convolution layer,
	/// i.e. the height dimension of the associated weight matrix 
	/// </summary>
	struct kernel_height_selector : tagged::tag_base {};
	/// <summary>
	/// Tag: Kernel width dimension
	/// 
	/// The width dimension of a convolution layer,
	/// i.e. the width dimension of the associated weight matrix 
	/// </summary>
	struct kernel_width_selector : tagged::tag_base {};

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	/// @cond INTERNAL
	using batch_mapping = tagged::tensor_class< input_index, batch_tag>;

	template< typename ISP, typename CP>
	struct input_data_policy : ISP, CP {
		using typename ISP::height_tag;
		using typename ISP::width_tag;
		using typename CP::channel_tag;

		using ISP::hr;
		using ISP::wr;
		using CP::cr;

		using image_carrier = float;

		using images_t = tagged::tensor_class< image_carrier, input_tag, tagged::set_roundup<channel_tag, tagged::rp_dense>, tagged::set_roundup<height_tag, tagged::rp_dense>, tagged::set_roundup<width_tag, tagged::rp_dense>>;
		using batch_t = tagged::tensor_class< image_carrier, batch_tag, height_tag, width_tag, channel_tag>;
	};

	template< typename ISP, typename CP, typename SPO, is_policy PP>
	struct batch_initializer {
	public:
		using policy = input_data_policy< ISP, CP>;

		using height_tag = typename policy::height_tag;
		using width_tag = typename policy::width_tag;
		using channel_tag = typename policy::channel_tag;

		using output_data = dcnnsol::image_data<SPO, PP>;

		static void init(const typename policy::images_t& ind, const batch_mapping& bmap, output_data& outd)
		{
			static constexpr auto hr = policy::hr;
			static constexpr auto wr = policy::wr;
			auto cr = policy::cr;

			auto&& images = outd.values;

			assert(ind.range().template get<height_tag>() == hr);
			assert(ind.range().template get<width_tag>() == wr);
			assert(ind.range().template get<channel_tag>() == cr);

			assert(images.range().template get<height_tag>() == hr);
			assert(images.range().template get<width_tag>() == wr);
			assert(images.range().template get<channel_tag>() == cr);

			assert(images.range().template get<batch_tag>() == bmap.range().get<batch_tag>());

			for (auto b : bmap.range())
			{
				auto i = bmap[b];
				for (auto h : hr)
				{
					for (auto w : wr)
					{
						for (auto c : cr)
						{
							images[b & h & w & c] = ind[i & h & w & c];
						}
					}
				}
			}
		}
	};

	struct gold_labels_policy {
		using label_carrier = std::uint32_t;

		using labels_t = tagged::tensor_class< label_carrier, input_tag>;
		using batch_t = tagged::tensor_class< label_carrier, batch_tag>;
	};

	class gold_labels {
	public:
		using policy = gold_labels_policy;
		gold_labels(const input_range& inr) : labels(inr) {}
		policy::labels_t labels;
	};

	class gold_data {
	public:
		using policy = gold_labels_policy;
		gold_data(const batch_range& nr) : labels(nr) {}
		policy::batch_t labels;
		void init(const policy::labels_t& ind, const input_range& inr)
		{
			assert(labels.range().get<batch_tag>().size() == inr.size());

			auto inrb = (*inr.begin()).value();
			for (auto i : inr)
			{
				tagged::index_class<batch_tag> b(i.value() - inrb);
				labels[b] = ind[i];
			}
		}
		void init(const policy::labels_t& ind, const batch_mapping& bmap)
		{
			assert(labels.range().get<batch_tag>().size() == bmap.range().size());

			for (auto b : bmap.range())
			{
				auto i = bmap[b];
				labels[b] = ind[i];
			}
		}
	};
	/// @endcond

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	/// <summary>
	/// Channel size policy
	/// </summary>
	/// <typeparam name="C">Number of channels</typeparam>
	template< std::size_t C>
	struct channel_size_policy {
		/// <summary>
		/// Tag: The channel dimension, statically sized
		/// </summary>
		using channel_tag = channel_stag<C>;

		/// <summary>
		/// Channel index range, statically sized
		/// </summary>
		inline static constexpr tagged::range_class< channel_tag> cr{ C };
	};

	/// <summary>
	/// Combined image and channel size policy
	/// </summary>
	/// <typeparam name="ISP">Image size policy</typeparam>
	/// <typeparam name="CSP">Channel size policy</typeparam>
	template< typename ISP, typename CSP>
	struct image_data_size_policy : ISP, CSP {
		/// <summary>
		/// Image size policy
		/// </summary>
		using image_policy = ISP;
		/// <summary>
		/// Channel size policy
		/// </summary>
		using channel_policy = CSP;
	};

	/// <summary>
	/// Internal layer activation data policy
	/// </summary>
	/// <typeparam name="SP">Sizing policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SP, is_policy PP>
	struct image_data_policy : SP {
		/// <summary>
		/// Tag: Image height dimension, statically sized
		/// </summary>
		using typename SP::height_tag;
		/// <summary>
		/// Tag: Image width dimension, statically sized
		/// </summary>
		using typename SP::width_tag;
		/// <summary>
		/// Tag: Channel index, statically sized
		/// </summary>
		using typename SP::channel_tag;

		/// <summary>
		/// Image height range, statically sized
		/// </summary>
		inline static constexpr auto hr = SP::hr;
		/// <summary>
		/// Image width range, statically sized
		/// </summary>
		inline static constexpr auto wr = SP::wr;
		/// <summary>
		/// Channel index range, statically sized
		/// </summary>
		inline static constexpr auto cr = SP::cr;

		/// <summary>
		/// 4-dimensional tensor type carrying activations
		/// 
		/// Layout: Indexes nested according to permutation policy (\ref dcnnsol::permutation_policy::data)
		/// </summary>
		using values_t = tagged::permute_tensor_class< typename PP::data, float, height_tag, width_tag, channel_tag, batch_tag>;
		/// <summary>
		/// 4-dimensional tensor type carrying loss derivatives wrt. activations
		/// 
		/// Same as \ref values_t but indexes co-tagged according to tensor theory.
		/// 
		/// Layout: Indexes nested according to permutation policy (\ref dcnnsol::permutation_policy::data)
		/// </summary>
		using co_values_t = tagged::permute_tensor_class< tagged::co_list< typename PP::data>, float, tagged::co<height_tag>, tagged::co<width_tag>, tagged::co<channel_tag>, tagged::co<batch_tag>>;
	};

	/// <summary>
	/// Final layer activation data policy
	/// </summary>
	/// <typeparam name="CSP">Channel sizing policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename CSP, is_policy PP>
	struct feature_data_policy : CSP {
		using typename CSP::channel_tag;

		/// <summary>
		/// Channel index range, statically sized
		/// </summary>
		inline static constexpr auto cr = CSP::cr;

		/// <summary>
		/// 2-dimensional tensor type carrying activations
		/// 
		/// Layout: Indexes nested according to permutation policy (\ref dcnnsol::permutation_policy::feature_data)
		/// </summary>
		using values_t = tagged::permute_tensor_class< typename PP::feature_data, float, channel_tag, batch_tag>;
		/// <summary>
		/// 2-dimensional tensor type carrying loss derivatives wrt. activations
		/// 
		/// Same as \ref values_t but indexes co-tagged according to tensor theory.
		/// 
		/// Layout: Indexes nested according to permutation policy (\ref dcnnsol::permutation_policy::feature_data)
		/// </summary>
		using co_values_t = tagged::permute_tensor_class< tagged::co_list<typename PP::feature_data>, float, tagged::co<channel_tag>, tagged::co<batch_tag>>;
	};

	/// <summary>
	/// Loss data policy
	/// </summary>
	struct loss_data_policy {
		/// <summary>
		/// 1-dimensional tensor type carrying loss values for images in a minibatch
		/// </summary>
		using loss_t = tagged::tensor_class< float, batch_tag>;
	};

	/// @}

	struct data_stats {
		data_stats(float e, float v)
			: E(e), var(v)
		{}

		template< tagged::tag ... TL>
		data_stats(const tagged::tensor_class< float, TL...>& val)
			: E(0.0f), var(0.0f)
		{
			auto&& rng = val.range();

			for (auto ix : rng)
			{
				auto v = val[ix];
				E += v;
				var += v * v;
			}

			float c = (float)rng.size();

			E /= c;
			var /= c;
			var -= E * E;
		}

		float E, var;
	};

	template< typename SP, is_policy PP>
	inline data_stats value_stats(const dcnnsol::image_data<SP, PP>& dt)
	{
		return data_stats(dt.values);
	}

	template< typename CSP, is_policy PP>
	inline data_stats value_stats(const dcnnsol::feature_data<CSP, PP>& dt)
	{
		return data_stats(dt.values);
	}

	/// @addtogroup data
	/// 
	/// @{

	/// <summary>
	/// Loss data class
	/// </summary>
	class loss_data {
	public:
		using policy = loss_data_policy;
		loss_data(const batch_range& nr) : loss(nr) {}
		policy::loss_t loss;
	};

	/// @}

	inline data_stats loss_stats(const loss_data& dt)
	{
		return data_stats(dt.loss);
	}

	/// @addtogroup sizing
	/// 
	/// @{

	/// @}

	/// @addtogroup functors 
	/// 
	/// @{

	/// <summary>
	/// Functor to add a fixed value
	/// </summary>
	/// <typeparam name="T1">Input index tag</typeparam>
	/// <typeparam name="T2">Output index tag</typeparam>
	template< tagged::tag T1, tagged::tag T2>
	struct delta_functor {
		delta_functor(std::ptrdiff_t delta)
			: delta_(delta)
		{}

		std::ptrdiff_t delta() const
		{
			return delta_;
		}

		tagged::index_class<T2> operator()(const tagged::index_class<T1>& ko) const
		{
			auto dox = ko.value();
			return tagged::index_class<T2>(dox + delta_);
		}
	private:
		std::ptrdiff_t delta_;
	};

	/// <summary>
	/// Functor to subtract from a fixed value
	/// </summary>
	/// <typeparam name="T1">Input index tag</typeparam>
	/// <typeparam name="T2">Output index tag</typeparam>
	template< tagged::tag T1, tagged::tag T2>
	struct neg_delta_functor {
		neg_delta_functor(std::ptrdiff_t delta)
			: delta_(delta)
		{}

		std::ptrdiff_t delta() const
		{
			return delta_;
		}

		tagged::index_class<T2> operator()(const tagged::index_class<T1>& ko) const
		{
			auto dox = ko.value();
			return tagged::index_class<T2>(delta_ - dox);
		}
	private:
		std::ptrdiff_t delta_;
	};

	/// <summary>
	/// Functor to multiply by a constant and add a fixed value
	/// </summary>
	/// <typeparam name="T1">Input index tag</typeparam>
	/// <typeparam name="T2">Output index tag</typeparam>
	/// <typeparam name="MUL">The constant multiplier</typeparam>
	template< tagged::tag T1, tagged::tag T2, std::ptrdiff_t MUL>
	struct mul_delta_functor {
		mul_delta_functor(std::ptrdiff_t delta)
			: delta_(delta)
		{}

		std::ptrdiff_t delta() const
		{
			return delta_;
		}

		inline static constexpr std::ptrdiff_t multiplier = MUL;

		tagged::index_class<T2> operator()(const tagged::index_class<T1>& ko) const
		{
			auto dox = ko.value();
			return tagged::index_class<T2>(delta_ + multiplier * dox);
		}
	private:
		std::ptrdiff_t delta_;
	};

	/// @}

	/// @addtogroup tags
	/// 
	/// @{

	/// @cond INTERNAL
	template< std::size_t KH>
	struct kernel_height_stag : tagged::srr_tag<kernel_height_selector, 0, KH, tagged::rp_odd> {};

	template< std::size_t KW>
	struct kernel_width_stag : tagged::srr_tag<kernel_width_selector, 0, KW, tagged::rp_odd> {};
	/// @endcond 

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	/// <summary>
	/// Policy class: Convolution kernel dimensions
	/// 
	/// The dimensions are static, determined by template arguments.
	/// </summary>
	/// <typeparam name="KH">Kernel height</typeparam>
	/// <typeparam name="KW">Kernel width</typeparam>
	template< std::size_t KH, std::size_t KW>
	struct conv_kernel_size_policy {
		/// @name Dimension tags
		/// 
		/// The tags carry the static dimensioning information
		/// @{

		using kernel_height_tag = kernel_height_stag<KH>;	///< Kernel (convolution) height
		using kernel_width_tag = kernel_width_stag<KW>;	///< Kernel (convolution) width

		/// @}

		/// @name Dimension ranges
		/// 
		/// The ranges are determined at compile time and therefore \c constexpr
		/// @{

		inline static constexpr tagged::range_class< kernel_height_tag> khr{ KH };	///< Kernel (convolution) height range
		inline static constexpr tagged::range_class< kernel_width_tag> kwr{ KW };	///< Kernel (convolution) width range

		/// @}
	};

	/// <summary>
	/// Policy class: Model weight dimensions for convolutional layers
	/// 
	/// The dimensions are static, determined by template arguments.
	/// </summary>
	/// <typeparam name="KSP">Kernel size policy</typeparam>
	/// <typeparam name="CSPI">Input channel policy</typeparam>
	/// <typeparam name="CSPO">Output channel policy</typeparam>
	template< typename KSP, typename CSPI, typename CSPO>
	struct conv_weight_size_policy : KSP {
		/// @name Dimension tags
		/// 
		/// The tags carry the static dimensioning information
		/// @{

		using typename KSP::kernel_height_tag;
		using typename KSP::kernel_width_tag;

		using channel_in_tag = typename CSPI::channel_tag;	///< Input channel tag
		using channel_out_tag = typename CSPO::channel_tag;	///< Output channel tag

		/// @}

		/// @name Dimension ranges
		/// 
		/// The ranges are determined at compile time and therefore \c constexpr
		/// @{

		using KSP::khr;
		using KSP::kwr;
		inline static constexpr auto cir = CSPI::cr;	///< Input channel range
		inline static constexpr auto cor = CSPO::cr;	///< Output channel range

		/// @}
	};

	/// <summary>
	/// Policy class: Model weight dimensions for fully connected layers
	/// 
	/// The dimensions are static, determined by template arguments.
	/// </summary>
	/// <typeparam name="KSP">Kernel size policy</typeparam>
	/// <typeparam name="CSPI">Input channel policy</typeparam>
	/// <typeparam name="CSPO">Output channel policy</typeparam>
	template< typename CSPI, typename CSPO>
	struct feature_weight_size_policy {
		/// @name Dimension tags
		/// 
		/// The tags carry the static dimensioning information
		/// @{

		using channel_in_tag = typename CSPI::channel_tag;	///< Input channel tag
		using channel_out_tag = typename CSPO::channel_tag;	///< Output channel tag

		/// @}

		/// @name Dimension ranges
		/// 
		/// The ranges are determined at compile time and therefore \c constexpr
		/// @{

		inline static constexpr auto cir = CSPI::cr;	///< Input channel range
		inline static constexpr auto cor = CSPO::cr;	///< Output channel range

		/// @}
	};

	/// <summary>
	/// Policy class: Model weight data types for convolutional layers
	/// </summary>
	/// <typeparam name="KSP"></typeparam>
	/// <typeparam name="CSPI"></typeparam>
	/// <typeparam name="CSPO"></typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename KSP, typename CSPI, typename CSPO, is_policy PP>
	struct conv_weight_policy : conv_weight_size_policy< KSP, CSPI, CSPO> {
	private:
		using base_ = conv_weight_size_policy< KSP, CSPI, CSPO>;
	public:
		using typename base_::kernel_height_tag;
		using typename base_::kernel_width_tag;
		using typename base_::channel_in_tag;
		using typename base_::channel_out_tag;

		/// @name Data classes
		/// 
		/// Each data class is a \ref tagged::tensor_class with statically sized dimensions
		/// determined by the sizing-policy arguments of this policy class template.
		/// The physical layout (order of indexes) of each \ref tagged::tensor_class
		/// is determined by the permutation-policy argument.
		/// @{

		/// <summary>
		/// The tensor containing the weights of the convolution.
		/// 
		/// The input channel tag is modified by the \ref tagged::co prefix to distinguish it 
		/// from the output channel tag (which may be otherwise identical).
		/// This co-tagging is also consistent with the meaning of the tensor 
		/// as a transformation from input channels to output channels.
		/// </summary>
		using weights_t = tagged::permute_tensor_class< typename PP::weights, float, kernel_height_tag, kernel_width_tag, tagged::co<channel_in_tag>, channel_out_tag>;

		/// @}
	};

	/// <summary>
	/// Policy class: Model weight data types for fully connected layers
	/// </summary>
	/// <typeparam name="KSP"></typeparam>
	/// <typeparam name="CSPI"></typeparam>
	/// <typeparam name="CSPO"></typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename CSPI, typename CSPO, is_policy PP>
	struct feature_weight_policy : feature_weight_size_policy< CSPI, CSPO> {
	private:
		using base_ = feature_weight_size_policy< CSPI, CSPO>;
	public:
		using typename base_::channel_in_tag;
		using typename base_::channel_out_tag;

		/// @name Data classes
		/// 
		/// Each data class is a \ref tagged::tensor_class with statically sized dimensions
		/// determined by the sizing-policy arguments of this policy class template.
		/// The physical layout (order of indexes) of each \ref tagged::tensor_class
		/// is determined by the permutation-policy argument.
		/// @{

		/// <summary>
		/// The tensor containing the weights of the convolution.
		/// 
		/// The input channel tag is modified by the \ref tagged::co prefix to distinguish it 
		/// from the output channel tag (which may be otherwise identical).
		/// This co-tagging is also consistent with the meaning of the tensor 
		/// as a transformation from input channels to output channels.
		/// </summary>
		using weights_t = tagged::permute_tensor_class< typename PP::feature_weights, float, tagged::co<channel_in_tag>, channel_out_tag>;

		/// @}
	};

	/// @}

	/// @addtogroup functors
	/// 
	/// @{

	/// @cond INTERNAL
	template<std::size_t KD, std::size_t S>
	struct conv_traits {
		static_assert(KD / 2 >= S - 1);
		inline static constexpr std::size_t LPAD = (KD - 1) / 2;
		inline static constexpr std::size_t SHIFT = (KD - 1) / 2;
		inline static constexpr std::size_t RPAD = KD / 2 + 1 - S;
		// KD == LPAD + 1 + RPAD
	};
	/// @endcond

	/// <summary>
	/// Functor: Output index to kernel index range
	/// </summary>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="TO">Output dimension tag</typeparam>
	/// <typeparam name="DI">Input image size</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	/// <typeparam name="S">Stride</typeparam>
	template< tagged::tag TK, tagged::tag TO, std::size_t DI, std::size_t KD, std::size_t S>
	struct conv_ok_range_functor {
		using traits = conv_traits<KD, S>;
		static_assert(DI > traits::LPAD);
		static_assert(DI > traits::RPAD);
		tagged::range_class<tagged::selector<TK>> operator()(const tagged::index_class<TO>& o) const
		{
			auto dox = o.value() * S;
			return tagged::range_class< tagged::selector<TK>>(traits::LPAD - std::min(dox, traits::LPAD), (KD + DI - traits::RPAD - 1) - std::max(dox, DI - traits::RPAD - 1));
		}

		constexpr std::size_t multiplier() const
		{
			return S;
		}

		constexpr std::size_t lpad() const
		{
			return traits::LPAD;
		}

		constexpr std::size_t rpad() const
		{
			return traits::RPAD;
		}
	};

	/// <summary>
	/// Functor: Output index to \ref delta_functor
	/// </summary>
	/// <typeparam name="TI">Input dimension tag</typeparam>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="TO">Output dimension tag</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	template< tagged::tag TI, tagged::tag TK, tagged::tag TO, std::size_t KD, std::size_t S>
	struct conv_oki_map_functor {
		using traits = conv_traits<KD, S>;
		using df = delta_functor<TK, TI>;
		df operator()(const tagged::index_class<TO>& o) const
		{
			auto dox = o.value() * S;
			return df(dox - traits::SHIFT);
		}

		constexpr std::size_t multiplier() const
		{
			return S;
		}

		constexpr std::ptrdiff_t delta() const
		{
			return -traits::SHIFT;
		}
	};

	/// <summary>
	/// Functor: Input index to kernel index range
	/// </summary>
	/// <typeparam name="TI">Input dimension tag</typeparam>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="DI">Input image size</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	template< tagged::tag TI, tagged::tag TK, std::size_t DI, std::size_t KD, std::size_t S>
	struct conv_ik_range_functor {
		using traits = conv_traits<KD, S>;
		static_assert(DI > traits::LPAD);
		static_assert(DI > traits::RPAD);
		tagged::range_class< tagged::selector<TK>> operator()(const tagged::index_class<TI>& i) const
		{
			static_assert(S == 1, "The kernel range is not contiguous for stride > 1");
			auto dix = i.value();
			return tagged::range_class< tagged::selector<TK>>(std::max(dix, DI - traits::LPAD - 1) - (DI - traits::LPAD - 1), (KD - traits::RPAD) + std::min(dix, traits::RPAD));
		}
	};

	/// <summary>
	/// Functor: Input index to \ref neg_delta_functor
	/// </summary>
	/// <typeparam name="TI">Input dimension tag</typeparam>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="TO">Output dimension tag</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	template< tagged::tag TI, tagged::tag TK, tagged::tag TO, std::size_t KD, std::size_t S>
	struct conv_iko_map_functor {
		using traits = conv_traits<KD, S>;
		using df = neg_delta_functor<TK, TO>;
		df operator()(const tagged::index_class<TI>& i) const
		{
			static_assert(S == 1, "The kernel range is not contiguous for stride > 1");
			auto dix = i.value();
			return df(dix + traits::SHIFT);
		}
	};

	/// <summary>
	/// Functor: Kernel index to output index range
	/// </summary>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="TO">Output dimension tag</typeparam>
	/// <typeparam name="DI">Input image size</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	template< tagged::tag TK, tagged::tag TO, std::size_t DI, std::size_t KD, std::size_t S>
	struct conv_ko_range_functor {
		using traits = conv_traits<KD, S>;
		static_assert(DI > traits::LPAD);
		static_assert(DI > traits::RPAD);
		tagged::range_class<tagged::selector<TO>> operator()(const tagged::index_class<TK>& k) const
		{
			auto dkx = k.value();
			return tagged::range_class< tagged::selector<TO>>(((traits::LPAD + S - 1) - std::min(dkx, traits::LPAD)) / S, ((DI + KD - traits::RPAD - 1) - std::max(dkx, KD - traits::RPAD - 1)) / S);
		}
	};

	/// <summary>
	/// Functor: Kernel index to \ref delta_functor
	/// </summary>
	/// <typeparam name="TI">Input dimension tag</typeparam>
	/// <typeparam name="TK">Kernel dimension tag</typeparam>
	/// <typeparam name="TO">Output dimension tag</typeparam>
	/// <typeparam name="KD">Kernel size</typeparam>
	template< tagged::tag TK, tagged::tag TO, tagged::tag TI, std::size_t KD, std::size_t S>
	struct conv_koi_map_functor {
		using traits = conv_traits<KD, S>;
		using df = std::conditional_t< S == 1, delta_functor<TO, TI>, mul_delta_functor<TO, TI, S>>;
		df operator()(const tagged::index_class<TK>& k) const
		{
			auto dkx = k.value();
			return df(dkx - traits::SHIFT);
		}
	};

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	/// <summary>
	/// Utility base class for the convolutional layer
	/// </summary>
	/// <typeparam name="SPI">Input size policy</typeparam>
	/// <typeparam name="SPO">Output size policy</typeparam>
	/// <typeparam name="KSP">Kernel size policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SPI, typename SPO, typename KSP, is_policy PP>
	struct nonstrided_conv_layer_base
	{
	public:
		using CSPI = typename SPI::channel_policy;
		using CSPO = typename SPO::channel_policy;

		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SPI, PP>;
		/// <summary>
		/// Model weights
		/// </summary>
		using weights = dcnnsol::conv_weights<KSP, CSPI, CSPO, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::image_data<SPO, PP>;
		///  @}

		/// @name Dimension tags
		/// @{
		
		using height_in_tag = typename SPI::height_tag;	///< Input image height
		using width_in_tag = typename SPI::width_tag;	///< Input image width
		using channel_in_tag = typename SPI::channel_tag;	///< Input image channel

		using kernel_height_tag = typename KSP::kernel_height_tag;	///< Kernel height
		using kernel_width_tag = typename KSP::kernel_width_tag;	///< Kernel width

		using height_out_tag = typename SPO::height_tag;	///< Output image height
		using width_out_tag = typename SPO::width_tag;	///< Output image width
		using channel_out_tag = typename SPO::channel_tag;	///< Output image channel

		/// @}

		static_assert(tagged::same_tag<height_in_tag, height_out_tag>);
		static_assert(tagged::same_tag<width_in_tag, width_out_tag>);

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto hir = SPI::hr;	///< Input image height range
		inline static constexpr auto wir = SPI::wr;	///< Input image width range
		inline static constexpr auto cir = SPI::cr;	///< Input image channel range
		inline static constexpr auto khr = KSP::khr;	///< Kernel height range
		inline static constexpr auto kwr = KSP::kwr;	///< Kernel width range
		inline static constexpr auto hor = SPO::hr;	///< Output image height range
		inline static constexpr auto wor = SPO::wr;	///< Output image width range
		inline static constexpr auto cor = SPO::cr;	///< Output image channel range

		/// @}
		
		inline static constexpr std::size_t fanin = khr.size() * kwr.size() * cir.size();	///< Number of inputs for each output element

		/// @name Input-kernel-output index convertors
		/// 
		/// Each quadruplet of functors serves for a different order of loop nesting, i.e.
		/// loops like 
		/// \code
		/// for ( auto top_index_value : top_index_range )
		/// {   auto mapping_functor = mf(top_index_value)
		///     for ( auto mid_index_value : rf(top_index_value) )
		///     {
		///         auto bottom_index_value = mapping_functor(mid_index_value);
		///         /*...*/
		///     }
		/// }
		/// \endcode
		/// Each \c -rf functor computes a mid-index range from a top-index value.
		/// The purpose is to handle clipping of valid index ranges at the borders
		/// of the images because output images have the same dimensions as
		/// the input images despite being generated by convolution
		/// from neighboring values. Thus, the available kernel-index range must be clipped
		/// for an output or input index at a border and vice versa.
		/// 
		/// Each \c -mf functor produces another functor from a top-index value that converts a mid-index value to a bottom-index value.
		/// The produced functor handles the required shifts (and sign changes) that result from
		/// the top-index value. In addition, it also handles the fact that kernels are indexed by [0,3) instead of [-1,1].
		/// 
		/// \c h- and \c w- functors work along image heights and widths, respectively.
		/// 
		/// @{
		
		inline static constexpr conv_ok_range_functor<tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, hir.size(), khr.size(), 1> hokrf{}; ///< output-height index to kernel-height range
		inline static constexpr conv_oki_map_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, khr.size(), 1> hokimf{}; ///< output-height index to kernel-height index to input-height index
		inline static constexpr conv_ok_range_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, wir.size(), kwr.size(), 1> wokrf{}; ///< output-width index to kernel-width range
		inline static constexpr conv_oki_map_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, kwr.size(), 1> wokimf{}; ///< output-width index to kernel-width index to input-width index

		inline static constexpr conv_ik_range_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, hir.size(), khr.size(), 1> hikrf{};	///< input-height index to kernel-height range
		inline static constexpr conv_iko_map_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, khr.size(), 1> hikomf{};	 ///< input-height index to kernel-height index to output-height index
		inline static constexpr conv_ik_range_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, wir.size(), kwr.size(), 1> wikrf{};  ///< input-width index to kernel-width range
		inline static constexpr conv_iko_map_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, kwr.size(), 1> wikomf{}; ///< input-width index to kernel-width index to output-width index

		inline static constexpr conv_ko_range_functor< tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, hir.size(), khr.size(), 1> hkorf{};   ///< kernel-height index to output-height range
		inline static constexpr conv_koi_map_functor< tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, tagged::selector<height_in_tag>, khr.size(), 1> hkoimf{};	///< kernel-height index to output-height index to input-height index
		inline static constexpr conv_ko_range_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, wir.size(), kwr.size(), 1> wkorf{};  ///< kernel-width index to output-width range
		inline static constexpr conv_koi_map_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, tagged::selector<width_in_tag>, kwr.size(), 1> wkoimf{}; ///< kernel-width index to output-width index to input-width index

		/// @}

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="wtd">Weights</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const weights& wtd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& wtv = wtd.weights;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& wtr = wtv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_in_tag>() == hir);
			static_assert(inr.template get<width_in_tag>() == wir);
			static_assert(inr.template get<channel_in_tag>() == cir);

			static_assert(wtr.template get<kernel_height_tag>() == khr);
			static_assert(wtr.template get<kernel_width_tag>() == kwr);
			static_assert(wtr.template get< tagged::co<channel_in_tag>>() == ~cir);
			static_assert(wtr.template get<channel_out_tag>() == cor);

			static_assert(outr.template get<height_out_tag>() == hor);
			static_assert(outr.template get<width_out_tag>() == wor);
			static_assert(outr.template get<channel_out_tag>() == cor);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}
		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & khr & kwr & hor & wor & ~cir & cor).size();
		}
		/// @endcond

		/// @}
	};

	/// <summary>
	/// Utility base class for the convolutional layer
	/// </summary>
	/// <typeparam name="SPI">Input size policy</typeparam>
	/// <typeparam name="SPO">Output size policy</typeparam>
	/// <typeparam name="KSP">Kernel size policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SPI, typename SPO, typename KSP, is_policy PP>
	struct strided_conv_layer_base
	{
	public:
		using CSPI = typename SPI::channel_policy;
		using CSPO = typename SPO::channel_policy;

		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SPI, PP>;
		/// <summary>
		/// Model weights
		/// </summary>
		using weights = dcnnsol::conv_weights<KSP, CSPI, CSPO, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::image_data<SPO, PP>;
		///  @}

		/// @name Dimension tags
		/// @{

		using height_in_tag = typename SPI::height_tag;	///< Input image height
		using width_in_tag = typename SPI::width_tag;	///< Input image width
		using channel_in_tag = typename SPI::channel_tag;	///< Input image channel

		using kernel_height_tag = typename KSP::kernel_height_tag;	///< Kernel height
		using kernel_width_tag = typename KSP::kernel_width_tag;	///< Kernel width

		using height_out_tag = typename SPO::height_tag;	///< Output image height
		using width_out_tag = typename SPO::width_tag;	///< Output image width
		using channel_out_tag = typename SPO::channel_tag;	///< Output image channel

		/// @}

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto hir = SPI::hr;	///< Input image height range
		inline static constexpr auto wir = SPI::wr;	///< Input image width range
		inline static constexpr auto cir = SPI::cr;	///< Input image channel range
		inline static constexpr auto khr = KSP::khr;	///< Kernel height range
		inline static constexpr auto kwr = KSP::kwr;	///< Kernel width range
		inline static constexpr auto hor = SPO::hr;	///< Output image height range
		inline static constexpr auto wor = SPO::wr;	///< Output image width range
		inline static constexpr auto cor = SPO::cr;	///< Output image channel range

		/// @}

		inline static constexpr std::size_t fanin = khr.size() * kwr.size() * cir.size();	///< Number of inputs for each output element

		static_assert(hir.size() % hor.size() == 0);
		static_assert(wir.size() % wor.size() == 0);

		/// @name Stride
		/// 
		/// Output coordinates are multiplied by \c HSTRIDE or \c WSTRIDE before conversion to input coordinates.
		/// @{

		inline static constexpr std::size_t HSTRIDE = hir.size() / hor.size();
		inline static constexpr std::size_t WSTRIDE = wir.size() / wor.size();

		/// @}

		/// @name Input-kernel-output index convertors
		/// 
		/// Each quadruplet of functors serves for a different order of loop nesting, i.e.
		/// loops like 
		/// \code
		/// for ( auto top_index_value : top_index_range )
		/// {   auto mapping_functor = mf(top_index_value)
		///     for ( auto mid_index_value : rf(top_index_value) )
		///     {
		///         auto bottom_index_value = mapping_functor(mid_index_value);
		///         /*...*/
		///     }
		/// }
		/// \endcode
		/// Each \c -rf functor computes a mid-index range from a top-index value.
		/// The purpose is to handle clipping of valid index ranges at the borders
		/// of the images because output images have the same dimensions as
		/// the input images despite being generated by convolution
		/// from neighboring values. Thus, the available kernel-index range must be clipped
		/// for an output or input index at a border and vice versa.
		/// 
		/// Each \c -mf functor produces another functor from a top-index value that converts a mid-index value to a bottom-index value.
		/// The produced functor handles the required shifts (and sign changes) that result from
		/// the top-index value. In addition, it also handles the fact that kernels are indexed by [0,3) instead of [-1,1].
		/// 
		/// \c h- and \c w- functors work along image heights and widths, respectively.
		/// 
		/// @{

		inline static constexpr conv_ok_range_functor<tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, hir.size(), khr.size(), HSTRIDE> hokrf{}; ///< output-height index to kernel-height range
		inline static constexpr conv_oki_map_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, khr.size(), HSTRIDE> hokimf{}; ///< output-height index to kernel-height index to input-height index
		inline static constexpr conv_ok_range_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, wir.size(), kwr.size(), WSTRIDE> wokrf{}; ///< output-width index to kernel-width range
		inline static constexpr conv_oki_map_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, kwr.size(), WSTRIDE> wokimf{}; ///< output-width index to kernel-width index to input-width index

		inline static constexpr conv_ik_range_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, hir.size(), khr.size(), HSTRIDE> hikrf{};	///< input-height index to kernel-height range
		inline static constexpr conv_iko_map_functor< tagged::selector<height_in_tag>, tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, khr.size(), HSTRIDE> hikomf{};	 ///< input-height index to kernel-height index to output-height index
		inline static constexpr conv_ik_range_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, wir.size(), kwr.size(), WSTRIDE> wikrf{};  ///< input-width index to kernel-width range
		inline static constexpr conv_iko_map_functor< tagged::selector<width_in_tag>, tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, kwr.size(), WSTRIDE> wikomf{}; ///< input-width index to kernel-width index to output-width index

		inline static constexpr conv_ko_range_functor< tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, hir.size(), khr.size(), HSTRIDE> hkorf{};   ///< kernel-height index to output-height range
		inline static constexpr conv_koi_map_functor< tagged::selector<kernel_height_tag>, tagged::selector<height_out_tag>, tagged::selector<height_in_tag>, khr.size(), HSTRIDE> hkoimf{};	///< kernel-height index to output-height index to input-height index
		inline static constexpr conv_ko_range_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, wir.size(), kwr.size(), WSTRIDE> wkorf{};  ///< kernel-width index to output-width range
		inline static constexpr conv_koi_map_functor< tagged::selector<kernel_width_tag>, tagged::selector<width_out_tag>, tagged::selector<width_in_tag>, kwr.size(), WSTRIDE> wkoimf{}; ///< kernel-width index to output-width index to input-width index

		/// @}

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="wtd">Weights</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const weights& wtd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& wtv = wtd.weights;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& wtr = wtv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_in_tag>() == hir);
			static_assert(inr.template get<width_in_tag>() == wir);
			static_assert(inr.template get<channel_in_tag>() == cir);

			static_assert(wtr.template get<kernel_height_tag>() == khr);
			static_assert(wtr.template get<kernel_width_tag>() == kwr);
			static_assert(wtr.template get< tagged::co<channel_in_tag>>() == ~cir);
			static_assert(wtr.template get<channel_out_tag>() == cor);

			static_assert(outr.template get<height_out_tag>() == hor);
			static_assert(outr.template get<width_out_tag>() == wor);
			static_assert(outr.template get<channel_out_tag>() == cor);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}
		/// @cond INTERNAL
		static std::size_t forward_complexity(const batch_range& br)
		{
			return (br & khr & kwr & hor & wor & ~cir & cor).size();
		}
		/// @endcond

		/// @}
	};

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	/// @cond INTERNAL
	template< typename CSP>
	struct image_normalize_internal_policy : CSP {
		using typename CSP::channel_tag;

		using CSP::cr;

		using stat_t = tagged::tensor_class< float, channel_tag>;
	};
	/// @endcond 

	/// @}

	/// @addtogroup data
	/// 
	/// @{

	/// @cond INTERNAL
	template< typename CSP>
	class image_normalize_model {
	public:
		using policy = image_normalize_internal_policy< CSP>;
		image_normalize_model() : Es(policy::cr), scales(policy::cr) {}
		policy::stat_t Es;
		policy::stat_t scales;
	};
	/// @endcond 

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	/// <summary>
	/// Utility base class for a normalizing layer
	/// </summary>
	/// <typeparam name="SP">Size policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SP, is_policy PP>
	struct image_normalize_layer_base {
	public:
		using CSP = typename SP::channel_policy;

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SP, PP>;
		/// <summary>
		/// Statistics
		/// </summary>
		using norm_data = image_normalize_model<CSP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::image_data<SP, PP>;

		/// <summary>
		/// Tag: Image height dimension
		/// </summary>
		using height_tag = typename SP::height_tag;
		/// <summary>
		/// Tag: Image width dimension
		/// </summary>
		using width_tag = typename SP::width_tag;
		/// <summary>
		/// Tag: Channel index
		/// </summary>
		using channel_tag = typename SP::channel_tag;

		inline static constexpr auto hr = SP::hr;	///< Index range along image height
		inline static constexpr auto wr = SP::wr;	///< Index range along image width
		inline static constexpr auto cr = SP::cr;	///< Index range along image width

		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const norm_data& nd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& Ev = nd.Es;
			auto&& scalev = nd.scales;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& Er = Ev.range();
			auto&& scaler = scalev.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_tag>() == hr);
			static_assert(inr.template get<width_tag>() == wr);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(Er.template get<channel_tag>() == cr);

			static_assert(scaler.template get<channel_tag>() == cr);

			static_assert(outr.template get<height_tag>() == hr);
			static_assert(outr.template get<width_tag>() == wr);
			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}
		
		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & hr & wr & cr).size();
		}
		/// @endcond
	};

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	template< typename CSP, is_policy PP>
	struct feature_multiplier_policy : CSP {
		using typename CSP::channel_tag;

		using CSP::cr;

		using multiplier_t = tagged::tensor_class< float, channel_tag>;
		using co_multiplier_t = tagged::tensor_class< float, tagged::co<channel_tag>>;
	};

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	/// <summary>
	/// Utility base class for the image multiply layer
	/// </summary>
	/// <typeparam name="SP">Size policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SP, is_policy PP>
	struct image_multiply_layer_base {
	public:
		using CSP = typename SP::channel_policy;
		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SP, PP>;
		/// <summary>
		/// Model multiplieres
		/// </summary>
		using multiplier_data = dcnnsol::feature_multiplier<CSP, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::image_data<SP, PP>;
		///  @}

		/// @name Dimension tags
		/// @{

		using height_tag = typename SP::height_tag;	///< Image height
		using width_tag = typename SP::width_tag;	///< Image width
		using channel_tag = typename SP::channel_tag;	///< Image channel
		/// @}

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto hr = SP::hr;	///< Image height range
		inline static constexpr auto wr = SP::wr;	///< Image width range
		inline static constexpr auto cr = SP::cr;	///< Image channel range

		/// @}

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="cd">multiplieres</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const multiplier_data& cd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& multiplierv = cd.multipliers;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& multiplierr = multiplierv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_tag>() == hr);
			static_assert(inr.template get<width_tag>() == wr);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(multiplierr.template get<channel_tag>() == cr);

			static_assert(outr.template get<height_tag>() == hr);
			static_assert(outr.template get<width_tag>() == wr);
			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & hr & wr & cr).size();
		}
		/// @endcond
	};

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	template< typename CSP, is_policy PP>
	struct feature_bias_policy : CSP {
		using typename CSP::channel_tag;

		using CSP::cr;

		using bias_t = tagged::tensor_class< float, channel_tag>;
		using co_bias_t = tagged::tensor_class< float, tagged::co<channel_tag>>;
	};

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	/// <summary>
	/// Utility base class for the image shift layer
	/// </summary>
	/// <typeparam name="SP">Size policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename SP, is_policy PP>
	struct image_shift_layer_base {
	public:
		using CSP = typename SP::channel_policy;

		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SP, PP>;
		/// <summary>
		/// Model biases
		/// </summary>
		using bias_data = dcnnsol::feature_bias<CSP, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::image_data<SP, PP>;
		///  @}

		/// @name Dimension tags
		/// @{

		using height_tag = typename SP::height_tag;	///< Image height
		using width_tag = typename SP::width_tag;	///< Image width
		using channel_tag = typename SP::channel_tag;	///< Image channel
		/// @}

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto hr = SP::hr;	///< Image height range
		inline static constexpr auto wr = SP::wr;	///< Image width range
		inline static constexpr auto cr = SP::cr;	///< Image channel range

		/// @}

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="cd">Biases</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const bias_data& cd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& betav = cd.betas;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& betar = betav.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_tag>() == hr);
			static_assert(inr.template get<width_tag>() == wr);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(betar.template get<channel_tag>() == cr);

			static_assert(outr.template get<height_tag>() == hr);
			static_assert(outr.template get<width_tag>() == wr);
			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity(const batch_range& br)
		{
			return (br & hr & wr & cr).size();
		}
		/// @endcond
	};

	template< typename SP, is_policy PP>
	struct image_relu_layer_base {
		using input_data = dcnnsol::image_data<SP, PP>;
		using output_data = dcnnsol::image_data<SP, PP>;

		using height_tag = typename SP::height_tag;
		using width_tag = typename SP::width_tag;
		using channel_tag = typename SP::channel_tag;

		inline static constexpr auto hr = SP::hr;
		inline static constexpr auto wr = SP::wr;
		inline static constexpr auto cr = SP::cr;

		static tagged::range_class<batch_tag> forward_check(const input_data& ind, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_tag>() == hr);
			static_assert(inr.template get<width_tag>() == wr);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(outr.template get<height_tag>() == hr);
			static_assert(outr.template get<width_tag>() == wr);
			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & hr & wr & cr).size();
		}
		/// @endcond
	};

	/// @}

	/// @addtogroup tags
	/// 
	/// @{

	struct maxpool_height_selector : tagged::tag_base {};
	struct maxpool_width_selector : tagged::tag_base {};

	template< std::size_t KH>
	struct maxpool_height_stag : tagged::srr_tag<maxpool_height_selector, 0, KH, tagged::rp_odd> {};

	template< std::size_t KW>
	struct maxpool_width_stag : tagged::srr_tag<maxpool_width_selector, 0, KW, tagged::rp_odd> {};

	/// @}

	/// @addtogroup functors
	/// 
	/// @{

	template< tagged::tag TK, tagged::tag TO, tagged::tag TI, std::size_t KD>
	struct maxpool_koi_map_functor {
		using df = mul_delta_functor<TO, TI, KD>;
		df operator()(const tagged::index_class<TK>& k) const
		{
			auto dkx = k.value();
			return df(dkx);
		}
	};

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	template< typename SPI, typename SPO, is_policy PP>
	struct image_maxpool_layer_base {

		static_assert(SPI::hr.size() % SPO::hr.size() == 0);
		static_assert(SPI::wr.size() % SPO::wr.size() == 0);
		static_assert(SPI::cr == SPO::cr);

		static constexpr std::size_t KH = SPI::hr.size() / SPO::hr.size();
		static constexpr std::size_t KW = SPI::wr.size() / SPO::wr.size();

		using input_data = dcnnsol::image_data<SPI, PP>;
		using output_data = dcnnsol::image_data<SPO, PP>;

		using height_in_tag = typename SPI::height_tag;
		using width_in_tag = typename SPI::width_tag;
		using channel_tag = typename SPI::channel_tag;

		using height_out_tag = typename SPO::height_tag;
		using width_out_tag = typename SPO::width_tag;

		static_assert(tagged::same_tag<channel_tag, typename SPO::channel_tag>);

		inline static constexpr auto hir = SPI::hr;
		inline static constexpr auto wir = SPI::wr;
		inline static constexpr auto cr = SPI::cr;

		using maxpool_height_tag = maxpool_height_stag< KH>;
		using maxpool_width_tag = maxpool_width_stag< KW>;

		inline static constexpr tagged::range_class< maxpool_height_tag> khr{ KH };
		inline static constexpr tagged::range_class< maxpool_width_tag> kwr{ KW };

		inline static constexpr auto hor = SPO::hr;
		inline static constexpr auto wor = SPO::wr;

		inline static constexpr maxpool_koi_map_functor<tagged::selector< maxpool_height_tag>, tagged::selector<height_out_tag>, tagged::selector<height_in_tag>, KH> hkoimf{};
		inline static constexpr maxpool_koi_map_functor<tagged::selector< maxpool_width_tag>, tagged::selector<width_out_tag>, tagged::selector<width_in_tag>, KW> wkoimf{};

		static tagged::range_class<batch_tag> forward_check(const input_data& ind, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_in_tag>() == hir);
			static_assert(inr.template get<width_in_tag>() == wir);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(outr.template get<height_out_tag>() == hor);
			static_assert(outr.template get<width_out_tag>() == wor);
			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & khr & kwr & hor & wor & cr).size();
		}
		/// @endcond
	};

	template< typename SPI, typename CSPO, is_policy PP>
	struct final_maxpool_layer_base 
	{
	private:
		using CSPI = typename SPI::channel_policy;

		static_assert(CSPI::cr == CSPO::cr);
	public:
		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::image_data<SPI, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::feature_data<CSPO, PP>;

		///  @}

		/// @name Dimension tags
		/// @{

		using height_in_tag = typename SPI::height_tag;	///< Input image height
		using width_in_tag = typename SPI::width_tag;	///< Input image width
		using channel_tag = typename SPI::channel_tag;	///< Input image channel

		/// @}

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto hir = SPI::hr;	///< Input image height range
		inline static constexpr auto wir = SPI::wr;	///< Input image width range
		inline static constexpr auto cr = SPI::cr;	///< Input image channel range

		/// @}

		inline static constexpr std::size_t fanin = hir.size() * wir.size();	///< Number of inputs for each output element

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="wtd">Weights</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<height_in_tag>() == hir);
			static_assert(inr.template get<width_in_tag>() == wir);
			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity(const batch_range& br)
		{
			return (br & hir & wir & cr).size();
		}
		/// @endcond
	};

	/// @}

	/// @addtogroup sizing
	/// 
	/// @{

	/// <summary>
	/// @brief Retag input dimension policy as kernel dimension policy
	/// 
	/// The tags and ranges in the resulting policy have different names and types but the same sizes.
	/// </summary>
	/// <typeparam name="CSP"></typeparam>
	template< typename CSP>
	struct as_kernel
	{
		using kernel_height_tag = tagged::retag< dcnnasgn::kernel_height_selector, typename CSP::height_tag>;
		using kernel_width_tag = tagged::retag< dcnnasgn::kernel_width_selector, typename CSP::width_tag>;

		inline static constexpr auto khr = CSP::hr.template retag< kernel_height_tag>();
		inline static constexpr auto kwr = CSP::wr.template retag< kernel_width_tag>();
	};

	/// @}

	/// @addtogroup functors
	/// 
	/// @{

	/// <summary>
	/// Functor to cast input to kernel indexes (without any change in value).
	/// </summary>
	/// <typeparam name="TI">Input tag</typeparam>
	/// <typeparam name="TK">Output tag</typeparam>
	template< tagged::tag TI, tagged::tag TK>
	struct aggregate_ik_map_functor {
		tagged::index_class<TK> operator()(const tagged::index_class<TI>& i) const
		{
			return i.template retag<TK>();
		}
	};

	/// @}

	/// @addtogroup base
	/// 
	/// @{

	/// <summary>
	/// Utility base class for the fully connected layer
	/// </summary>
	/// <typeparam name="SPI">Input size policy</typeparam>
	/// <typeparam name="CSPO">Output channel policy</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< typename CSPI, typename CSPO, is_policy PP>
	struct feature_conv_layer_base
	{
	public:
		/// @name Data classes
		/// @{

		/// <summary>
		/// Input activations
		/// </summary>
		using input_data = dcnnsol::feature_data<CSPI, PP>;
		/// <summary>
		/// Model weights
		/// </summary>
		using weights = dcnnsol::feature_weights< CSPI, CSPO, PP>;
		/// <summary>
		/// Output activations
		/// </summary>
		using output_data = dcnnsol::feature_data<CSPO, PP>;

		///  @}

		/// @name Dimension tags
		/// @{

		using channel_in_tag = typename CSPI::channel_tag;	///< Input feature channel

		using channel_out_tag = typename CSPO::channel_tag;	///< Output feature channel

		/// @}

		/// @name Dimension ranges
		/// 
		/// Each dimension range allows enumeration of all indexes in that dimension,
		/// using the \c for(:) loop
		/// @{

		inline static constexpr auto cir = CSPI::cr;	///< Input feature channel range
		inline static constexpr auto cor = CSPO::cr;	///< Output feature channel range

		/// @}

		inline static constexpr std::size_t fanin = cir.size();	///< Number of inputs for each output element

		/// @name Check functions
		/// @{

		/// <summary>
		/// Check argument compatibility for the \c forward function
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="wtd">Weights</param>
		/// <param name="outd">Output activations</param>
		/// <returns>The minibatch range</returns>
		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const weights& wtd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& wtv = wtd.weights;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& wtr = wtv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<channel_in_tag>() == cir);

			static_assert(wtr.template get< tagged::co<channel_in_tag>>() == ~cir);
			static_assert(wtr.template get<channel_out_tag>() == cor);

			static_assert(outr.template get<channel_out_tag>() == cor);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity(const batch_range& br)
		{
			return (br & ~cir & cor).size();
		}
		/// @endcond
	};

	template< typename CSP, is_policy PP>
	struct feature_shift_layer_base : CSP {
		using input_data = dcnnsol::feature_data<CSP, PP>;
		using bias_data = dcnnsol::feature_bias<CSP, PP>;
		using output_data = dcnnsol::feature_data<CSP, PP>;

		using typename CSP::channel_tag;

		using CSP::cr;

		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const bias_data& cd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& betav = cd.betas;
			auto&& outv = outd.values;

			auto&& inr = inv.range();
			auto&& betar = betav.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<channel_tag>() == cr);

			static_assert(betar.template get<channel_tag>() == cr);

			static_assert(outr.template get<channel_tag>() == cr);

			assert(outr.template get<batch_tag>() == br);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & cr).size();
		}
		/// @endcond
	};

	template< typename CSP, is_policy PP>
	struct loss_layer_base
	{
		using input_data = dcnnsol::feature_data<CSP, PP>;
		using output_data = loss_data;

		using channel_tag = typename CSP::channel_tag;

		inline static constexpr auto cr = CSP::cr;

		static tagged::range_class<batch_tag> forward_check(const input_data& ind, const gold_data& gd, output_data& outd)
		{
			auto&& inv = ind.values;
			auto&& labelv = gd.labels;
			auto&& outv = outd.loss;

			auto&& inr = inv.range();
			auto&& labelr = labelv.range();
			auto&& outr = outv.range();

			auto&& br = inr.template get<batch_tag>();

			static_assert(inr.template get<channel_tag>() == cr);

			assert(labelr.template get<batch_tag>() == br); sink(labelr);

			assert(outr.template get<batch_tag>() == br); sink(outr);

			return br;
		}

		/// @cond INTERNAL
		static std::size_t forward_complexity( const batch_range & br)
		{
			return (br & cr).size();
		}
		/// @endcond
	};
	/// @}

	/// <summary>
	/// The loss layer
	/// 
	/// The loss function is the sum of square differences between network output and ground truth.
	/// </summary>
	/// <typeparam name="CSP">Channel size policy</typeparam>
	template< typename CSP, is_policy PP>
	struct loss_layer
		: loss_layer_base< CSP, PP>
	{
	private:
		using base_ = loss_layer_base< CSP, PP>;

		using typename base_::input_data;
		using typename base_::output_data;

		using base_::cr;

		using base_::forward_check;
	public:
		/// <summary>
		/// The forward-propagation function of the loss layer
		/// </summary>
		/// <param name="ind">Input activations</param>
		/// <param name="gd">Ground-truth activations</param>
		/// <param name="outd">The loss</param>
		static void forward(const input_data& ind, const gold_data& gd, output_data& outd)
		{
			auto br = forward_check(ind, gd, outd);

			auto&& inv = ind.values;
			auto&& labelv = gd.labels;
			auto&& outv = outd.loss;

			for (auto b : br)
			{
				auto label = labelv[b];
				float maxv = std::numeric_limits<float>::lowest();
				tagged::index_class<channel_selector> maxc;
				for (auto c : cr)
				{
					auto v = inv[b & c];
					if (v > maxv)
					{
						maxv = v;
						maxc = c;
					}
				}
				auto loss = maxc.value() == label ? 1.0f : 0.0f;

				outv[b] = loss;
			}
		}
	};

	using feature_ftl = tagged::tag_list<channel_selector>;
	using feature_conv_ftl = tagged::tag_list<channel_selector, tagged::co<channel_selector>>;
	using image_conv_ftl = tagged::tag_list<channel_selector, tagged::co<channel_selector>, kernel_height_selector, kernel_width_selector>;
}

#endif
