#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		vector<ll> A(n);
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		int res = 0;
		for (int i = 0; i < n; i++){
			for (int j = n-1; j >= i; j--){
				if (-i+j < res) break;
				if ( A[i] <= A[j]){
					res = max(-i+j, res);
				}
			}
		}
		cout << res << endl;
	}
}