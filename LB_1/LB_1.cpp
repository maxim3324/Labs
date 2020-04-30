
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
float f1(int x)
{
	float p = 0;
	if (x >= 0)
	{
		p = pow(-x, 2);
	}
	else
	{
		p = abs(-x);
	}
	return p;
}
float f2(int& x)
{
	x = f1(x);
}


int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Введите начальное и конечное значение" << endl;
	cin >> a >> b;
	cout << "Введите начальное значение" << a << endl;
	cout << "Введите конечное значение" << b << endl;

	for (int i = a; i < b; i++)
	{
		float sum = f1(i);
		cout << "f1= " << sum << " i=" << i << endl;
	}
	system("pause");
		return 0;
}