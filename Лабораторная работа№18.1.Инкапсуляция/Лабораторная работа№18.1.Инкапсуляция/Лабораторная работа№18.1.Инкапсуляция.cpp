﻿#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	setlocale(0, "");
	system("color F0");
	double k;
	Count Num;

	cout << "Введите число от которого нужно взять целую часть: ";
	cin >> Num.first;
	cout << "Введите число от которого нужно взять дробную часть числа: ";
	cin >> Num.second;


	cout << "Введите число на которое надо будет умножить: ";
	cin >>k;

	Num.multiply(k);
	return 0;
}

//Поле first-положительное целое число, целая часть числа, поле second-положительное дробное число, дробная часть числа. Реализовать метод multiply(double k)-умножение на вещественное число k