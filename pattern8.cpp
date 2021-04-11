#include<iostream>
using namespace std;
int main()
{
	int i, j, n,c=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		c = n - i;
		for (j = 1; j <= c; j++)
			cout << " ";
		for (j = 1; j <= i; j++)
			cout << "*" << " ";
		cout << endl;
	 }
	}
