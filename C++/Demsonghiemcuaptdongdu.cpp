#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll b, p;
		cin >> b >> p;
		int cnt = 0;
		for (ll i = 1; i < p; i++){
			ll x = i;
			if ((x*x) % p == 1){
				x += p * (b/p);
				if (x > b) x-=p;
				cnt += (x-i)/p+1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}