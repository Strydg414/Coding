#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double X = 2;
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1)
	{
		double x1, x2, y1, y2, L;
		cout << "x1=";
		cin >> x1;
		cout << "y1=";
		cin >> y1;
		cout << "x2=";
		cin >> x2;
		cout << "y2=";
		cin >> y2;
		L = sqrt(pow((x2 - x1), X) + pow((y2 - y1), X));
		cout << "L=" << L;
	}
	else
		if (N == 2)
		{
			double x1, x2, x3, AC, BC, sum;
			cout << "A=";// A B C
			cin >> x1;
			cout << "B=";
			cin >> x2;
			cout << "C=";
			cin >> x3;
			AC = abs(x3 - x1);
			BC = abs(x3 - x2);
			sum = AC + BC;
			cout << "AC=" << AC << endl;
			cout << "BC=" << BC << endl;
			cout << "sum=" << sum << endl;
		}
		else
			if (N == 3)
			{
				double x1, x2, x3, AC, BC, proizv;
				cout << "A=";// A B C
				cin >> x1;
				cout << "B=";
				cin >> x2;
				cout << "C=";
				cin >> x3;
				if (x3 < x1 || x3 > x2) 
				{
					cout << "C vne otrezka AC";
					return 0;
				}
				else
				AC = abs(x3 - x1);
				BC = abs(x3 - x2);
				proizv = AC * BC;
				cout << "AC=" << AC;
				cout << "BC=" << BC;
				cout << "proizvedenie" << proizv;
			}
			else
				if (N == 4)
				{
					double x1, y1, x2, y2, a, b, x, y;
					cout << "x1=";
					cin >> x1;
					cout << "y1=";
					cin >> y1;
					cout << "x2=";
					cin >> x2;
					cout << "y2=";
					cin >> y2;
					a = abs(x2 - x1);
					b = abs(y2 - y1);
					x = (a + b) * 2; // P
					y = a * b; // S
					cout << "P=" << x << endl;
					cout << "S=" << y << endl;
				}else
					if (N == 5)
					{
						double x1, x2, x3, y1, y2, y3, a, b, c, x, y;
						cout << "x1=";
						cin >> x1;
						cout << "y1=";
						cin >> y1;
						cout << "x2=";
						cin >> x2;
						cout << "y2=";
						cin >> y2;
						cout << "x3=";
						cin >> x3;
						cout << "y3=";
						cin >> y3;
						a = sqrt(pow((x1 - x2), X) + pow((y1 + y2), X));
						b = sqrt(pow((x2 - x3), X) + pow((y2 - y3), X));
						c = sqrt(pow((x1 - x3), X) + pow((y1 + y3), X));
						x = (a + b + c) / 2; // P and semi p
						y = sqrt(x * (x - a) * (x - b) * (x - c)); // S
						cout << "P=" << x << endl;
						cout << "S=" << y;
					}else
		return 0;
}