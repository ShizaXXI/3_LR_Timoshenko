#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double summ(int n)
{
	double a;
	double f = 0;
	int i = 0;
	while (i < n)
	{
		a= pow(-1, i) * (1 / (2 * (i + 1)));
		f = f + a;
		++i;
	}
	return f;
}