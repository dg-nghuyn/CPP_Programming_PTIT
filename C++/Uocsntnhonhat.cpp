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
	cout << "1" << " ";
	for (ll i = 2; i <= n; i++){
		if (check (i) == 1){
			cout << i << " ";
		}
		else{
			for (ll j = 2; j <= sqrt(i); j++){
				if (i % j == 0){
					if (check(j) == 1){
						cout << j << " ";
						break;
					}
					else continue;
				}
			}
		}
	}
	cout << endl;
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
