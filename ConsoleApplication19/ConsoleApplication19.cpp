// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


//1.	Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное

bool fx(int x) {
	if (x >= 0) return true; else return false;
}


//2.	Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, вычитания, деления двух чисел (эти функции тоже нужно написать самостоятельно).

void calc(int x, int y, char z) {
	switch (z)
	{
	case '+': cout << x + y;
		break;
	case '-': cout << x - y;
		break;
	case '/': cout << x / y;
		break;
	case '*': cout << x * y;
		break;
	}
}

//3.	Написать функцию, выводящую на экран прямоугольник с высотой N и шириной K.

void pr(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < k; i++)
		{
			cout << '*';
		}
		cout << endl;
	}
}


//4.	Написать функцию, вычисляющую факториал переданного ей числа.

int fakt(int x) {
	int z = 1;
	for (int i = 1; i <= x; i++)
	{
		z *= i;
	}
	return z;
}


int main()
{
	// 1
	cout << "numb 1" << endl;
	int a;
	cin >> a;
	cout << fx(a) << endl;

	// 2
	cout << "\n\nnumb 2" << endl;

	int b, c;
	char d;

	cin >> b >> d >> c;
	calc(b, c, d);

	cout << endl;

	//3
	cout << "\n\nnumb 3" << endl;

	int n, k;

	cin >> n >> k;

	pr(n, k);

	//4
	cout << "\n\nnumb 4" << endl;

	int l;

	cin >> l;

	cout << fakt(l) << endl;
	
	return 0;
}

