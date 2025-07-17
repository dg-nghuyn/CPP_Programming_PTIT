#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll bcnn(int a, int b){
	ll res = 1LL * a/(__gcd(a, b))*b;
	return res;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int X, Y, Z, N;
		cin >> X >> Y >> Z >> N;
		
		ll BCNN = bcnn(bcnn(X, Y), Z);
		ll dau = (ll)pow(10, N-1);
		ll cuoi = (ll)pow(10, N);
		
		ll res = (dau+BCNN-1)/BCNN * BCNN;
		
		if (res < cuoi) cout << res << endl;
		else cout << "-1" << endl;
	}
}