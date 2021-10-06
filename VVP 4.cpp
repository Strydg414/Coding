#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const float X = 2;
	const double pi = 3.14;
	double a, b, d, P, L, S, N, sum1, sum2, sum3, sum;
	cout << "vibor zadachi 1-5:";
	cin >> N; // выбор задачки
	if (N == 1) {
		cout << " a   b " << endl;
		cin >> a;
		cin >> b;
		S = a * b;
		P = 2 * (a + b);
		cout << "P=" << P << endl;
		cout << "P=" << S << endl;
	}
	else
		if (N == 2) {
			cout << "d" << endl;
			cin >> d;
			L = pi * d;
			cout << "L=" << L;
		}
		else
			if (N == 3) {
				cout << " a   b " << endl;
				cin >> a;
				cin >> b;
				sum1 = (a + b) / 2;
				cout << "srednee=" << sum1;
			}
			else
				if (N == 4) {
					cout << " a   b " << endl;
					cin >> a;
					cin >> b;
					sum1 = a + b;
					sum = a - b;
					sum2 = a * b;
					sum3 = pow(a, X) / pow(b, X);
					cout << "slozhenie=" << sum1 << endl;
					cout << "raznost=" << sum << endl;
					cout << "proizvedenie=" << sum2 << endl;
					cout << "chastnoe=" << sum3 << endl;
				}else
					if (N == 5) {
						cout << " a   b " << endl;
						cin >> a;
						cin >> b;
						sum = abs(a) + abs(b);
						sum1 = abs(a) - abs(b);
						sum2 = abs(a) * abs(b);
						sum3 = pow(abs(a), X) / pow(abs(b), X);
						cout << "slozhenie=" << sum << endl;
						cout << "raznost=" << sum1 << endl;
						cout << "proizvedenie=" << sum2 << endl;
						cout << "chastnoe=" << sum3 << endl;
					}
					else
						return 0;
}