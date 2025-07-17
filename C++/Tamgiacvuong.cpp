#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<ll> A, int N){
	unordered_set<ll> s;
	for (int i = 0; i < N; i++){
		s.insert(A[i]*A[i]);
	}
	
	for (int i = 0; i < N-1; i++){
		for (int j = i+1; j < N; j++){
			ll c = A[i]*A[i] + A[j]*A[j];
			if (s.find(c) != s.end()){
				return true;
			}
		}
	}
	return false;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		vector<ll> A(N);
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		sort(A.begin(), A.end());
		if (check(A, N) == 1){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}