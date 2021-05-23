#pragma once
#include <iostream>
using namespace std;

class Count
{
	double Number()
	{
		double s;
		double fl = modf(first, &first);
		s = fabs(modf(second, &second));
		return (s + first);
	}

public:
	double first;
	double second;

	void multiply(double k)
	{
		cout << "Результат: " << Number() * k;
	}
};
