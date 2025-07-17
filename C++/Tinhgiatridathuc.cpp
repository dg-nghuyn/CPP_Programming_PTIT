#include<bits/stdc++.h>
#define ll long long 
const int MAX = 1e9+7;
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int n, x;
		cin >> n >> x;
		int P[n];
		for (int i = 0; i < n ; i++){
			cin >> P[i];
		}
		ll res = 0;
	
	    for (int i = 0; i < n; i++){
	    	ll tmp = P[i];
	    	for (int j = 0; j < n-1-i; j++){
	    		tmp = (tmp * x) % MAX;
			}
			res = (res + tmp) %  MAX;
		}
		cout << res << endl;
	}
}

/* res = 0
res = 0 + 4 = 4
res = 4 + 4 * 2 + 0 = 12
res = 12 + 8 * 2 + 2 = 38
res = 38 + 
*/
