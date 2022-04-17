#include<iostream>
using namespace std;

#include"Constants.h"
#include"Print.h"
#include"Fillrand.h"
#include"Statistics.h"
#include"shift.h"
#include"Sort.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	Fillrand(arr, n, 5, 100);
	Print(arr, n);
	Sort(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальнеое значение из массив: " << maxValueIn(arr, n) << endl;
	cout << "Сортировка массива: " << Sort(arr, n) << endl;
	int num;
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftLeft(arr, n, num);
	Print(arr, n);
	cout << "Введите число количество сдвигов: "; cin >> num;
	shiftRight(arr, n, num);
	Print(arr, n);

	cout << delimitr << endl;

	const int x = 7;
	double arr3[x];
	Fillrand(arr3, x, 0, 100);
	Print(arr3, x);

	cout << delimitr << endl;

	const int m = 8;
	double brr[m];
	Fillrand(brr, m, 5, 100);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, m) << endl;
	cout << "Минимальное значение из массива: " << minValueIn(brr, m) << endl;
	cout << "Максимальнеое значение из массив: " << maxValueIn(brr, m) << endl;
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftLeft(brr, m, num);
	Print(brr, m);
	cout << "Введите число количество сдвигов: "; cin >> num;
	shiftRight(brr, m, num);
	Print(brr, m);

	cout << delimitr << endl;

	int arr2[ROWS][COLS];
	Fillrand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Сумма элементов массива: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Сумма элементов массива: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftLeft(arr2, ROWS, COLS, num);
	Print(arr2, ROWS, COLS);
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftRight(arr2, ROWS, COLS, num);
	Print(arr2, ROWS, COLS);

	cout << delimitr << endl;

	double d_arr2[ROWS][COLS];
	Fillrand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr2, ROWS, COLS) << endl;
	cout << "Сумма элементов массива: " << minValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "Сумма элементов массива: " << maxValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftLeft(d_arr2, ROWS, COLS, num);
	Print(d_arr2, ROWS, COLS);
	cout << "Введите число количества сдвига: "; cin >> num;
	shiftRight(d_arr2, ROWS, COLS, num);
	Print(d_arr2, ROWS, COLS);

	cout << delimitr << endl;

}

