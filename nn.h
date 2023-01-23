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
		long double dx = 1 << 1, y0, y1, dy_dx = 1 / LDBL_EPSILON, t;
		while (
			x + dx > x
			&& x - dx < x
			&& abs(y1 = f(x + dx) - f(x)) > dx
			&& abs(y0 = f(x) - f(x - dx)) > dx
			&& dy_dx > (t = (y1 + y0) / (dx * 2))
		)
		{
			dy_dx = t;
			dx /= 2;
		}
		return dy_dx;
	}
}
