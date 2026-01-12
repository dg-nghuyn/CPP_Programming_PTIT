#include<bits/stdc++.h>
#define P 1000000007
#define MAX 1000
#define ll long long
using namespace std;

vector<ll> gt(MAX+1, 1), gtm(MAX+1, 1);

ll lt(ll x, ll y){
	ll res = 1;
	x = x% P;
	while (y > 0){
		if (y & 1){
			res = res*x % P;
		}
		y /= 2;
		x = (x*x) % P;
	}
	return res;
}

void init(){
	for (int i = 2; i <= MAX; i++){
		gt[i] = gt[i-1]*i % P;
	}
	gtm[MAX] = lt(gt[MAX], P-2);
	{
		for (int i = MAX-1; i >= 0; i--){
			gtm[i] = gtm[i+1]*(i+1) % P;
		}
	}
	gtm[0] = 1;
}

void solve(int &n, int &r){
	if (r > n){
		cout << 0 << endl;
	}
	else{
		long long res = 1;
		res = gt[n] * gtm[r] % P * gtm[n-r] % P;
		cout << res << endl;
	}
}

int main (){
	int T;
	cin >> T;
	init();
	while (T--){
		int n, r;
		cin >> n >> r;
		solve(n, r);
	}
	return 0;
}