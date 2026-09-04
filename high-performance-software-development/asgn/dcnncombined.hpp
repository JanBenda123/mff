#ifndef dcnncombined_hpp_
#define dcnncombined_hpp_

#include "dcnnelements.hpp"
#include "dcnnbinfile.hpp"

/// @cond INTERNAL
namespace dcnnsol {
	template< typename SPI, typename SPO, typename KSP, is_policy PP>
	struct nonstrided_conv_layer;

	template< typename SPI, typename SPO, typename KSP, is_policy PP>
	struct strided_conv_layer;

	template< typename SP, is_policy PP>
	struct image_normalize_layer;

	template< typename SP, is_policy PP>
	struct image_multiply_layer;

	template< typename SP, is_policy PP>
	struct image_shift_layer;

	template< typename SP, is_policy PP>
	struct image_relu_layer;

	template< typename SPI, typename SPO, is_policy PP>
	struct image_maxpool_layer;

	template< typename SPI, typename CSPO, is_policy PP>
	struct final_maxpool_layer;

	template< typename CSPI, typename CSPO, is_policy PP>
	struct feature_conv_layer;

	template< typename CSP, is_policy PP>
	struct feature_shift_layer;
}
/// @endcond

namespace dcnnasgn {

	/// @addtogroup config 
	/// 
	/// @{

	/// <summary>
	/// Number of categories (digits)
	/// </summary>
	inline constexpr std::size_t LABELS = 1000;

	/// <summary>
	/// Policy: Input image size
	/// </summary>
	struct xxxl_image_policy : image_size_policy< 224, 224> {};
	/// <summary>
	/// Policy: Image after the first strided convolution layer (00)
	/// </summary>
	struct xxl_image_policy : image_size_policy< 112, 112> {};
	/// <summary>
	/// Policy: Image after the second strided convolution layer (04)
	/// </summary>
	struct xl_image_policy : image_size_policy< 56, 56> {};
	/// <summary>
	/// Policy: Image after the third strided convolution layer (12)
	/// </summary>
	struct l_image_policy : image_size_policy< 28, 28> {};
	/// <summary>
	/// Policy: Image after the first MaxPool layer (24)
	/// </summary>
	struct m_image_policy : image_size_policy< 14, 14> {};
	/// <summary>
	/// Policy: Image after the second MaxPool layer (42)
	/// </summary>
	struct s_image_policy : image_size_policy< 7, 7> {};

	/// <summary>
	/// Policy: Input image channels
	/// </summary>
	struct monochrome_channel_policy : channel_size_policy<1> {};
	/// <summary>
	/// Policy: Input image channels
	/// </summary>
	struct rgb_channel_policy : channel_size_policy<3> {};
	/// <summary>
	/// Policy: Internal activation channels
	/// </summary>
	struct e_channel_policy : channel_size_policy<32> {};
	/// <summary>
	/// Policy: Internal activation channels
	/// </summary>
	struct f_channel_policy : channel_size_policy<64> {};
	/// <summary>
	/// Policy: Internal activation channels
	/// </summary>
	struct g_channel_policy : channel_size_policy<128> {};
	/// <summary>
	/// Policy: Internal activation channels
	/// </summary>
	struct h_channel_policy : channel_size_policy<256> {};
	/// <summary>
	/// Policy: Internal activation channels
	/// </summary>
	struct j_channel_policy : channel_size_policy<1024> {};
	/// <summary>
	/// Policy: Final linear layer channels
	/// </summary>
	struct labels_channel_policy : channel_size_policy<LABELS> {};

	/// <summary>
	/// Policy: Convolution kernel size
	/// </summary>
	struct standard_kernel_policy : conv_kernel_size_policy< 3, 3> {};

	struct no_kernel_policy : conv_kernel_size_policy< 1, 1> {};
	/// @}

	/// @addtogroup config
	/// 
	/// @{

	using idp = input_data_policy< xxxl_image_policy, rgb_channel_policy>;

