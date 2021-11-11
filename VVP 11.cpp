#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;//Даны две переменные целого типа: A и B. Если их значения не равны, 
	if (N == 1)//то присвоить каждой переменной большее из этих значений, а если равны,
	{ //то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.
		int a, b, x;
		cout << "A:";
		cin >> a;
		cout << "B:";
		cin >> b;
		if (a != b)
		{
			if (a > b)
			{
				b = a;
			}
			else
			{
				a = b;
			}
		}
		else
		{
			a = 0;
			b = 0;
		}
		cout << "A:" << a << endl;
		cout << "B:" << b;
	}
	if (N == 2)//Даны три числа. Найти сумму двух наибольших из них
	{
		int a, b, c, x1, x2, sum;
		cout << "A:";
		cin >> a;
		cout << "B:";
		cin >> b;
		cout << "C:";
		cin >> c;
		if (b <= c && b <= a) 
		{
			cout << a + c;
		}
		else 
		{
			if (a <= c && a <= b) 
			{
				cout << b + c;
			}
			else 
			{
				cout << b + a;
			}
		}
	}
	if (N == 3) //На плоскости расположены три точки: A, B, C. 
	{    //Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
		float b,c Ax, Ay, Bx, By, Cx, Cy;
						 cout << "Введите координаты точек А, В, С: ";
						 cout << "Ax:";
						 cin >> Ax;
						 cout << "Ay:";
						 cin >> Ay;
						 cout << "Bx:";
						 cin >> Bx;
						 Cout << "By:";
						 cin >> By;
						 cout << "Cx:";
						 cin >> Cx;
						 cout << "Cy:";
						 cin >> Cy;
						 b = pow(pow(abs(Ax - Bx), 2) + pow(abs(Ay - By), 2), 0.5);
						 c = pow(abs(Ax - Bx), 2) + pow(abs(Cy - Cy), 0.5);
						 if (b < c)
						 {
							 cout « "B " « distanceB « endl;
						 }
						 else
						 {
							 cout « "C " « distanceC « endl;
						 }
						 return 0;
	}
	if (N == 4) //Даны координаты точки, не лежащей на координатных осях OX и OY.
	{          // Определить номер координатной четверти, в которой находится данная точка
		int x, y;
		cout << "X:";
		cin >> x;
		cout << "Y:";
		cin >> y;
		if ((x > 0) & (y > 0))
		{
			cout << "1";
		}else
		 if ((x < 0) & (y > 0))
		{
			cout << "2";
		}else
		 if ((x < 0) & (y < 0))
		{
			cout << "3";
		}
		else
		{
			cout << "4";
		}
	}
	if (N == 5)//Дано целое число. Вывести его строку-описание вида «отрицательное четное число»,
	{         //«нулевое число», «положительное нечетное число» и т. д.
		int a;
		cout << "A:";
		cin >> a;
		if (a < 0 && a % 2 == 0)
		{
			cout << "otricatel'noe chetnoe chislo";
		}
		if (a == 0)
		{
			cout << "nylevoe chislo";
		}
		if (a > 0 && a % 2 == 1)
		{
			cout << "polozhitel'noe nechetnoe chislo";
		}
		if (a > 0 && a % 2 == 0)
		{
			cout << "polozhitel'noe chetnoe chislo";
		}
		if (a < 0 && a % 2 == 1)
		{
			cout << "otricatel'noe chetnoe chislo";
		}
		return 0;
	}
	if (N == 6)  //Дано целое число, лежащее в диапазоне 1–999.
	{           //Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
		int a;
		cout << "vvedite chislo ot 1 do 999:";
		cin >> a;
		if (a / 100 && a % 2 == 0)
		{
			cout << "Chetnoe trehznachnoe chislo";
		}
		if (a / 100 && a % 2 == 1)
		{
			cout << "nechetnoe trehznachnoe chislo";
		}
		if (a <= 99 && a % 2 == 0 && a >= 10)
		{
			cout << "Chetnoe dvyhznachnoe chislo";
		}
		if (a <= 99 && a % 2 == 1 && a >= 10)
		{
			cout << "Nechetnoe dvyhznachoe chislo";
		}
		if (a < 10 && a % 2 == 0)
		{
			cout << "Chetnoe odnoznachnoe chislo";
		}
		if (a < 10 && a % 2 == 1)
		{
			cout << "Nechetnoe odnoznachnoe chislo";
		}
	}
	return 0;
}
