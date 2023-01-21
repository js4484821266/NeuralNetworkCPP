#pragma once
#include<ctgmath>
#include <vector>

namespace js4484821266
{
	inline long double sigmoid(const long double x)
	{
		return 1 / (1 + exp(-x));
	}

	class hidden_layer
	{
	public:
		hidden_layer(size_t n = 2, long double (*f)(long double) = sigmoid)
		{
		}
	};

	class nn
	{
	public:
	};
}