	struct first_data_policy : image_data_size_policy< xxxl_image_policy, rgb_channel_policy> {};
	struct xxl_e_data_policy : image_data_size_policy< xxl_image_policy, e_channel_policy> {};
	struct xl_f_data_policy : image_data_size_policy< xl_image_policy, f_channel_policy> {};
	struct l_f_data_policy : image_data_size_policy< l_image_policy, f_channel_policy> {};
	struct m_f_data_policy : image_data_size_policy< m_image_policy, f_channel_policy> {};
	struct m_g_data_policy : image_data_size_policy< m_image_policy, g_channel_policy> {};
	struct m_h_data_policy : image_data_size_policy< m_image_policy, h_channel_policy> {};
	struct s_h_data_policy : image_data_size_policy< s_image_policy, h_channel_policy> {};
	struct s_j_data_policy : image_data_size_policy< s_image_policy, j_channel_policy> {};
	struct s_g_data_policy : image_data_size_policy< s_image_policy, g_channel_policy> {};

	/// @}

	/// @addtogroup network 
	/// 
	/// @{

	/// <summary>
	/// Policy: The complete network
	/// 
	/// Initial normalization, two pairs of complete layers followed by MaxPool layers, 
	/// the final aggregate and linear layers, and the loss layer.
	/// </summary>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< is_policy PP>
	struct combined_policy
	{
		using layer_00 = dcnnsol::complete_cnn_layer< first_data_policy, xxl_e_data_policy, standard_kernel_policy, PP>;
		using layer_04 = dcnnsol::complete_cnn_layer< xxl_e_data_policy, xl_f_data_policy, standard_kernel_policy, PP>;
		using layer_08 = dcnnsol::complete_cnn_layer< xl_f_data_policy, xl_f_data_policy, standard_kernel_policy, PP>;
		using layer_12 = dcnnsol::complete_cnn_layer< xl_f_data_policy, l_f_data_policy, standard_kernel_policy, PP>;
		using layer_16 = dcnnsol::complete_cnn_layer< l_f_data_policy, l_f_data_policy, standard_kernel_policy, PP>;
		using layer_20 = dcnnsol::complete_cnn_layer< l_f_data_policy, l_f_data_policy, standard_kernel_policy, PP>;
		using layer_24_p = dcnnsol::image_maxpool_layer< l_f_data_policy, m_f_data_policy, PP>;
		using layer_26 = dcnnsol::complete_cnn_layer< m_f_data_policy, m_g_data_policy, standard_kernel_policy, PP>;
		using layer_30 = dcnnsol::complete_cnn_layer< m_g_data_policy, m_g_data_policy, standard_kernel_policy, PP>;
		using layer_34 = dcnnsol::complete_cnn_layer< m_g_data_policy, m_g_data_policy, standard_kernel_policy, PP>;
		using layer_38 = dcnnsol::complete_cnn_layer< m_g_data_policy, m_h_data_policy, standard_kernel_policy, PP>;
		using layer_42_p = dcnnsol::image_maxpool_layer< m_h_data_policy, s_h_data_policy, PP>;
		using layer_44 = dcnnsol::complete_cnn_layer< s_h_data_policy, s_j_data_policy, no_kernel_policy, PP>;
		using layer_48 = dcnnsol::complete_cnn_layer< s_j_data_policy, s_g_data_policy, no_kernel_policy, PP>;
		using layer_52 = dcnnsol::complete_cnn_layer< s_g_data_policy, s_g_data_policy, standard_kernel_policy, PP>;
		using layer_final_p = dcnnsol::final_maxpool_layer< s_g_data_policy, g_channel_policy, PP>;
		using layer_class_c = dcnnsol::feature_conv_layer< g_channel_policy, labels_channel_policy, PP>;
		using layer_class_b = dcnnsol::feature_shift_layer< labels_channel_policy, PP>;
		using loss = loss_layer<labels_channel_policy, PP>;
	};

	/// <summary>
	/// Model data (weights and biases) of the complete network
	/// </summary>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< is_policy PP>
	class combined_model {
	public:
		using policy = combined_policy< PP>;

