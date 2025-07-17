#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ucln (int a, int b){
	return __gcd(a, b);
}

void solve(vector<int> A, int n){
	
	int uocchung = 0;
	for (int i = 0; i < n-1; i++){
		uocchung = ucln(uocchung, abs(A[i+1]-A[i]));
	}
	
//	cout << uocchung << endl;
	
	int cnt = 0;
	for (int i = 1; i <= sqrt(uocchung); i++){
		if (uocchung % i == 0){
			cnt++;
			if (i != uocchung/i){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
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