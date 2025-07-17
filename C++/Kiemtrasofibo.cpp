#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve (ll n){
	ll fibo[93];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int flag = 0;
	for (int i = 0; i <= 92; i++){
		if (n == fibo[i]){
			flag = 1;
			break;
		}
	}
	if (flag == 1){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		solve(n);
	}
}