		using model_00 = typename policy::layer_00::model;
		using model_04 = typename policy::layer_04::model;
		using model_08 = typename policy::layer_08::model;
		using model_12 = typename policy::layer_12::model;
		using model_16 = typename policy::layer_16::model;
		using model_20 = typename policy::layer_20::model;
		using model_26 = typename policy::layer_26::model;
		using model_30 = typename policy::layer_30::model;
		using model_34 = typename policy::layer_34::model;
		using model_38 = typename policy::layer_38::model;
		using model_44 = typename policy::layer_44::model;
		using model_48 = typename policy::layer_48::model;
		using model_52 = typename policy::layer_52::model;
		using model_class_c = dcnnsol::feature_weights< g_channel_policy, labels_channel_policy, PP>;
		using model_class_b = dcnnsol::feature_bias< labels_channel_policy, PP>;

		model_00 m_00;
		model_04 m_04;
		model_08 m_08;
		model_12 m_12;
		model_16 m_16;
		model_20 m_20;
		model_26 m_26;
		model_30 m_30;
		model_34 m_34;
		model_38 m_38;
		model_44 m_44;
		model_48 m_48;
		model_52 m_52;
		model_class_c m_class_c;
		model_class_b m_class_b;
	};

	/// <summary>
	/// Input data, forward-propagated activations, and loss of the complete network
	/// </summary>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< is_policy PP>
	class combined_data {
	public:
		using policy = combined_policy< PP>;

		using data_input = dcnnsol::image_data< first_data_policy, PP>;
		using internal_00 = typename policy::layer_00::internal_data;
		using data_00r = dcnnsol::image_data< xxl_e_data_policy, PP>;
		using internal_04 = typename policy::layer_04::internal_data;
		using data_04r = dcnnsol::image_data< xl_f_data_policy, PP>;
		using internal_08 = typename policy::layer_08::internal_data;
		using data_08r = dcnnsol::image_data< xl_f_data_policy, PP>;
		using internal_12 = typename policy::layer_12::internal_data;
		using data_12r = dcnnsol::image_data< l_f_data_policy, PP>;
		using internal_16 = typename policy::layer_16::internal_data;
		using data_16r = dcnnsol::image_data< l_f_data_policy, PP>;
		using internal_20 = typename policy::layer_20::internal_data;
		using data_20r = dcnnsol::image_data< l_f_data_policy, PP>;
		using data_24_p = dcnnsol::image_data< m_f_data_policy, PP>;
		using internal_26 = typename policy::layer_26::internal_data;
		using data_26r = typename policy::layer_26::output_data;
		using internal_30 = typename policy::layer_30::internal_data;
		using data_30r = typename policy::layer_30::output_data;
		using internal_34 = typename policy::layer_34::internal_data;
		using data_34r = typename policy::layer_34::output_data;
		using internal_38 = typename policy::layer_38::internal_data;
		using data_38r = dcnnsol::image_data< m_h_data_policy, PP>;
		using data_42_p = dcnnsol::image_data< s_h_data_policy, PP>;
		using internal_44 = typename policy::layer_44::internal_data;
		using data_44r = dcnnsol::image_data< s_j_data_policy, PP>;
		using internal_48 = typename policy::layer_48::internal_data;
		using data_48r = dcnnsol::image_data< s_g_data_policy, PP>;
		using internal_52 = typename policy::layer_52::internal_data;
		using data_52r = dcnnsol::image_data< s_g_data_policy, PP>;
		using data_final_p = dcnnsol::feature_data< g_channel_policy, PP>;
		using data_class_c = dcnnsol::feature_data< labels_channel_policy, PP>;
		using data_class_b = dcnnsol::feature_data< labels_channel_policy, PP>;

		gold_data g;
		data_input d_input;

		data_00r d_00r;
		data_04r d_04r;
		data_08r d_08r;
		data_12r d_12r;
		data_16r d_16r;
		data_20r d_20r;
		data_24_p d_24_p;
		data_26r d_26r;
		data_30r d_30r;
		data_34r d_34r;
		data_38r d_38r;
		data_42_p d_42_p;
		data_44r d_44r;
		data_48r d_48r;
		data_52r d_52r;
		data_final_p d_final_p;
		data_class_c d_class_c;
		data_class_b d_class_b;

		internal_00 i_00;
		internal_04 i_04;
		internal_08 i_08;
		internal_12 i_12;
		internal_16 i_16;
		internal_20 i_20;
		internal_26 i_26;
		internal_30 i_30;
		internal_34 i_34;
		internal_38 i_38;
		internal_44 i_44;
		internal_48 i_48;
		internal_52 i_52;

