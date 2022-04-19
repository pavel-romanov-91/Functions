#pragma once
#include"Constanst.h"

template<typename T>void Fillrand(T arr[], const int SIZE_CHAR, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Fillrand(char c_arr[], const int SIZE_CHAR, int minRand, int maxRand);
template<typename T>void Fillrand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void Fillrand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
