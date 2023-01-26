#pragma once
#include<ctgmath>
#include<random>
#include <vector>

namespace js4484821266
{
	inline long double sigmoid(const long double x)
	{
		return 1 / (1 + exp(-x));
	}

	class layer
	{
	public:
		std::vector<std::vector<long double>>w;
		std::vector<long double>z;
		long double(*f)(long double) = sigmoid;
		layer* next = nullptr;
		layer(const size_t n_levels=1)
		{
			// TODO
			if (n_levels > 1)next = new layer(n_levels - 1);
		}
	};
}
