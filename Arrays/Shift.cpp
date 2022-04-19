#include"stdajx.h"
#include"Constanst.h"
template<typename T>void shiftLeft(T arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		T bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		T bufer = arr[0][0];
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
template<typename T>void shiftRight(T arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		T bufer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = bufer;
	}
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, int const COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		T bufer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
			for (int g = 0; g < COLS - 1; g++)
			{
				num = arr[j][0];
				arr[j][g] = arr[j][g + 1];
				arr[j][COLS - 1] = bufer;
			}
	}
}
