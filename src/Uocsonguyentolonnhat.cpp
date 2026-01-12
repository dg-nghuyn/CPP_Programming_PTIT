#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll maxsnt(ll n){
	ll res = -1;
	while (n % 2 == 0){
		res = 2;
		n /= 2;
	}
	for (ll i = 3; i <= sqrt(n); i+=2){
		while (n % i == 0){
			res = i;
			n /= i;
		}
	}
	if (n > 2){
		res = n;
	}
	return res;
}

void solve(ll n){
	cout << maxsnt(n) << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		solve(n);
	}
}
