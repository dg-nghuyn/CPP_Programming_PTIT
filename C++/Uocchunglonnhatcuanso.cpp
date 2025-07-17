#include<bits/stdc++.h>
#define ll long long
using namespace std;

//ll gcd(ll a, ll b){
//	while (b > 0){
//		ll x = a%b;
//		a = b;
//		b = x;
//	}
//	return a;
//}

void solve(ll n){
	ll res = 1;
	for (ll i = 1; i <= n; i++){
		res = res * i / __gcd(res, i);
	}
	cout << res << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		solve (n);
	}
}
