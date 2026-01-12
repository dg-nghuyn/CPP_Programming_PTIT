#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n, d;
		cin >> n >> d;
		ll a[n+5];
		for (ll i = 0; i < n; i++){
			cin >> a[i];
		}
		for (ll i = d; i < n; i++){
			cout << a[i] << " ";
		}
		for (ll i = 0; i < d; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
