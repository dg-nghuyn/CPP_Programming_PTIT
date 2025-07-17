#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
	if( n == 0 || n == 1)
		return false;
	else
	{
		for(long long i =2; i <= sqrt(n); i++)
		{
			if(n%i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		for(long long i=2; i<=sqrt(n); i++)
		{
			while(n%i ==0)
			{
				if(check(i))
					cout << i << " ";
				n/=i;
			}
		}
		if(n > 1 && check(n))
			cout << n << " ";
		cout << endl;
	}
}
