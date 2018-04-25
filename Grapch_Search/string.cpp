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

		cout << "Для преобразования строки в заглавные буквы нажмите : 1" << endl;
		cout << "Для преобразования строки в нижний регистр нфжмите : 2" << endl;
		cout << "Для преобразования строки с Заглавной Буквы нажмите : 3" << endl;
		cout << "Для преобразования строки в первый символ в нижнем регистре нажмите : 4" << endl;
		cout << "Для преобразования строки как в обычном предложении нажмите : 5" << endl;
		cout << "Для выхода нажмите : f" << endl;
		cout << endl;
		cout << "Введите необходимое действие : ";
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


//СТРОКА ЗАГЛАВНЫМИ БУКВАМИ
void upText(char * str)
{
	for (int i(0); i < strlen(str); ++i)
	{
		printf("%c", toupper(str[i]));
	}
	cout << endl;
}


//Сделать функцию петающею символы в нижнем регистре
void lowText(char * str)
{

	for (int i(0); i < strlen(str); ++i)
	{
		printf("%c", tolower(str[i]));
	}
	cout << endl;
}

//Сделать функцию печатающею начальные символы слова в верхнем регистре
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
//Сделать функцию печатающею начальные символы слова в нижнем регистре
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

//Печать в обычном режиме начиная с заглавной 
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
//Организовать меню
//Организовать цикл работы програмы