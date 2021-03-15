#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int findFirstNegativeElement(double eps)
{
	double a;
	int i = 0;
		do
	{
		a = pow(-1, i) * (1 / (2 * (i + 1)));
		if (a < 0 && abs(a) <= eps)
			return i;
		else ++i;
	} while (i < 100000000);
	return i;
}