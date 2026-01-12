#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> v;
		map<int, int> m;
		int value = -1;
		bool check = false;
		for (int i = 0; i < n; ++i)
		{
			int x; cin >> x;
			v.push_back(x);
			m[x]++;
			if(m[x] > 1 && check == false)
			{
				value = x;
				check = true;
			}
		}
		if(check)
			cout << value << endl;
		else
			cout << "-1\n";
	}
}

