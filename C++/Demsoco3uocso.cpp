#include<iostream>
#define ll long long
#include<math.h>
using namespace std;

int check (ll a){
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
	ll x = sqrt(n);
	if (x*x < n){
		x++;
	}
	ll count = 0;
	for (ll i = 2; i < x; i++){
		if (check(i) == 1){
//			cout << i*i << " ";
			count++;
		}
	}
	cout << count << endl;
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

