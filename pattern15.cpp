#include<iostream>
using namespace std;
int main()
{
	int i, j, n,c=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j<= n - i; j++)
		{
			cout << " ";
		}
		for (j = c; j >0; j--)
		{
			cout << n-j ;
		}
		cout << "0";
		for (j = 0; j <  c; j++)
		{
			cout << n - (j + 1);
		}
		c++;
		cout << endl;
	}
}
