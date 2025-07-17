#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		vector<ll> A(n);
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		vector<ll> B = A;
		for (int i = 1; i < n-1; i++){
			B[i] = A[i-1]*A[i+1];
		}
		B[0] = A[0] * A[1];
		B[n-1] = A[n-1]*A[n-2];
		for (int i = 0; i < n; i++){
			cout << B[i] << " ";
		}
		cout << endl;
	}
	return 0;
}