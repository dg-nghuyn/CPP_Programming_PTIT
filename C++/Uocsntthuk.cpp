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

void solve(ll n, ll k){
	int count = 0, flag = -1;
	for (ll i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			while(n % i == 0){
				count++;
				if (count == k){
					flag = i;
					break;
				}
				n/=i;
			}
		}
	}
	if (n != 1){
		count++;
		if (count == k){
			flag = n;
		}
	}
	cout << flag << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll n, k;
		cin >> n >> k;
		solve(n, k);
	}
}
