#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == n || j == 1 || j == i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
