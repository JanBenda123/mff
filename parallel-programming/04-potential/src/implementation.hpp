#include <sycl/sycl.hpp>
#ifndef SYCL_POTENTIAL_SERIAL_IMPLEMENTATION_HPP
#define SYCL_POTENTIAL_SERIAL_IMPLEMENTATION_HPP

#include <interface.hpp>
#include <data.hpp>
#include <serial.hpp>

#include <memory>

/*
 * Final implementation of the tested program.
 */
template <typename F = float, typename IDX_T = std::uint32_t, typename LEN_T = std::uint32_t>
class ProgramPotential : public IProgramPotential<F, IDX_T, LEN_T>
{
public:
	typedef F coord_t;		// Type of point coordinates.
	typedef coord_t real_t; // Type of additional float parameters.
	typedef IDX_T index_t;
	typedef LEN_T length_t;
	typedef Point<coord_t> point_t;
	typedef Edge<index_t> edge_t;
	typedef SerialSimulator<coord_t, index_t, length_t> simulator_t;

private:
	sycl::queue computeQueue{sycl::default_selector_v};
	struct EdgeLength
	{
		index_t p;
		real_t invl;
		EdgeLength() = default;
		EdgeLength(index_t p_, real_t invl_) : p(p_), invl(invl_) {}
	};

	std::vector<point_t> velocities;

	std::unique_ptr<sycl::buffer<point_t>> pointsBuf;
	std::unique_ptr<sycl::buffer<point_t>> velocitiesBuf;
	std::unique_ptr<sycl::buffer<EdgeLength>> neighFlatBuf;
	std::unique_ptr<sycl::buffer<size_t>> neighOffsetBuf;
	index_t current_iteration;
	index_t total_iterations;
	std::vector<EdgeLength> neighbors_flat;
	std::vector<size_t> neighbors_offset;

	void initializeNeighbors(index_t points, const std::vector<edge_t> &edges, const std::vector<length_t> &lengths, index_t iterations)
	{
		std::vector<std::vector<EdgeLength>> edgeLengths(points);
		for (size_t e = 0; e < edges.size(); e++)
		{
			edgeLengths[edges[e].p1].emplace_back(edges[e].p2, 1.0 / lengths[e]);
			edgeLengths[edges[e].p2].emplace_back(edges[e].p1, 1.0 / lengths[e]);
		}

		neighbors_flat.reserve(2 * edges.size());

		neighbors_offset.reserve(points + 1);

		size_t total = 0;
		neighbors_offset.push_back(0);

		for (const auto &row : edgeLengths)
		{
			total += row.size();
			neighbors_offset.push_back(total);
			neighbors_flat.insert(neighbors_flat.end(), row.begin(), row.end());
		}

		neighFlatBuf = std::make_unique<sycl::buffer<EdgeLength>>(neighbors_flat.data(), sycl::range<1>(neighbors_flat.size()));
		neighOffsetBuf = std::make_unique<sycl::buffer<size_t>>(neighbors_offset.data(), sycl::range<1>(neighbors_offset.size()));
	}

public:
	virtual void initialize(index_t points, const std::vector<edge_t> &edges, const std::vector<length_t> &lengths, index_t iterations) override
	{
		velocities = std::vector<point_t>(points, point_t{0.0, 0.0});
		velocitiesBuf = std::make_unique<sycl::buffer<point_t>>(velocities.data(), sycl::range<1>(points));

		initializeNeighbors(points, edges, lengths, iterations);

		current_iteration = 0;
		total_iterations = iterations;
	}

	virtual void iteration(std::vector<point_t> &points) override
	{
		current_iteration++;
		const size_t N = points.size();

		if (!pointsBuf)
			pointsBuf = std::make_unique<sycl::buffer<point_t>>(points.data(), sycl::range<1>(N));

		computeQueue.submit([&](sycl::handler &h)
							{
			auto pAcc = pointsBuf->template  get_access<sycl::access::mode::read_write>(h);
			auto vAcc = velocitiesBuf->template  get_access<sycl::access::mode::read_write>(h);
			auto neighFlatAcc = neighFlatBuf->template  get_access<sycl::access::mode::read>(h);
			auto neighOffsetAcc = neighOffsetBuf->template get_access<sycl::access::mode::read>(h);
			
			auto params = this->mParams;
			h.parallel_for(sycl::range<1>(N), [=](sycl::id<1> i) {
				sycl::vec<real_t, 2> force(0.0, 0.0);
				point_t self = pAcc[i];

				//edge interactions
				for(index_t j = neighOffsetAcc[i]; j <neighOffsetAcc[i+1];j++){
					EdgeLength el = neighFlatAcc[j];
					point_t other = pAcc[el.p];

					sycl::vec<real_t, 2> dr(static_cast<real_t>(other.x) - static_cast<real_t>(self.x), static_cast<real_t>(other.y) - static_cast<real_t>(self.y));
					real_t dist2 = dr.x()*dr.x()+ dr.y()*dr.y();
					real_t invdist = sycl::rsqrt(dist2);

					dr*=invdist;

					
					force += dist2 * params.edgeCompulsion*el.invl * dr;
				}
				
				//vertex interactions
				for(index_t j = 0; j < N;j++){
					if (i==j) continue;

					point_t other = pAcc[j];
					sycl::vec<real_t, 2> dr(static_cast<real_t>(other.x) - static_cast<real_t>(self.x), static_cast<real_t>(other.y) - static_cast<real_t>(self.y));
					real_t dist2 = dr.x()*dr.x()+ dr.y()*dr.y();
					dist2 = (dist2 > (real_t)0.0001 ? dist2 :(real_t)0.0001);
					real_t invdist = sycl::rsqrt(dist2);


					force-=params.vertexRepulsion*(invdist*invdist*invdist)*dr;
				}
				
				real_t fact = params.timeQuantum/params.vertexMass;
				force*=fact;
				vAcc[i].x = (vAcc[i].x + force.x())*params.slowdown;
				vAcc[i].y = (vAcc[i].y + force.y())*params.slowdown;

			}); })
			.wait();

		computeQueue.submit([&](sycl::handler &h)
							{
			auto pAcc = pointsBuf->template  get_access<sycl::access::mode::read_write>(h);
			auto vAcc = velocitiesBuf->template  get_access<sycl::access::mode::read>(h);

			auto params = this->mParams;
			h.parallel_for(sycl::range<1>(N), [=](sycl::id<1> i) {
				pAcc[i].x += vAcc[i].x * params.timeQuantum;
				pAcc[i].y += vAcc[i].y * params.timeQuantum;

			}); })
			.wait();

		computeQueue.submit([&](sycl::handler &h)
							{
				auto acc = pointsBuf->template get_access<sycl::access::mode::read>(h);
				h.copy(acc, points.data()); })
			.wait();
	}

	virtual void getVelocities(std::vector<point_t> &velocities) override
	{
		if (!velocitiesBuf)
			return;

		const size_t N = velocitiesBuf->get_range()[0];

		velocities.resize(N);

		sycl::host_accessor acc(*velocitiesBuf, sycl::read_only);

		for (size_t i = 0; i < N; ++i)
		{
			velocities[i] = acc[i];
		}
	}
};

#endif
