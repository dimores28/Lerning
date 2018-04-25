#include <iostream>
#include <ctime>
#include <array>
#include "stack.h"

using namespace std;

const int SIZE(10);

float Random(int min, int max);
void printMatrix(float *matrix[], const int N, const int M);
float minElement(float *matrix[], const int N, const int M);
int stringRequiredElement(float *matrix[], const int N, const int M, float elem);
void swapRow(float *matrix[], const int N, const int M, const int a, const int b);

int main()
{
	setlocale(LC_ALL, "Russian");
	//srand((float)time(NULL));

	/*
	int a(0), b(0);
	int row(0);float min(0);
	float tempBuff[10];

	float** buff = new float*[10];

	for (int i(0); i < SIZE; ++i) {
		buff[i] = new float[SIZE];
	}

	cout << "Введите число А "; cin >> a;
	cout << "Введите число B "; cin >> b;
	//Заполнение матрици случайными числами
	for (int i(0); i < SIZE; ++i)
	{
		for (int j(0); j < SIZE; ++j)
		{
			buff[i][j] = Random(a, b);
		}
	}
	
	cout << "Сгенерированный массив вещественных чисел\n";
	printMatrix(buff, SIZE, SIZE);

	//Нахождение минимального елемента матрицы
	
	min = minElement(buff, SIZE, SIZE);
	cout << "Минимальный елемент: " << min << endl;
	

	swapRow(buff, SIZE, SIZE,0, stringRequiredElement(buff, SIZE, SIZE, min));

	printMatrix(buff, SIZE, SIZE);

	for (int i(0); i < SIZE; ++i) {
		  delete buff[i];
	}*/
	int a(1);
	Stack<int> x(10);
	Stack<double> y(10);
	x.Puch_Back(a);
	x.Puch_Back(2);
	x.Puch_Back(3);
	x.Puch_Back(4);

	for (int i(0); i <= x.End(); ++i)
	{
		cout << x.Pop_Back() << " ";
	}

	cout << endl;

	y.Puch_Back(a);
	y.Puch_Back(2.2);
	y.Puch_Back(3.3);
	y.Puch_Back(4.4);

	for (int i(0); i <= y.End(); ++i)
	{
		cout << y.Pop_Back() << " ";
	}

	cout << endl;

	return 0;
}



float Random(int min, int max) {
	return min + rand() % (max - min);
}
//Печать матрици
void printMatrix(float *matrix[], const int N, const int M)
{
	for (int i(0); i < N; ++i)
	{
		for (int j(0); j < M; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";
}

float minElement(float *matrix[], const int N, const int M)
{
	float min = matrix[0][0];

	for (int i(0); i < N; ++i)
	{
		for (int j(0); j < M; ++j)
		{
			if (min > matrix[i][j])
			{
				min = matrix[i][j];
			}
		}
	}

	return min;
}

int stringRequiredElement(float *matrix[], const int N, const int M, float elem)
{
	for (int i(0); i < N; ++i)
	{
		for (int j(0); j < M; ++j)
		{
			if (elem == matrix[i][j])
			{
				return i;
			}
		}
	}

	return -1;
}

void swapRow(float *matrix[], const int N, const int M, const int a, const int b)
{
	float *temp = new float[N];

	if (a == b) return;

	for (int i(0); i < M; ++i)
	{
		temp[i] = matrix[a][i];
	}

	for (int i(0); i < M; ++i)
	{
		matrix[a][i] = matrix[b][i];
	}

	for (int i(0); i < M; ++i)
	{
		matrix[b][i] = temp[i];
	}

	delete temp;

}