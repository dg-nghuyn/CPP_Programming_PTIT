#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n, ll m){
	ll sum = (1+n)*n/2;
	ll solon = (sum+m)/2;
	ll sobe = (sum-m)/2;
	if((__gcd(solon, sobe) == 1) && (solon+sobe == sum)){
		cout << "Yes\n";
	}
	else cout << "No\n";
}

int main (){
	int T;
	cin >> T;
	
	while (T--){
		ll n, m;
		cin >> n >> m;
		solve(n, m);
	}
}