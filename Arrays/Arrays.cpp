#include<iostream>
using namespace std;

#define tab "\t"
#define delimitr "\n------------------------------------\n"
#define tab "\t"

const int ROWS = 3;
const int COLS = 4;


void Fillrand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sort(int arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int num);
void shiftLeft(double arr[], const int n, int num);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, int const COLS, int num);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, int const COLS, int num);

void shiftRight(int arr[], const int n, int num);
void shiftRight(double arr[], const int n, int num);
void shiftRight(int arr[ROWS][COLS], const int ROWS, int const COLS, int num);
void shiftRight(double arr[ROWS][COLS], const int ROWS, int const COLS, int num);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	Fillrand(arr, n, 5, 100);
	Sort(arr, n);
	Print(arr, n);
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

void Fillrand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Fillrand(double arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Fillrand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";
}

int Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j]);
			{
				int bufer = arr[i];
				arr[i] = arr[j];
				arr[j] = bufer;
			}
		}
	}
	return 0;
}


int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	//return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	//return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

int minValueIn(int arr[], const int n)
{
	int minValueIn;
	minValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValueIn) minValueIn = arr[i];
	}
	return minValueIn;
}
double minValueIn(double arr[], const int n)
{
	int minValueIn;
	minValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValueIn) minValueIn = arr[i];
	}
	return minValueIn;
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
int minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int maxValueIn;
	maxValueIn = arr[0];
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] > maxValueIn) maxValueIn = arr[i];
	}
	return maxValueIn;
}
double maxValueIn(double arr[], const int n)
{
	int maxValueIn = arr[0];
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] > maxValueIn) maxValueIn = arr[i];
	}
	return maxValueIn;
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}
int maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}

void shiftLeft(int arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
void shiftLeft(double arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0][0];
		for (int j = 0; j < ROWS - 1; j++)
		{
			num = arr[0][0];
			for (int g = 0; g < COLS - 1; g++)
			{
				arr[j][g] = arr[j][g + 1];
				arr[j][COLS - 1] = bufer;
			}
		}
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		int  bufer = arr[0][0];
		for (int j = 0; j < ROWS - 1; j++)
		{
			num = arr[0][0];
			for (int g = 0; g < COLS - 1; g++)
			{
				arr[j][g] = arr[j][g + 1];
				arr[j][COLS - 1] = bufer;
			}
		}
	}
}

void shiftRight(int arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
void shiftRight(double arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
			for (int g = 0; g < COLS - 1; g++)
			{
				num = arr[j][0];
				arr[j][g] = arr[j][g + 1];
				arr[j][COLS - 1] = bufer;
			}
	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		int bufer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			num = arr[j][0];
			for (int g = 0; g < COLS - 1; g++)
				arr[j][g] = arr[j][g + 1];
			arr[j][COLS - 1] = bufer;
		}
	}
}
