#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		ll n, k;
		cin >> n >> k;
		
		ll A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		ll tmp = A[0]
		for (int i = 0; i < k; i++){
			if (tmp < A[i]){
				tmp = A[i];
			}
		}
		cout << tmp << " ";
		
		ll a = 1, b = k;
		while(b <= n-1){
			
			a++;
			b++;
		}
	}
}