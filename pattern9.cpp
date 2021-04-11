#include<iostream>
using namespace std;
int main()
{
	int i, j, c=0, n,s=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = n - i;
		for (j = 1; j <= c; j++)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout<<" ";
		}
		s = n - i;
		for (j = 1; j <= s; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
