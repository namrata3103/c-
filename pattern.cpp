#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n/2+1; i++)
	{
		for (j = 1; j <= n/2+1; j++)
		{
			if ((i - j) >= 0)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}

	for (i = n/2; i >=1; i--)
	{
		for (j = 1; j <= n / 2 + 1; j++)
		{
			if ((i - j) >= 0)
				cout << "*";
			else
				cout << " ";

		}
	
		cout << endl;
	}
}

