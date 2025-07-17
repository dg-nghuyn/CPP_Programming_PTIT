#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long
using namespace std;

void solve(int n, ll a[100005]){
	sort(a, a+n);
	int tmp = abs(a[0]-a[1]);
	for (int i = 1; i < n-1; i++){
		if (abs(a[i]-a[i+1]) < tmp){
			tmp = abs(a[i]-a[i+1]);
		}
	}
	cout << tmp << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		ll A[N+5];
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		solve(N, A);
	}
}
