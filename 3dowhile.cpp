#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
void print(int n, int k)
{
	double a;
	int i = 0;
	cout << "Enter the amount of sequence terms: n = " << endl;
	cin >> n;
	cout << "Enter the number of excluded sequence terms: k = " << endl;
	cin >> k;
	do
	{
		if ((i % k) == 0)
		{
			++i;
			continue;
		}
		a = pow(-1, i) * (1 / (2 * (i + 1)));
		cout << "a(" << i << ") = " << a << endl;
		++i;
	}
	while (i < n);
}