#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll x, ll y){
	if (x > 0 && y == 0){
		return true;
	}
	else if (x == 0 && y > 0){
		return false;
	}
	else return false;
}

int main (){
	ll T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		vector<ll> A(n);
		for (ll i = 0; i < n; i++){
			cin >> A[i];
		}
		for (ll i = 0; i < n-1; i++){
			if (A[i+1] != 0 && A[i+1] == A[i]){
				A[i] *= 2;
				A[i+1] = 0;
			}
		}
		stable_sort(A.begin(), A.end(), cmp);
		for (ll i = 0; i < n; i++){
			cout << A[i] << " ";
		}
		cout << endl;
	}
	return 0;
}