#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int findFirstElement(double eps)
{
	double a;
	int i = 0;
	do
	{
		a = pow(-1, i) * (1 / (2 * (i + 1)));
		if (abs(a) <= eps)
			break;
		else ++i;
	} while (i < 100000);
return i;
}