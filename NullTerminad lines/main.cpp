#include <iostream>
#include <Windows.h>
using namespace std;
void InputLine(char str[], const int n);
int Length(char str[]);//��������� ������ ������
void to_upper(char str[]);
void to_lower(char str[]);
void capitalize(char str[]);// ������ ����� ������� ����� � ����������� ������ ���������
void shrink(char str[]);
void main()
{
	setlocale(LC_ALL,"Russian");
	cout << (int)'A' << endl;
	cout << (int)'a' << endl;
	cout << (int)'A' - (int)'a' << endl;
	cout << (int)'�' << endl;
	cout << (int)'�' << endl;
	cout << (int)'�' - (int)'�' << endl;
	
		//char str[] = { "Hello"};
	//cout << str << endl;
	//cout << sizeof(str) << endl;
	//cout << typeid(str).name() << endl;
	const int n = 20;
	char str[n] = {};
	cout << "������� ������:"; 
	//cin >> str;
	InputLine(str, n);
	cout << str << endl;
	cout << "����� ������:" << Length(str) << "��������" << endl;
	to_upper(str);
	cout << str << endl;
	to_lower(str);
	cout << str << endl;
	capitalize(str);
	cout << str << endl;
	//int a, b, c;
	//cout << "������� ��� �����";
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
			str[i]>='�'&& str[i]<='�')
				str[i]-= 32;
		if (str[i] == '�')str[i] -= 16;*/

	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);
		/*if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= '�' && str[i] <= '�')
			str[i] += 32;
		if (str[i] == '�')str[i] += 16;*/
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