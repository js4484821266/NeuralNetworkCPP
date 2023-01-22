#pragma once
#include<ctgmath>
#include <vector>

namespace js4484821266
{
	inline long double delta(
		const long double x
	)
	{
		long double t = 1, u = 0;
		while (x + (u = t / 2) > x)
			t = u;
		return t;
	}

	long double epsilon = delta(0);

	inline long double sigmoid(const long double x)
	{
		return 1 / (1 + exp(-x));
	}

	inline long double analytic_d_dx(
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
