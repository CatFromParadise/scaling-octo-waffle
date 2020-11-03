#include <iostream>
using namespace std;

//13. Дано тризначне число. У ньому закреслили першу зліва цифру і приписали її праворуч. Вивести отримане число. 
void main()
{
	double num;
	cout << "Input number: ";
	cin >> num;
	((num > 99) && (num < 1000)) ? cout << "the number is three-digit\n" : cout << "The number isn't three-digit" << endl;
	if ((num<99||num>999))
	{
		return;
	}
	int digit, digit1, digit2;
	digit = num;
	digit2 = digit % 100;
	digit1 = digit / 100;
	cout << num << "-->" <<digit2<< digit1;



}