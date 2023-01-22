#pragma once
#include<ctgmath>
#include <vector>

namespace js4484821266
{
	inline long double sigmoid(const long double x)
	{
		return 1 / (1 + exp(-x));
	}

	inline long double d_dx(
		long double (*f)(long double),
		const long double x
	)
	{
		return (f(x + delta(x)) - f(x)) / delta(x);
	}

	class hidden_layer
	{
	public:
		std::vector<std::vector<long double>> w;
		long double (*f)(long double) = sigmoid;
	};
}
