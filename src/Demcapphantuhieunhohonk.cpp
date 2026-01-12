#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll T;
	cin >> T;
	while (T--){
		ll n, k;
		cin >> n >> k;
		vector<ll> A(n);
		for (ll i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A.begin(), A.end());
		ll cnt = 0;
		ll l = 0, r = 1;
		while (r < n){
			if (A[r]-A[l] < k){
				if (l != r){
					cnt += (r-l);
				}
				r++;
			}
			else{
				l++;
				if (l == r){
					r++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}