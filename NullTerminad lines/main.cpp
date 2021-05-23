#include <iostream>
#include <Windows.h>
using namespace std;
void InputLine(char str[], const int n);
int Length(char str[]);//Вовращает размер строки
void to_upper(char str[]);
void to_lower(char str[]);
void capitalize(char str[]);// Каждую букву каждого слова в предложении делает заглавной
void shrink(char str[]);
void main()
{
	setlocale(LC_ALL,"Russian");
	cout << (int)'A' << endl;
	cout << (int)'a' << endl;
	cout << (int)'A' - (int)'a' << endl;
	cout << (int)'Ё' << endl;
	cout << (int)'ё' << endl;
	cout << (int)'Ё' - (int)'ё' << endl;
	
		//char str[] = { "Hello"};
	//cout << str << endl;
	//cout << sizeof(str) << endl;
	//cout << typeid(str).name() << endl;
	const int n = 20;
	char str[n] = {};
	cout << "Введите строку:"; 
	//cin >> str;
	InputLine(str, n);
	cout << str << endl;
	cout << "Длина строки:" << Length(str) << "символов" << endl;
	to_upper(str);
	cout << str << endl;
	to_lower(str);
	cout << str << endl;
	capitalize(str);
	cout << str << endl;
	//int a, b, c;
	//cout << "Введите три числа";
		//cin >> a >> b >> c;
		//cout << a << b << c << endl;

}
void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);// CP-Code Page
	cin.getline(str, n);
	SetConsoleCP(866);
	cout << sizeof(str) << endl;
}
int Length(char str[])
{
	int i = 0;
	for (; str[i]; i++);
		return i;
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
		/*if (str[i]>='a'&& str[i]<='z'||
			str[i]>='а'&& str[i]<='я')
				str[i]-= 32;
		if (str[i] == 'ё')str[i] -= 16;*/

	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
		/*if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'А' && str[i] <= 'Я')
			str[i] += 32;
		if (str[i] == 'Ё')str[i] += 16;*/
	}
}
void capitalize(char str[])
{
	to_lower(str);
	str[0] = toupper(str[0]);
	for (int i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ')str[i] = toupper(str[i]);
	}
}
void shrink(char str[])
{

}