#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "--------------------\n";
	cout << "Kalkulator Sederhana\n";
	cout << "--------------------\n";

	cout << "Nilai Pertama      : "; cin >> a;
	cout << "Operator (+,-,*,/) : "; cin >> aritmatika;
	cout << "Nilai Kedua        : "; cin >> b;

	cout << "\n-----\n";
	cout << "Hasil\n";
	cout << "-----\n";

	if (aritmatika == '+')
	{
		hasil = a + b;
	}
	else if (aritmatika == '-')
	{
		hasil = a - b;
	}
	else if (aritmatika == '*')
	{
		hasil = a * b;
	}
	else if (aritmatika == '/')
	{
		hasil = a / b;
	}
	else
	{
		cout << "Operator Anda Salah!";
	}

	cout << "Hasil = " << hasil << endl;
	cin.get();

	_getch();
	return 0;
}