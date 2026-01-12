#include <bits/stdc++.h> 
using namespace std; 
using ll = long long; 
const int MAX = 1e9 + 7; 

int main() { 
	int t ; 
	cin >> t; 
	while (t--) { 
		int n, x ; 
		cin >> n >> x; 
		int a[n] ; 
		for (int i = 0; i < n; i++) cin >> a[i];
		ll res = 0; 
		for (int i = 0; i < n; i++) { 
			ll tmp = a[i] ; 
			for (int j = 0; j < n - i - 1; j++) {
				tmp = (tmp * x) % MAX; 
			} 
			res = (res + tmp) % MAX; 
		} 
		cout << res << endl; 
	} 
}