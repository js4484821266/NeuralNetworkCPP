#include<iostream>
#include "nn.h"

long double f(const long double x)
{
	return 1 / x;
}

int main(void)
{
	printf("%.20Lf\n", js4484821266::d_dx(exp, 1));
	return 0;
}
