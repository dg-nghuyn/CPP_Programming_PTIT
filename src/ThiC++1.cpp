#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		ll A[n];
		int B[1000005];
		ll cnt = 0;
		for (ll i = 0; i < n; i++){
			cin >> A[i];
			ll res = A[i];
			while (res != 0){
				int tmp = res % 10;
				if (tmp % 2 == 0){
					B[cnt++] = tmp;
				}
				res /= 10; 
			}
		}
		sort(B, B+cnt);
		if (cnt != 0){
			for (int i = 0; i < cnt; i++){
				cout << B[i] << " ";
			}
			cout << endl;
		}
		else cout << "-1" << endl;
	}
}