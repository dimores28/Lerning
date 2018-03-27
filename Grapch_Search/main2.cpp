#include <iostream>
#include <iomanip>

using namespace std;

class Array {
public:
	Array();
	void Out();
private:
	static const int n = 10;
	int A[n][n];
};

Array::Array()
{
	int Number = 0;
	const int maxNumber = n * n;

	for (int i = 0; i < n; i++) {
		int i2 = i;
		if (i % 2)
			for (int j = 0; j <= i; j++, i2--) {
				A[i2][j] = ++Number;
				A[n - 1 - i2][n - 1 - j] = (maxNumber - Number + 1);
			}

		else
			for (int j = 0; j <= i; j++, i2--) {
				A[j][i2] = ++Number;
				A[n - 1 - j][n - 1 - i2] = (maxNumber - Number + 1);
			}
	}
}

void Array::Out()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(5) << A[i][j];
		cout << endl;
	}
}

int main()
{
	Array A;
	A.Out();
	return 0;
}