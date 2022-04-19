#include"stdajx.h"
#include"Constanst.h"


template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	//return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template<typename T>T minValueIn(T arr[], const int n)
{
	T minValueIn;
	minValueIn = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValueIn) minValueIn = arr[i];
	}
	return minValueIn;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
template<typename T>T maxValueIn(T arr[], const int n)
{
	T maxValueIn;
	maxValueIn = arr[0];
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] > maxValueIn) maxValueIn = arr[i];
	}
	return maxValueIn;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}

	}
	return max;
}
