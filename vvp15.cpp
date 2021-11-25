﻿#include <iostream>

using namespace std;
int Sign(double x)
{
	if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
	else return 1;
}
float RingS(float r1, float r2) 
{
	return 3.14 * (r1 * r1 - r2 * r2);
}
int Quarter(int x, int y)
{
	if ((x > 0) & (y > 0))
	{
		return 1;
	}
	else
		if ((x < 0) & (y > 0))
		{
			return 2;
		}
		else
			if ((x < 0) & (y < 0))
			{
				return 3;
			}
			else
			{
				return 4;
			}
}
double Fact2(int x)
{
		double p;
		int j,i;
		if (x % 2 == 0)
		{
			p = 1;
			for (i = 1,j=0; i < x;i++)
			{
				j += 2;
				p = p * (double)j;
			}
		}
		if(x % 2 != 0)
		{
			p = 1;
			for (i = 1,j=1; j < x; i++)
			{
				j += 2;
				p = p * (double)j;
			}
		}
		return p;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Выбор задачи:";
	cin >> N;//Описать функцию PowerA3(A, B), вычисляющую третью степень числа A
	if (N == 1)// и возвращающую ее в переменной B (A — входной, B — выходной параметр;
	{	// оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.
		#define PowerA3  a*a*a;
		float a, b;
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите А:";
			cin >> a;
			b = PowerA3;
			cout << a <<"^3=" << b << endl;
		}
	}//Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
	 //−1, если X < 0; 0, если X = 0; 1, если X > 0.
	 //С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
	if (N == 2)
	{
		float a, b;
		cout << "Введите А:";
		cin >> a;
		cout << "Введите B:";
		cin >> b;
		cout << "Функция Sign(X):" << Sign(a) + Sign(b);
	}//Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, 
	//заключенного между двумя окружностями с общим центром и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).
		//С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
	if (N == 3)
	{
		float a, b;
		cout << "Введите R1:";
		cin >> a;
		cout << "Введите R2:";
		cin >> b;
		if (a < b)
		{
			cout << "nevero";
			return 0;
		}
		cout << RingS(a, b);
	}//Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, 
		//в которой находится точка с ненулевыми вещественными координатами(x, y).
		//С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами
	if (N == 4)
	{
		int x, y;
		cout << "X:";
		cin >> x;
		cout << "Y:";
		cin >> y;
		cout << Quarter(x, y);
	}
	//Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал :
	//N!!= 1·3·5·. ..·N, если N — нечетное;
	//N!!= 2·4·6·. ..·N, если N — четное(N > 0 — параметр целого типа; 
	//вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).
	if (N == 5)
	{
		double n;
		cout << "Введите число возводимое в Fact2:";
		cin >> n;
		cout << Fact2(n);
	}
}