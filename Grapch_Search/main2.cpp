#include <iostream>

using namespace std;

int main()
{
	int matrix[10][10];
	int i(0), j(0), count(0);
	bool direction(true);


	while (count <= 100) {
		if (i <= 0 && i < 10 && j >= 0)
		{
			++i;
			--j;
			++count;
			matrix[i][j] = count;
		}
		else if (j <= 0 && j < 10 && i >= 0)
		{
			--i;
			++j;
			++count;
			matrix[i][j] = count;
		}
	}



	for (int i(0); i < 10; ++i)
	{
		for (int j(0); j < 10; ++j)
		{
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}

	cout << endl;

	return 0;
}