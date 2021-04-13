#include<iostream>
using namespace std;
int main()
{
	int i, j, n,c=1;
	cin >> n;
	for (i = n / 2 + 1; i >= 1; i--)
	{
		for (j = 1; j <= i - 1; j++)
		{
			cout << "*";
		}
		
		for (j = 1; j <= c; j++)
		{
			cout << " ";
		}
		for (j = 1; j <= i - 1; j++)
		{
			cout << "*";
		}
		c= c + 2;
		cout << endl;
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (j = n; j >  2 * i; j--)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
