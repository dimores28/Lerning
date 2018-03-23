//#include "Grapch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

struct Tip {
	int vozrast;
	string Name;
};


istream& operator >> (istream &is, Tip &t)
{
	cout << "Имя: ";
	is >> t.Name;
	cout << "Возраст: ";
	is >> t.vozrast;

	return is;
}

ostream& operator<<(ostream & os, Tip & t)
{
	os << t.Name << " " << t.vozrast;
	return os;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Tip numb;
	Tip *arr1 = new Tip[1];
	Tip *arr2 = new Tip[1];
	int size(1);
	int comand(1);

	for (cin >> numb, arr2[0] = numb; ;) {
		
		
			for (int i(0); i < size; ++i) {
				arr1[i] = arr2[i];
			}

			

			arr2 = new Tip[size +1];

			for (int i(0); i < size - 1; ++i) {
				arr2[i] = arr1[i];
				
			}
			
			arr2[size - 1] = numb;

			for (int j(0); j < size; ++j) {
				cout << j <<"-й элементы сруктуры: " << arr2[j] << endl;
			}

			++size;
			arr1 = new Tip[size];

		

		cout << "Ввести еще данные - 1; выход - 0\n";
		cin >> comand;

		if (comand > 0) {
			cin >> numb;
		}
		else
		{
			break;
		}

		  
		
	}

	
	
	
	
	




	
	return 0;
}

/*

cout << "Для выхода введите отрицательное число!\n";
cout << "Введите целое число: ";

for (cin >> number; ; )
{
	if (number >= 0)
	{

		arr.push_back(number);

		for (auto i : arr)
		{
			cout << i << " ";
		}

		cout << endl;
	}
	else
	{
		return 0;
	}

	cout << "Введите целое число: ";
	cin >> number;
}*/
