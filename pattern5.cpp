#include <iostream>
using namespace std;
int main()
{
	int i, j,n,s,t;
	cin >> n;
	s = n+n;
	t = n + 1;
	for(i=1;i<=n;i++)
	{
		for (j = 1; j <=(n+1); j++)
		{
			if ((n+1) - j >= i)
				cout << " ";
			else
				cout << "*";
			
		}
		for ( j =t ; j <= s; j++)
		{
			if (j - i <= n - 1)
				cout << "*";
			else
				cout << " ";
		}
		

		cout << endl;
	}
}
