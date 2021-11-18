﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "vibor zadachi:";
	cin >> N;//Даны целые положительные числа A и B (A < B). 
	if (N == 1)//Вывести все целые числа от A до B включительно;
	{ //при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).
		int a, b, i1;
		cout << "A < B. Вывесте все целые от А до В,каждое число должно выводиться столько раз, каково его значение " << endl;
		cout << "Введите А:";
		cin >> a;
		cout << "Введите В:";
		cin >> b;
		for (i1 = a; a <= b; a++)
		{
			for (int i2 = 0; i2 < a; i2++)
			cout << a << endl;
		}
	}//Даны положительные числа A и B (A > B). На отрезке длины A размещено
	if (N == 2)//максимально возможное количество отрезков длины B (без наложений). 
	{//Не используя операции умножения и деления, найти длину незанятой части отрезка A.
		int a, b, i = 0;
		cout << "A > B.найти длину незанятой части отрезка A и максимальное число отрезков В" << endl;
		cout << "Введите A:";
		cin >> a;
		cout << "Введите В:";
		cin >> b;
		while (a > b) 
		{
			a -= b;
			i++;
		}
		cout << "Количество отрезков:" << i << endl;
		cout << "Незанятая часть:" << a;
	}
	if (N == 3)//Дано целое число N (> 1). Вывести наименьшее из целых чисел K, 
	{//для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.
		int n, k = 0, x = 0;
		cout << "Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 +...+ K будет больше или равна N, и саму эту сумму" << endl;
		cout << "Введите N:";
		cin >> n;
		while (x <= n) 
		{
			k++;
			x += k;
		}
		cout << "Сумма K:" << k << endl;
		cout << "Наименьшее число:" << x;
	}//Начальный вклад в банке равен 1000 руб.Через каждый месяц размер вклада увеличивается 
	if (N == 4)//на P процентов от имеющейся суммы(P — вещественное число, 0 < P < 25).По данному P определить, 
	{//через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев
     //K(целое число) и итоговый размер вклада S(вещественное число).
		int k = 0;
		float s=1000, p;
		cout << "Введите процент под который оставляем вклад:";
		cin >> p;
		while (s <= 1100) 
		{
			++k;
			s += s * (p / 100);
		}
		cout << "на " << k << " месяц ";
		cout << "итоговый размер вклада будет:" << s;
	}//Даны целые положительные числа A и B. 
	if (N == 5)//Найти их наибольший общий делитель (НОД), используя алгоритм Евклида
	{
		int a, b;
		cout << "Введите A:";
		cin >> a;
		cout << "Введите B:";
		cin >> b;
		while (a != b) 
		{
			if (a > b) 
			{
				a = a - b;
			}
			else 
			{
				b = b - a;
			}
		}
		cout << "НОД:" << a;
	}
	if (N == 6)//Дано целое число N (> 1), являющееся числом Фибоначчи:
	{ //N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.
		int n, f1 = 1, f2 = 1, f = 0, k = 2;
		cout << "Введите целое N(>1):";
		cin >> n;
		while (f < n) 
		{
			k++;
			f = f2 + f1;
			f2 = f1;
			f1 = f;
		}
		cout << "Порядковый номер числа N:" << k;
	}
}