		loss_data d_loss;

		combined_data(const batch_range& br)
			: g(br),
			d_input(br),
			d_00r(br),
			d_04r(br),
			d_08r(br),
			d_12r(br),
			d_16r(br),
			d_20r(br),
			d_24_p(br),
			d_26r(br),
			d_30r(br),
			d_34r(br),
			d_38r(br),
			d_42_p(br),
			d_44r(br),
			d_48r(br),
			d_52r(br),
			d_final_p(br),
			d_class_c(br),
			d_class_b(br),
			i_00(br),
			i_04(br),
			i_08(br),
			i_12(br),
			i_16(br),
			i_20(br),
			i_26(br),
			i_30(br),
			i_34(br),
			i_38(br),
			i_44(br),
			i_48(br),
			i_52(br),
			d_loss(br)
		{
		}
	};

	using test_labels_t = tagged::tensor_class<gold_labels_policy::label_carrier, input_tag>;
	using test_images_t = idp::images_t;

	template< is_policy PP>
	inline void combined_print_stats(const combined_data< PP>& m, const batch_mapping& bmap, std::ostream& os)
	{
#ifdef PRINT_STATS_FULL
		auto prv = [&os](const std::string& n, auto&& x) {
			auto s = value_stats(x);
			os << " " << n << "(E=" << s.E << ",var=" << s.var << ")";
			};
		
		auto pri = [&os](const std::string& n, auto&& x) {
			auto sc = value_stats(x.c);
			auto sb = value_stats(x.b);
			auto sn = value_stats(x.n);
			auto sm = value_stats(x.m);
			auto ss = value_stats(x.s);
			os << " " << n << "c(E=" << sc.E << ",var=" << sc.var << ")";
			os << " " << n << "b(E=" << sb.E << ",var=" << sb.var << ")";
			os << " " << n << "n(E=" << sn.E << ",var=" << sn.var << ")";
			os << " " << n << "m(E=" << sm.E << ",var=" << sm.var << ")";
			os << " " << n << "s(E=" << ss.E << ",var=" << ss.var << ")";
			};

		auto prl = [&os](const std::string& n, auto&& x) {
			auto s = loss_stats(x);
			os << " " << n << "(E=" << s.E << ",var=" << s.var << ")";
			};

		prv("input", m.d_input);
		os << std::endl;
		pri("00", m.i_00);
		prv("00r", m.d_00r);
		os << std::endl;
		pri("04", m.i_04);
		prv("04r", m.d_04r);
		os << std::endl;
		pri("08", m.i_08);
		prv("08r", m.d_08r);
		os << std::endl;
		pri("12", m.i_12);
		prv("12r", m.d_12r);
		os << std::endl;
		pri("16", m.i_16);
		prv("16r", m.d_16r);
		os << std::endl;
		pri("20", m.i_20);
		prv("20r", m.d_20r);
		prv("24_p", m.d_24_p);
		os << std::endl;
		pri("26", m.i_26);
		prv("26r", m.d_26r);
		os << std::endl;
		pri("30", m.i_30);
		prv("30r", m.d_30r);
		os << std::endl;
		pri("34", m.i_34);
		prv("34r", m.d_34r);
		os << std::endl;
		pri("38", m.i_38);
		prv("38r", m.d_38r);
		prv("42_p", m.d_42_p);
		os << std::endl;
		pri("44", m.i_44);
		prv("44r", m.d_44r);
		os << std::endl;
		pri("48", m.i_48);
		prv("48r", m.d_48r);
		os << std::endl;
		pri("52", m.i_52);
		prv("52r", m.d_52r);
		os << std::endl;
		prv("final_p", m.d_final_p);
		prv("class_c", m.d_class_c);
		prv("class_b", m.d_class_b);
		prl("loss", m.d_loss);
		os << std::endl;
#endif
		auto r = m.d_class_b.values.range();
		for (auto i : r.template get<batch_tag>())
		{
			float maxv = std::numeric_limits<float>::lowest();
			tagged::index_class<channel_selector> maxj;
			for (auto j : r.template get<channel_selector>())
			{
				auto v = m.d_class_b.values[i & j];
				if (v > maxv)
				{
					maxv = v;
					maxj = j;
				}
			}
			tagged::index_class<channel_selector> goldj( m.g.labels[i]);
			os << " " << bmap[i] << ":" << maxj.value() << "(" << maxv << ")" << (maxj == goldj ? "==" : "<>") << goldj << "(" << m.d_class_b.values[i & goldj] << ")";
		}
		os << std::endl;
	}

