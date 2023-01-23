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
		long double dx = 1, t;
		while (
			x + (t = dx / 2) > x
		)
			dx = t;
		long double dy1, dy0;
		while (
			abs(dy1 = f(x + dx) - f(x)) <= 0 ||
			abs(dy0 = f(x) - f(x - dx)) <= 0
		)
			dx *= 2;
		// TODO
	}

	class hidden_layer
	{
	public:
		std::vector<std::vector<long double>> w;
		long double (*f)(long double) = sigmoid;
		hidden_layer* next = nullptr;
	};
}
