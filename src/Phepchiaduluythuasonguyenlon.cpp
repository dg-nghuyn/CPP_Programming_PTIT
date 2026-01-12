#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string &a, ll &b, ll &M){
	ll tmp = 0;
	for (ll i = 0; i < a.size(); i++){
		tmp = (tmp*10+(a[i]-'0'))%M;
	}
//	cout << tmp << endl;
	
	ll res = 1;
	tmp %= M;
	while (b > 0){
		if (b % 2 == 1){
			res = (res * tmp) % M;
		}
		tmp = (tmp*tmp) % M;
		b /= 2;
	}
	
	cout << res << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string a;
		cin >> a;
		ll b, M;
		cin >> b >> M;
		solve(a, b, M);
	}
}

/*
3 % 4 == 3
(3^3) % 4
= (3*3*3) % 4
= (3%4)*(3%4)
*/