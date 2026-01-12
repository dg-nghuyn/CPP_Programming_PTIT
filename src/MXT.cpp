#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> nt(1000001);
void sang(){
	for (ll i = 0; i <= 1000000; i++){
		nt[i] = 1;
	}
	nt[0] = nt[1] = 0;
	for (ll i = 2; i*i <= 1000000; i++){
		if (nt[i]){
			for (ll j = i*i; j < 1000000; j+=i){
				nt[j] = 0;
			}
		}
	}
}

void pt(ll n){
	for (ll i = 2; i*i <= n; i++){
		while (n%i == 0 && nt[i]){
			cout << i << " ";
			n/=i;
		}
	}
	if (n!=1){
		cout << n;
	}
}

int main (){
	int tc;
	cin >> tc;
	sang();
	while (tc--){
		ll n;
		cin >> n;
		pt(n);
		cout << endl;
	}
	return 0;
}