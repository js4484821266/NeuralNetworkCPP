#include<iostream>
#include "nn.h"

long double f(const long double x)
{
	return 1 / x;
}

int main(void)
{
	std::cout
		<< js4484821266::d_dx(
			sqrt,
			2
		)
		<< std::endl;
	return 0;
}
