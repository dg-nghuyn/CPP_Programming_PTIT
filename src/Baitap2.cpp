#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool prime[1000005];

void sangnguyento(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i  <= 1000000; i++){
		if(prime[i] == 1){
			for(int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

void solve(ll L, ll R){
	ll a = sqrt(L);
	ll b = sqrt(R);
	ll cnt = 0;
	if (a*a < L) a++;
	for (ll i = a; i <= b; i++){
		if(prime[i] == 1){
			cout << i*i << " ";
		}
	}
	cout << endl;
}

int main (){
	sangnguyento();
	int T;
	cin >> T;
	while (T--){
		ll R;
		cin >> R;
		ll L = 1;
		solve(L, R);
	}
}