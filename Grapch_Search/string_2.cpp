//isupper(str[0]);
//_tolower(str[0]);

#include <iostream>
#include <string>

using namespace std;
void lower(string &str);
void upper(string &str);

int main()
{

	string str = "ajksd akjf as kal f";
	upper(str);

	return 0;
}

void lower(string &str)
{
	for (auto s : str)
	{
		if (isupper(s))
		{
		printf("%c", _tolower(s));
		}
	}
}

void upper(string &str)
{
	for (auto s : str)
	{
		if (!isupper(s))
		{
			printf("%c", toupper(s));
		}
	}
}