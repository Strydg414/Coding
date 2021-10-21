#include <iostream>

using  namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1) // Дано значение угла α в градусах (0 < α < 360).
	{          //  Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов
		const double pi = 3.14;
		double a;
		cout << "a=";
		cin >> a;
		if (a >= 0 and a <= 360)
		{
			a = (a * pi) / 180;
			cout << "a radian=" << a;
		}
		else
			cout << "Nevernoe znachenie";
	}
	else
		if (N == 2)  //Дано значение угла α в радианах (0 < α < 2·π). 
		{           //Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов
			const double pi = 3.14;
			double b;
			cout << "a=";
			cin >> b;
			if (0 >= b and b >= 2 * pi)
			{
				cout << "nevernoe znachenie";
				return 0;
			}
			b = (b * 180) / pi;
			cout << "a gradysov=" << b;
		}
		else
			if (N == 3) //Известно, что X кг конфет стоит A рублей. Определить,
			{          //сколько стоит 1 кг и Y кг этих же конфет.
				double x, a, y, s, r;
				cout << "killogram=";
				cin >> a;
				cout << "rybleyi=";
				cin >> x;
				s = a / x; // за грамм
				cout << "cena za gramm=" << s * 1000 << endl;
				cout << "plus Y killogramm:";
				cin >> y;
				r = (y + a) / s;
				cout << "itogo:" << r << "rybley";
			}
			else
				if (N == 4)  //Скорость первого автомобиля V1 км / ч, второго — V2 км / ч, расстояние между ними S км.
				{           //Определить расстояние между ними через T часов, если автомобили удаляются друг от друга.
					double v1, v2, s, t, x;
					cout << "v1=";
					cin >> v1;
					cout << "v2=";
					cin >> v2;
					cout << "t=";
					cin >> t;
					cout << "s=";
					cin >> s;
					x = (v1 + v2) * t + s;
					cout << "rasstoyanie bydet=" << x;
				}
				else
					if (N == 5) //Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).
					{
						double a, b, x; //x nayiti x=(-b)/a
						cout << "A=";
						cin >> a;
						do
						{
							cout << "A = 0, vvedite A:";
							cin >> a;
						} while (a == 0);
						cout << "B=";
						cin >> b;
						x = -b / a;
						cout << "x=" << x;
					}
					else
						if (N == 6)  //Найти решение системы линейных уравнений вида A1·x + B1·y = C1   ,   A2·x + B2·y = C2
						{
							double a1, a2, b1, b2, c1, c2, x, y, yy, xx, f;;
							cout << "a1=";
							cin >> a1;
							cout << "b1=";
							cin >> b1;
							cout << "c1=";
							cin >> c1;
							cout << "a2=";
							cin >> a2;
							cout << "b2=";
							cin >> b2;
							cout << "c2=";
							cin >> c2;
							f = a1 * b2 - a2 * b1;
							xx = c1 * b2 - c2 * b1;
							yy = a1 * c2 - a2 * c1;
							x = xx / f;
							y = yy / f;
							cout << "x=" << x;
							cout << "y=" << y;
						}
	return 0;
}