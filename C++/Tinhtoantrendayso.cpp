#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void solve(vector<int> &A, int &n){
	int ucln = A[0];
	for (int i = 0; i < n; i++){
		ucln = (__gcd(ucln, A[i]));
	}
	
	ll res = 1;
	for (int j = 0; j < n; j++){
		res = res * A[j] % MOD;
	}
	
	ll result = 1;
	while (ucln != 0){
		result = result * res % MOD;
		ucln--;
	}
	
	cout << result << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		vector<int> A(n);
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		solve(A, n);
	}
}