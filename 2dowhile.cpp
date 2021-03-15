#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
double summ2(double eps)
{
	double a;
	double f = 0;
	int i = 0;
	do
	{
		a = pow(-1, i) * (1 / (2 * (i + 1)));
		f = f + a;
		++i;
	} while (abs(a) > eps);
	return f;
}