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
		long double
			dx = 1 << 1,
			y1 = f(x + dx) - f(x),
			y0 = f(x) - f(x - dx),
			dy_dx = 1 / LDBL_EPSILON;
		while (
			x + dx > x
			&& x - dx < x
		)
		{
			dy_dx = (y1 + y0) / (dx * 2);
			dx /= 2;
			y1 = f(x + dx) - f(x);
			y0 = f(x) - f(x - dx);
		}
		return dy_dx;
	}
}
