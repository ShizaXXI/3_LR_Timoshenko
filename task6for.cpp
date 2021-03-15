#include <cstdlib>
#include <iostream>
#include "../../task1/task1/func1.h"
#include "../../task2/task2/func2.h"
#include "../../task4/task4/func4.h"
#include "../../task5/task5/func5.h"



using namespace std;

void main()
{
	int m;
	int s;
		for (s = 1; s < 7; ++s)
		{
			if (s == 6)
			{
				cout << "Exit" << endl;
			}
			else
				cout << "Task №" << s << endl;
		}
		cout << "Chose the task ";
		cin >> m;
		system("cls");
		switch (m)
		{
		case 1:
			int n;
			cout << "Enter the amount: ";
			cin >> n;
			cout << "\nThe answer is: " << summ(n);
		case 2:
			double eps;
			cout << "Enter the measurement error: ";
			cin >> eps;
			cout << "\nThe answer is:" << summ2(eps);
		case 3:
			void print();
		case 4:
			cout << "Enter eps: ";
			cin >> eps;
			cout << "\nThe answer is: " << findFirstElement(eps);
		case 5:
			cout << "Enter eps: ";
			cin >> eps;
			cout << "\nThe answer is: " << findFirstNegativeElement(eps);
		case 6:
			break;
		default:
			cout << "Incorrect input";
		}
