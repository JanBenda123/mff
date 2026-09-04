#ifndef LEVENSHTEIN_IMPLEMENTATION_HPP
#define LEVENSHTEIN_IMPLEMENTATION_HPP

#include <iostream>
#include <array>

template <typename T>
class LevenshteinMatrix
{
public:
	LevenshteinMatrix(size_t rows, size_t cols)
		: rows_(rows), cols_(cols), data_(rows * cols) {}

	T &operator()(size_t row, size_t col)
	{
		return data_[row * cols_ + col];
	}

	void print()
	{

		for (std::size_t i = 0; i < (rows_) * (cols_); i++)
		{
			std::size_t col = i % (cols_);
			if (col == 0)
				std::cout << '\n';
			if (data_[i] >= 10)
				std::cout << data_[i] << ' ';
			else
				std::cout << data_[i] << "  ";
		}
		std::cout << '\n';
	}

private:
	size_t rows_, cols_;
	std::vector<T> data_;
};

template <typename T, std::size_t BLOCK_SIZE>
class IntermediateResults
{
public:
	IntermediateResults(std::size_t block_count_x, std::size_t block_count_y)
		: left_boundaries(block_count_y),
		  upper_boundaries(block_count_x),
		  upper_left_corners(block_count_x),
		  lower_left_corners(block_count_x),
		  lower_right_corners(block_count_x) {}
	void print()
	{

		std::cout << '\n';
		for (std::size_t block_x = 0; block_x < upper_boundaries.size(); block_x++)
		{
			std::array<T, BLOCK_SIZE> arr = upper_boundaries[block_x];
			for (std::size_t x = 0; x < BLOCK_SIZE; x++)
			{
				std::cout << arr[x] << (arr[x] >= 10 ? " " : "  ");
			}
		}
		for (std::size_t block_y = 0; block_y < left_boundaries.size(); block_y++)
		{
			std::array<T, BLOCK_SIZE> arr = left_boundaries[block_y];
			for (std::size_t y = 0; y < BLOCK_SIZE; y++)
			{
				std::cout << '\n'
						  << arr[y];
			}
		}
		std::cout << '\n';
	}
	std::vector<std::array<T, BLOCK_SIZE>> left_boundaries;
	std::vector<std::array<T, BLOCK_SIZE>> upper_boundaries;
	std::vector<T> upper_left_corners;
	std::vector<T> lower_left_corners;
	std::vector<T> lower_right_corners;
};

template <typename C = char, typename DIST = std::size_t, bool DEBUG = false, std::size_t BLOCK_SIZE = 256>
class EditDistance : public IEditDistance<C, DIST, DEBUG>
{
private:
	LevenshteinMatrix<DIST> *lMatrix;
	IntermediateResults<DIST, BLOCK_SIZE> *intermediateResults;

