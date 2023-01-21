#include<iostream>
#include<ctgmath>
long double sigmoid(const long double x)
{
	return 1 / (1 + expl(-x));
}
int main(void)
{
	return 0;
}