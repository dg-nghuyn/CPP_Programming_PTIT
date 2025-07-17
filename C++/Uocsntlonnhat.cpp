#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int check(ll a){
	if (a < 2){
		return 0;
	}
	else{
		for (ll i = 2; i <= sqrt(a); i++){
			if (a % i == 0){
				return 0;
			}
		}
		return 1;
	}
}

void solve(ll n){
	ll res = 1;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			while (n % i == 0){
				n /= i;
			}
			if (check(i) == 1){
				res = i;
			}
		}
	}
	if (n != 1){
		if (check(n) == 1){
			res = n;
		}
	}
	cout << res << endl;
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
