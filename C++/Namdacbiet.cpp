#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	int x = 0, y = 0;
	y = n % 2020;
	if (((n-y)/2020) >= y){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		solve(n);
	}
}
