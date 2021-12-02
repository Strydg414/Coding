#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	//Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N,
	// содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .
	if (N == 1)
	{
		int n;
		vector <int> arr;
		cout << "Введите N(>0):";
		cin >> n;
		cout << "Положительные нечётные числа:";
		for (int i = 0; i != n * 2; i++)
		{
			if (i % 2 == 1)
			{
				arr.push_back(i);
			}
		}
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
	}
	if (N == 2)
		//Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
		//Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .
	{
		int n, a, d, k = 1;
		vector <int> arr;
		cout << "Введите N:";
		cin >> n;
		cout << "Введите первый член А:";
		cin >> a;
		cout << "Введите знаминатель геометрической прогрессии D:";
		cin >> d;
		for (int i = 1; i <= n; i++)
		{
			arr.push_back(i);
		}
		for (int i = 1; i < n; i++)
		{
			arr[i] = a * pow(d, k);
			k++;
		}
		cout << "Геометрическая прогрессия:" << a << " ";
		for (int i = 1; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
	}
	if (N == 3)
	{
	//Даны целые числа N(> 2), A и B.Сформировать и вывести целочисленный массив размера N,
	 //первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущи
		int n, a, b;
		vector <int> arr;
		cout << "Введите размер массива N:";
		cin >> n;
		cout << "Введите первый элемент А:";
		cin >> a;
		cout << "Введите второй элемент В:";
		cin >> b;
		for (int i = 1; i <= n; i++)
		{
			arr.push_back(i);
		}
		arr[0] = a;
		arr[1] = b;
		arr[2] = a + b;
		a = a + b;
		for (int i = 3; i < arr.size(); i++)
		{
			arr[i] = a * 2;
			a = arr[i];
		}
		cout << "Массив:";
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
	}
	if (N == 4)
	{//Дан массив A размера N. Вывести его элементы в следующем 
//порядке: A1, AN , A2, AN−1, A3, AN−2,
		int n;
		vector <int> arr;
		cout << "Введите размер массива:";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			arr.push_back(i);
		}
		int k = n - 1;
		cout << "Вывод массива:" << endl;
		for (int i = 0; i < arr.size() / 2; i++)
		{
			cout << arr[i] << " " << arr[k] << " " << endl;
			k--;
		}
		if (n % 2 != 0)
		{
			cout << arr[n / 2];
		}
	}
	if (N == 5)
	{//Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в 
//порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров
		int n;
		vector <int> arr;
		cout << "Введите размер массива:";
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			arr.push_back(i);
		}
		cout << "Чётные числа в массиве:";
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 0)//chentie
			{
				cout << arr[i] << " ";
			}
		}
		cout << endl << "Нечетные числа в массиве:";
		for (int i = n; i >= 0; i--)
		{
			if (i % 2 == 1)//necehet
			{
				cout << arr[i] << " ";
			}
		}
	}
}//1+ 2+ 4+ 5+