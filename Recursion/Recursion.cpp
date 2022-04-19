#include<iostream>
using namespace std;

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << "этаже\n ";
	elevator(floor-1);
	cout << "Вы на " << floor << "этаже\n ";
}
//#define ELEVATOR

double power(double base, int exponent)
{
	/*if (exponent == 0) return 1;
	else if (exponent > 0) return base * power(base, exponent - 1);
	else if (exponent < 0) return 1 / power(base, exponent + 1);*/
	//return exponent == 0 ? 1 : exponent > 0 ? power(base, exponent - 1) : 1 / base * power(base, exponent + 1);
	return exponent == 0 ? 1 : exponent > 0 ? base * power(base, exponent - 1) : 1 / power(base, -exponent);
}



void main()
{
	setlocale(LC_ALL, "");

#ifdef ELEVATOR
	cout << "Hello World!";
	main();

	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif // ELEVATOR

	int number; 
	int degree;
	cout << "Введите число: "; cin >> number;
	cout << "Введите cтепень: "; cin >> degree;

	cout << "Введённое число, в ведённой вами степени равно " << power(number, degree) << endl;
	main();
	

}