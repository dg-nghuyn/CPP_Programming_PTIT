#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		ll a[n+5];
		for (ll i = 0; i < n; i++){
			cin >> a[i];
		}
		sort (a, a+n);
		cout << a[n-1] << endl;
	}
}
