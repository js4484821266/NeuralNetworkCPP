#pragma once
#include<ctgmath>
#include <vector>

namespace js4484821266
{
	inline long double sigmoid(const long double x)
	{
		return 1 / (1 + exp(-x));
	}
}
