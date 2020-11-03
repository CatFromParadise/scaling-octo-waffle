#include <iostream>
#include <string>
using namespace std;

//Конкатенация строк; Объединение строк. string 


void main()
{
	/* char result[255]{};
	char str1[255] = "Hello ";
	char str2[255] = "World";

		cout << str1 << endl;

		strcat_s(result, str1);
		strcat_s(result, str2);

		cout << result << endl; */
	string str1 = "Hello";
	string str2 = "World";
	string str3 = "!!!";
	string result;
	
	result = str1 +" " + str2 + str3;
	cout << result << endl;


}