	void compute_block(const std::vector<C> &str1, const std::vector<C> &str2, std::size_t block_x, std::size_t block_y)
	{
		std::size_t x_start = block_x * BLOCK_SIZE;
		std::size_t y_start = block_y * BLOCK_SIZE;

		std::array<DIST, BLOCK_SIZE> leftBoundary;
		if (block_x != 0)
			leftBoundary = intermediateResults->left_boundaries[block_y];

		std::array<DIST, BLOCK_SIZE> upperBoundary;
		if (block_y != 0)
			upperBoundary = intermediateResults->upper_boundaries[block_x];

		std::array<DIST, BLOCK_SIZE> rightBoundary;
		std::array<DIST, BLOCK_SIZE> lowerBoundary;

		DIST lastLine[BLOCK_SIZE];
		for (std::size_t y_rel = 0; y_rel < BLOCK_SIZE; y_rel++)
		{
			DIST upperLeft;
			DIST left;
			DIST upper;

			if (block_x == 0)
			{
				left = y_start + y_rel + 1;
				upperLeft = y_start + y_rel;
			}
			else
			{
				left = leftBoundary[y_rel];
				if (y_rel == 0)
				{
					if (block_y == 0)
						upperLeft = x_start;
					else
						upperLeft = intermediateResults->upper_left_corners[block_x];
				}
				else
					upperLeft = leftBoundary[y_rel - 1];
			}

			for (std::size_t x_rel = 0; x_rel < BLOCK_SIZE; x_rel++)
			{
				if (y_rel == 0 && block_y == 0) // upper edge of the matrix - generate the values
					upper = x_start + x_rel + 1;
				else if (y_rel == 0) // first block cycle - needs to load
					upper = upperBoundary[x_rel];
				else // reuse the local values
					upper = lastLine[x_rel];

				// calculate value
				DIST dist1 = std::min<DIST>(upper, left) + 1;
				DIST dist2 = upperLeft + (str1[x_start + x_rel] == str2[y_start + y_rel] ? 0 : 1);
				DIST result = std::min<DIST>(dist1, dist2);
				// save value and shift to right
				lastLine[x_rel] = result;
				left = result;
				upperLeft = upper;

				if constexpr (DEBUG)
					(*lMatrix)(y_start + y_rel, x_start + x_rel) = result; // botched implementation, no time for fixing it
				if (x_rel == BLOCK_SIZE - 1)
					rightBoundary[y_rel] = result;
				if (y_rel == BLOCK_SIZE - 1)
					lowerBoundary[x_rel] = result;
				if (x_rel == BLOCK_SIZE - 1 && y_rel == BLOCK_SIZE - 1)
					intermediateResults->lower_right_corners[block_x] = result;
			}
		}

		intermediateResults->upper_boundaries[block_x] = lowerBoundary;
		intermediateResults->left_boundaries[block_y] = rightBoundary;
	}

public:
	/*
	 * \brief Perform the initialization of the functor (e.g., allocate memory buffers).
	 * \param len1, len2 Lengths of first and second string respectively.
	 */
	virtual void
	init(DIST len1, DIST len2)
	{
		if constexpr (DEBUG)
			lMatrix = new LevenshteinMatrix<DIST>(len1, len2);
		intermediateResults = new IntermediateResults<DIST, BLOCK_SIZE>(len1 / BLOCK_SIZE, len2 / BLOCK_SIZE);
	}

	/*
	 * \brief Compute the distance between two strings.
	 * \param str1, str2 Strings to be compared.
	 * \result The computed edit distance.
	 */
	virtual DIST compute(const std::vector<C> &str1, const std::vector<C> &str2)
	{
		std::size_t len1 = str1.size();
		std::size_t len2 = str2.size();

		if (len1 == 0 || len2 == 0)
			return std::max<std::size_t>(len1, len2);

		// Traverse the distanece matrix keeping exactly one row in memory.
		std::size_t blocks_x = len1 / BLOCK_SIZE;
		std::size_t blocks_y = len2 / BLOCK_SIZE;

#pragma omp parallel
		for (std::size_t i = 0; i < blocks_x + blocks_y - 1; i++)
		{
			std::size_t j_start = (i >= (blocks_y - 1)) ? (i - (blocks_y - 1)) : 0;
			std::size_t j_end = std::min(i + 1, blocks_x);

#pragma omp for
			for (std::size_t j = j_start; j < j_end; j++)
			{
				std::size_t block_x = j;
				std::size_t block_y = i - j;
				compute_block(str1, str2, block_x, block_y);
			}

#pragma omp single
			{
				for (std::size_t block_x = 1; block_x < blocks_x; block_x++)
				{
					intermediateResults->upper_left_corners[block_x] = intermediateResults->lower_left_corners[block_x];
					intermediateResults->lower_left_corners[block_x] = intermediateResults->lower_right_corners[block_x - 1];
				}

				if constexpr (DEBUG)
				{
					lMatrix->print();
					intermediateResults->print();
				}
			}
		}

		// Last item of the last row is the result.
		return intermediateResults->lower_right_corners[blocks_x - 1];
	}
	~EditDistance()
	{
		if constexpr (DEBUG)
		{
			if (lMatrix != nullptr)
				delete lMatrix;
		}
		if (intermediateResults != nullptr)
			delete intermediateResults;
	}
};

#endif
