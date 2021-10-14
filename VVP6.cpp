#include <iostream>

using  namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1) //Поменять местами содержимое переменных A и B и вывести новые значения A и B.
	{
		int A, B, temp;
		cout << "A=";
		cin >> A;
		cout << "B=";
		cin >> B;
		temp = B;
		B = A;
		A = temp;
		cout << "A=" << A << endl;
		cout << "B = " << B;
	}
	else
		if (N == 2)     //. Даны переменные A, B, C. Изменить их значения,
		{              // переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
			int A, B, C, temp;
			cout << "A=";
			cin >> A;
			cout << "B=";
			cin >> B;
			cout << "C=";
			cin >> C;
			temp = C;
			C = A;
			A = B;
			B = temp;
			cout << "A-B" << endl;
			cout << "A=" << A << endl;
			cout << "B-C" << endl;
			cout << "B=" << B << endl;
			cout << "C-A" << endl;
			cout << "C=" << C << endl;
			
		}
		else
			if (N == 3) //Даны переменные A, B, C. Изменить их значения, 
			{             //переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
				int A, B, C, temp;
				cout << "A=";
				cin >> A;
				cout << "B=";
				cin >> B;
				cout << "C=";
				cin >> C;
				temp = A;
				A = C;
				C = B;
				B = temp;
				cout << "A-C" << endl;
				cout << "A=" << A << endl;
				cout << "C-B" << endl;
				cout << "C=" << C << endl;
				cout << "B-A" << endl;
				cout << "B=" << B << endl;
			}
			else
				if (N == 4) //Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x
				{
					const double N = 2, X = 6;
					double y, x;
					cout << "x=";
					cin >> x;
					y = 3 * pow(x, X) - 6 * pow(x, N) - 7;
					cout << "y=" << y;
				}
				else
					if (N == 5)  //Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
					{
						const double N = 3, X = 6;
						double x, y;
						cout << "x=";
						cin >> x;
						y = 4 * pow(x - 3, X) - 7 * pow(x - 3, N) + 2;
						cout << "y=" << y;
					}
					else
						if (N == 6) //Дано число A. Вычислить A^8 , 
						{             //используя вспомогательную переменную и три операции умножения.
							double A, x;
							cout << "A=";
							cin >> A;
							x = A * A;
							A = x * x;
							x = A * A;
							cout << "A=" << x;
						}
						else
							if (N == 7)  //7. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.
							{
								double A, x, y;
								cout << "A=";
								cin >> A;
								x = A * A;
								y = x * x * A;
								A = y * y * y;
								cout << "A=" << A;
							}
							else
return 0;
}