//#include "Grapch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int number(0);
	vector<int> arr;

	cout << "��� ������ ������� ������������� �����!\n";
	cout << "������� ����� �����: ";

	for (cin >> number; ; )
	{
		if (number >= 0)
		{
			
			arr.push_back(number);

			for(auto i : arr)
			{
				cout << i << " ";
			}

			cout << endl;
		}
		else
		{
			return 0;
		}

		cout << "������� ����� �����: ";
		cin >> number;
	}

	return 0;
}