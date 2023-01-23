#include<iostream>
#include "nn.h"

long double f(const long double x)
{
	return 1 / x;
}

int main(void)
{
	printf("%.25Lf\n", js4484821266::d_dx(log, 2));
	return 0;
}
