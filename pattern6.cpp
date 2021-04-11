#include<iostream>
using namespace std;
int main()
{
	int i, j, n, c = 0;;
	cin >> n;
	for (i = n; i >= 1; i--)
	{
		for (j = 1;j <= i; j++)
		{
			cout << "*";

		}
		c = n-i;
		cout << endl;
		for(j=0;j<=c;j++)
		{
			cout << " ";
		}
	}
}
