#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, Q, A[10005];
		cin >> n >> Q;
		for (int i = 1; i <= n; i++){
			cin >> A[i];
		}
		while (Q--){
			int L, R;
			cin >> L >> R;
			int sum = 0;
			for (int i = L; i <= R; i++){
				sum += A[i];
			}
			cout << sum << endl;
		}
	}
}
