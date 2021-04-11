#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	for (i = (n / 2) + 1; i >= 1; i--)
	{
		for (j = 1; j <= n / 2 + 1; j++)
		{
			if (i - j <= 0)
				cout << "*";
			else
				cout << " ";
		}
		for (j = n; j >= (n / 2) + 2; j--)
		{
			if (j - i >= (n / 2) + 1)
				cout << "*";
			else
				cout << " ";
		}

		cout << endl;
	}
	for (i = (n/2)+2; i <= n; i++)
	{
		for (j = 1; j <= (n/2)+1; j++)
		{
			if ((i- j) <= (n / 2))
				cout << "*";
			else
				cout << " ";
		}
		for (j = n; j >= (n/2)+2; j--)
		{
			if (j - i <n/2 && j-i>0 )
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
