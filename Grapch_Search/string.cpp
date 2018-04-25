#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <wchar.h>
#include <mbstring.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
void upText(char * str);
void lowText(char * str);
void CapitalLetter(char * str);
void SmallLetter(char * str);
void plainText(char * str);
void scan(char * str);

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[256] = "jkksdj kdl kls lsdkionn  adlala dl jhkn";
	char sim = ' ';
	SmallLetter(str);
	
	do {

		cout << "��� �������������� ������ � ��������� ����� ������� : 1" << endl;
		cout << "��� �������������� ������ � ������ ������� ������� : 2" << endl;
		cout << "��� �������������� ������ � ��������� ����� ������� : 3" << endl;
		cout << "��� �������������� ������ � ������ ������ � ������ �������� ������� : 4" << endl;
		cout << "��� �������������� ������ ��� � ������� ����������� ������� : 5" << endl;
		cout << "��� ������ ������� : f" << endl;
		cout << endl;
		cout << "������� ����������� �������� : ";
		cin  >> sim;
		cout << endl;

		switch (sim)
		{
		case '1': scan(str); upText(str);        break;
		case '2': scan(str); lowText(str);       break;
		case '3': scan(str); CapitalLetter(str); break;
		case '4': scan(str); SmallLetter(str);   break;
		case '5': scan(str); plainText(str);     break;
		default: break;
		}

	} while (sim != 'f' && sim != 'F');


	
	return 0;
}


//������ ���������� �������
void upText(char * str)
{
	for (int i(0); i < strlen(str); ++i)
	{
		printf("%c", toupper(str[i]));
	}
	cout << endl;
}


//������� ������� �������� ������� � ������ ��������
void lowText(char * str)
{

	for (int i(0); i < strlen(str); ++i)
	{
		printf("%c", tolower(str[i]));
	}
	cout << endl;
}

//������� ������� ���������� ��������� ������� ����� � ������� ��������
void CapitalLetter(char * str)
{
	int i(0);
	while (i < strlen(str))
	{
		if (i != 0 && str[i-1] != ' ')
		{
			printf("%c", str[i]);
		}
		else
		{
			printf("%c", toupper(str[i]));
		}

		++i;
	}
	cout << endl;
}
//������� ������� ���������� ��������� ������� ����� � ������ ��������
void SmallLetter(char * str)
{
	int i(0);
	while (i < strlen(str))
	{
		if (i != 0 && str[i - 1] != ' ')
		{
			printf("%c", toupper(str[i]));
		}
		else
		{
			printf("%c", tolower(str[i]));
		}

		++i;
	}
	cout << endl;
}

//������ � ������� ������ ������� � ��������� 
void plainText(char * str)
{
	int i(0);
	while (i < strlen(str))
	{
		if (i != 0)
		{
			printf("%c", str[i]);
		}
		else
		{
			printf("%c", toupper(str[i]));
		}

		++i;
	}
	cout << endl;
}
void scan(char * str)
{
	int i(0);
	char c;
	while ((c = _getch()) != '.' && i < 79 && c != 13)
	{
		_putch(c);
		str[i] = c;
		++i;
	}

	cout << endl;
}
//������������ ����
//������������ ���� ������ ��������