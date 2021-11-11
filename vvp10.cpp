#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1) //Даны два целых числа: A, B. 
	{  //Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
		int a, b;
		cout << "A:";
		cin >> a;
		cout << "B:";
		cin >> b;
		if (a > 2 and b <= 3)
		{
			cout << "neravenstvo spravedlivo";
			return 0;
		}
		cout << "nespravedlivo";
	}
	else
		if (N == 2)  //Даны три целых числа: A, B, C.
		{           //Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
			int a, b, c;
			cout << "A:";
			cin >> a;
			cout << "B:";
			cin >> b;
			cout << "C:";
			cin >> c;
			if (a < b and b < c)
			{
				cout << "dvoyinoe neravenstvo spravedlivo";
				return 0;
			}
			else
				cout << "nespravedlivo";
		}
		else
			if (N == 3) //Дано целое положительное число. Проверить истинность высказывания: 
			{          //«Данное число является четным двузначным».
				int a;
				cout << "celoe chislo:";
				cin >> a;
				if (a > 10 and a < 100)
				{
					if (a % 2 == 0)
					{
						cout << "chetnoe dva znaka";
					}
					cout << "neverno";
				}
				else
					cout << "neverno";
			}
			else
				if (N == 4) //Дано трехзначное число. Проверить истинность высказывания: 
				{          //«Цифры данного числа образуют возрастающую или убывающую последовательность».
					int a, x1, x2, x3;
					cout << "vvedite chislo:";
					cin >> a;
					x1 = a / 100;
					x2 = (a - (x1 * 100)) / 10;
					x3 = (a - (x1 * 100) - (x2 * 10)) / 1;
					if (x1 < x2 and x2 < x3)
					{
						cout << "vozrastaet";
						return 0;
					}
					else
						if (x1 > x2 and x2 > x3)
						{
							cout << "ybivaet";
						}
						else
							cout << "ravnaya" << endl;
					cout << a;
					return 0;
				}
				else
					if (N == 5) //Дано четырехзначное число. Проверить истинность высказывания:
					{// «Данное число читается одинаково слева направо и справа налево».
						int a, x1, x2, x3, x4;
						cout << "vvedite chislo";
						cin >> a;
						x1 = a / 1000;
						x2 = (a - (x1 * 1000)) / 100;
						x3 = (a - (x2 * 100) - (x1 * 1000)) / 10;
						x4 = (a - (x1 * 1000) - (x2 * 100) - (x3 * 10)) / 1;
						if (x1 == x4 and x2 == x3)
						{
							cout << "odinakovo chitaetsa";
						}
						else
							cout << "raznitsa";
					}
					else
						if (N == 6) //Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника.
						{ //Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».
							const int X = 2;
							int a, b, c, x, x1;//C2=A2+B2
							cout << "bolshii-katet-A:";
							cin >> a;
							cout << "menshiy-katet-B:";
							cin >> b;
							cout << "gippotenyza-C:";
							cin >> c;
							x = pow(a, X) + pow(b, X);
							x1 = pow(c, X);
							if (x1 == x)
							{
								cout << "istinno";
								return 0;
							}
							cout << "neverno";
						}
						else
							if (N == 7)//Даны целые числа a, b, c. Проверить истинность высказывания:
							{         //«Существует треугольник со сторонами a, b, c».
								int a, b, c, x;
								cout << "A:";
								cin >> a;
								cout << "B:";
								cin >> b;
								cout << "C:";
								cin >> c;
								if ((a + b) > c && (a + c) > b && (b + c) > a)
								{
									cout << "treygolnik";
								}
								else
								{
									cout << "neverno";
								}
							}
							return 0;
}