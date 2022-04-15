#include<iostream>
using namespace std;

int Add(int a, int b);// �������� ������� (���������� ������� - Function declaration)
// �������� ����� ��� ����, ����� ��� ������� � �� ������ ��������� ���� �������� �� ������ ������
int Sub(int a, int b);// �������� ������� ������ �� ��������� �������
int Mul(int a, int b);
double Div(int a, int b);
double Power(long int a, long int n);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);// ����� (�������������) ������� -Fuction call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << "����������� �����: " << Power(a, b) << endl;
}
int Add(int a, int b)//����������� ������� (����������� ������� - function defition)
{// ��������� �� ��� ������ �������
	int c = a + b;
	return c;
}
int Sub(int a, int b)// ���������� ������� �� ��������� � ���� �������
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
