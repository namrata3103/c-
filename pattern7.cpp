#include<iostream>
using namespace std;
int main()
{
	int i, j, n,c=0;
	cin >> n;
	for (i = n; i >= 1; i--)
	{
		c = 2 * (n - i);
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

}
