#include<iostream>
using namespace std;

int Add(int a, int b);// Протатип функции (обьявление функции - Function declaration)
// Прототип нужен для того, чтобы имя функции и ее список принимали были известны на момент вызове
int Sub(int a, int b);// Прототип состоит только из загаловка функции
int Mul(int a, int b);
double Div(int a, int b);
double Power(long int a, long int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);// Вызов (использования) функции -Fuction call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << "Возведенное число: " << Power(a, b) << endl;
}
int Add(int a, int b)//Реализациия функции (определение функции - function defition)
{// Реализует то что делает функция
	int c = a + b;
	return c;
}
int Sub(int a, int b)// реализация состоит из заголовка и тела функции
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
double Power(long int a, long int n)
{
	int c = 0;
	if (n == 0)c = 1;
	//else if (n == 1)c = a;
	else if (n % 2 == 0)c = Power(a * a, n / 2);
	else c = a * Power(a * a, n / 2);
	return c;
}