	template< is_policy PP>
	inline void combined_load_model(combined_model< PP>& m, const std::filesystem::path& data_folder)
	{
		using policy = combined_policy< PP>;

		policy::layer_00::load_model(m.m_00, data_folder, 0);
		policy::layer_04::load_model(m.m_04, data_folder, 4);
		policy::layer_08::load_model(m.m_08, data_folder, 8);
		policy::layer_12::load_model(m.m_12, data_folder, 12);
		policy::layer_16::load_model(m.m_16, data_folder, 16);
		policy::layer_20::load_model(m.m_20, data_folder, 20);
		policy::layer_26::load_model(m.m_26, data_folder, 26);
		policy::layer_30::load_model(m.m_30, data_folder, 30);
		policy::layer_34::load_model(m.m_34, data_folder, 34);
		policy::layer_38::load_model(m.m_38, data_folder, 38);
		policy::layer_44::load_model(m.m_44, data_folder, 44);
		policy::layer_48::load_model(m.m_48, data_folder, 48);
		policy::layer_52::load_model(m.m_52, data_folder, 52);
		policy::layer_class_c::load_model(m.m_class_c, data_folder, "classifier.weight");
		policy::layer_class_b::load_model(m.m_class_b, data_folder, "classifier.bias");
	}

	/// <summary>
	/// The forward-propagation function of the complete network
	/// 
	/// Includes creation of a minibatch by 
	/// selection of the specified input images from the training dataset
	/// </summary>
	/// <typeparam name="mapping">Input selection mapping</typeparam>
	/// <typeparam name="PP">Permutation policy</typeparam>
	/// <param name="train_images">Training image dataset</param>
	/// <param name="train_labels">Ground-truth dataset</param>
	/// <param name="bmap">Input selection mapping</param>
	/// <param name="m">Network model data</param>
	/// <param name="d">Forward-propagation data</param>
	/// <returns>Total loss over the minibatch</returns>
	template< typename mapping, is_policy PP>
	inline float combined_forward(const test_images_t& test_images, const test_labels_t& test_labels, mapping&& bmap, const combined_model< PP>& m, combined_data< PP>& d)
	{
		using policy = combined_policy< PP>;
		using bi = batch_initializer<xxxl_image_policy, rgb_channel_policy, first_data_policy, PP>;

		d.g.init(test_labels, bmap);
		bi::init(test_images, bmap, d.d_input);

		policy::layer_00::forward(d.d_input, m.m_00, d.i_00, d.d_00r);

		policy::layer_04::forward(d.d_00r, m.m_04, d.i_04, d.d_04r);

		policy::layer_08::forward(d.d_04r, m.m_08, d.i_08, d.d_08r);

		policy::layer_12::forward(d.d_08r, m.m_12, d.i_12, d.d_12r);

		policy::layer_16::forward(d.d_12r, m.m_16, d.i_16, d.d_16r);

		policy::layer_20::forward(d.d_16r, m.m_20, d.i_20, d.d_20r);
		policy::layer_24_p::forward(d.d_20r, d.d_24_p);

		policy::layer_26::forward(d.d_24_p, m.m_26, d.i_26, d.d_26r);

		policy::layer_30::forward(d.d_26r, m.m_30, d.i_30, d.d_30r);

		policy::layer_34::forward(d.d_30r, m.m_34, d.i_34, d.d_34r);

		policy::layer_38::forward(d.d_34r, m.m_38, d.i_38, d.d_38r);
		policy::layer_42_p::forward(d.d_38r, d.d_42_p);

		policy::layer_44::forward(d.d_42_p, m.m_44, d.i_44, d.d_44r);

		policy::layer_48::forward(d.d_44r, m.m_48, d.i_48, d.d_48r);

		policy::layer_52::forward(d.d_48r, m.m_52, d.i_52, d.d_52r);

		policy::layer_final_p::forward(d.d_52r, d.d_final_p);
		policy::layer_class_c::forward(d.d_final_p, m.m_class_c, d.d_class_c);
		policy::layer_class_b::forward(d.d_class_c, m.m_class_b, d.d_class_b);

		policy::loss::forward(d.d_class_b, d.g, d.d_loss);

		float total_loss = 0.0f;
		for (auto x : d.d_loss.loss.range())
		{
			total_loss += d.d_loss.loss[x];
		}

		return total_loss;
	}

