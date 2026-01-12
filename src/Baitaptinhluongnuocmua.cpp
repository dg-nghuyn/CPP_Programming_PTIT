#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(vector<ll> A, ll N){
	ll res = 0;
	for (ll i = 1; i < N-1; i++){
		ll left = A[i];
		for (ll j = 0; j < i; j++){
			left = max(left, A[j]);
		}
		ll right = A[i];
		for (ll j = i+1; j < N; j++){
			right = max(right, A[j]);
		}
		res += (min(left, right)-A[i]);
	}
	return res;
}

int main (){
	ll N;
	cin >> N;
	vector<ll> A(N);
	for (ll i = 0; i < N; i++){
		cin >> A[i];
	}
	cout << solve(A, N);
}