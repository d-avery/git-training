#include <vector>
#include <cstddef>

static constexpr double EPSILON{1e-10};

double upperBound(const std::vector<double>& vec, double target) {
	std::size_t i{0}, j{vec.size()};

	std::size_t mid{(i + j) / 2};
	
	while (i < j) {
		if (target >= vec[mid]) {
			i = mid + 1;
		}

		else {
			j = mid;
		}

		mid = (i + j) / 2;
	}

	if (i < vec.size() && vec[mid] <= target) {
		++i;
	}

	return i;
}