	/// @cond INTERNAL
	template< is_policy PP>
	inline std::size_t combined_forward_complexity(const batch_range& br)
	{
		using policy = combined_policy< PP>;
		std::size_t s = 0;

		s += policy::layer_00::forward_complexity(br);

		s += policy::layer_04::forward_complexity(br);

		s += policy::layer_08::forward_complexity(br);

		s += policy::layer_12::forward_complexity(br);

		s += policy::layer_16::forward_complexity(br);

		s += policy::layer_20::forward_complexity(br);
		s += policy::layer_24_p::forward_complexity(br);

		s += policy::layer_26::forward_complexity(br);

		s += policy::layer_30::forward_complexity(br);

		s += policy::layer_34::forward_complexity(br);

		s += policy::layer_38::forward_complexity(br);
		s += policy::layer_42_p::forward_complexity(br);

		s += policy::layer_44::forward_complexity(br);

		s += policy::layer_48::forward_complexity(br);

		s += policy::layer_52::forward_complexity(br);

		s += policy::layer_final_p::forward_complexity(br);
		s += policy::layer_class_c::forward_complexity(br);
		s += policy::layer_class_b::forward_complexity(br);

		s += policy::loss::forward_complexity(br);

		return s;
	}
	/// @endcond

	/// @}

	/// @addtogroup execution 
	/// 
	/// @{

	/// <summary>
	/// The global state, shared by all threads
	/// 
	/// Includes the testing dataset, network model and meta-parameters
	/// </summary>
	/// <typeparam name="PP">Permutation policy</typeparam>
	template< is_policy PP>
	class global_state {
	public:
		test_labels_t test_labels;
		test_images_t test_images;
		combined_model<PP> m;
		batch_range br;

		global_state(std::size_t batch_size)
			: br(batch_size)
		{
		}

		void read_data(const std::filesystem::path& data_folder)
		{
			load_data_raw_auto(test_images, data_folder / "input.bin");
			load_data_raw_auto(test_labels, data_folder / "input-class.bin");

			if (test_images.range().get<input_tag>() != test_labels.range().get<input_tag>())
				throw std::runtime_error("Input data size mismatch");
		}

		void init(std::mt19937_64& eng)
		{
		}

		void load_model(const std::filesystem::path& data_folder)
		{
			combined_load_model<PP>(m, data_folder);
		}

		std::size_t input_size() const
		{
			return test_labels.range().size();
		}
	};

	/// <summary>
	/// The thread-related state
	/// 
	/// Includes network state related to a minibatch
	/// </summary>
	/// <typeparam name="PP"></typeparam>
	template< is_policy PP>
	class thread_state {
	public:
		batch_mapping bmap;
		combined_data<PP> d;
		float loss;

		thread_state(const global_state<PP>& gs)
			: bmap(gs.br), d(gs.br), loss(0.0f)
		{
		}

		template< typename IIG>
		void minibatch_init(IIG&& input_index_generator)
		{
			for (auto b : bmap.range())
			{
				auto i = input_index_generator();
				bmap[b] = i;
			}
		}

		void minibatch_run(const global_state<PP>& gs)
		{
			loss = combined_forward(gs.test_images, gs.test_labels, bmap, gs.m, d);
		}

		void minibatch_collect(global_state<PP>& gs)
		{
		}

		std::size_t minibatch_run_complexity(const global_state<PP>&)
		{
			auto fc = combined_forward_complexity<PP>(bmap.range());
			return fc;
		}

	};
	/// @}
}

#endif
