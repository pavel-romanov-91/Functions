#include"stdajx.h"
#include"Constanst.h"

void Fillrand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void Fillrand(char c_arr[], const int SIZE_CHAR, int minRand, int maxRand)
{
	for (int i = 0; i < SIZE_CHAR; i++)
	{
		c_arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		minRand *= 100;
		maxRand *= 100;
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}
