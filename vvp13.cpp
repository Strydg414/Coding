﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1) //Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
	{
		float x, x1, a = 0;
		cout << "Цена за киллограм:";
		cin >> x;
		for (int i = 0; i < 10; i++)
		{
			a += 0.1;
			x1 = x * a;
			cout << a << "=" << x1 << endl;
		}
	}
	if (N == 2)//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
	{
		float a, x = 1, x1 = 1.1, y;
		int i;
		cout << "N=";
		cin >> i;
		for (a = 1; a <= i; a++)
		{
			x *= x1;
			x1 += 0.1;
		}
		cout << x;
	}
	if (N == 3)//Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу:о слагаемого выводить 
	{//текущее значение суммы N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждог
		int x, s = 0;
		cout << "Целое чило N>0:";
		cin >> x;
		for (int i = 1; i <= x; i++)
		{
			s += (2 * i - 1);
			cout << s << endl;
		}
		cout << s;
	}
	if (N == 4)//Дано вещественное число A и целое число N (> 0).
	{// Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + A^N
		float a, n, sum = 0;
		cout << "Введите А:";
		cin >> a;
		cout << "Введите N:";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			sum += pow(a, i);
		}
		cout << sum;
	}//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения
	if (N == 5)//1 − A + A2 − A3 + . ..± A^N .
	{    //Условный оператор не использовать.
		float a, sum = 0;
		int n;
		cout << "Введите А:";
		cin >> a;
		cout << "Введите N:";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			sum += pow(-a, i);
		}
		cout << sum;
	}
}