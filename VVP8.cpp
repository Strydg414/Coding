#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1)  //	Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл
	{
		int b, kb;
		cout << "vvedite ves v byte:";
		cin >> b;
		kb = b / 1024;
		cout << "kilobyte:" << kb;
	}else            //Даны целые положительные числа A и B (A > B). 
		if (N == 2) //На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
		{          // Найти количество отрезков B, размещенных на отрезке A.
			int a, b;
			cout << "vvedite A:";
			cin >> a;
			cout << "vvedite B:";
			cin >> b;
			if (a < b)
			{
				cout << "B bolshe A";
				return 0;
			}
			a = a / b;
			cout << "Chislo otrezkov:" << a;
		}
		else
			if (N == 3) //Даны целые положительные числа A и B (A > B). 
			{          //На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). 
				int a, b, x;//Найти длину незанятой части отрезка A
				cout << "vvedite A:";
				cin >> a;
				cout << "vvedite B:";
				cin >> b;
				if (a < b)
				{
					cout << "B bolshe A";
					return 0;
				}
				x = a;
				a = a / b;
				x = x - (a * b);
				cout << "kolichestvo otrezkov:" << a << endl;
				cout << "nezanyataya chast' otrezka:" << x;
			}
			else
				if (N == 4)  //Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.
				{
					int a;
					cout << "vvedite A:";
					cin >> a;
					a = a / 10 + (a % 10) * 10;
					cout << "smena chisel:" << a;
				}
				else
					if (N == 5)  //Дано трехзначное число. В нем зачеркнули первую слева цифру и
					{           //приписали ее справа. Вывести полученное число.
						int a, x1, x2, x3;
						cout << "vvedite A:";
						cin >> a;
						x1 = a / 100;
						x2 = (a - (x1 * 100)) / 10;
						x3 = (a - (x1 * 100) - (x2 * 10)) / 1;
						cout << "obratnoe chislo:" << x3 << x2 << x1;
					}
	return 0;
}