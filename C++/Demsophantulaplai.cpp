v#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		long N;
		cin >> N;
		long A[N+5], B[1000000];
		memset(B, 0, 1000000);
		for (long i = 0; i < N; i++){
			cin >> A[i];
			B[A[i]]++;
		}
		long sum = 0;
		for (long i = 0; i < N; i++){
			if (B[A[i]] > 1){
				sum += B[A[i]];
				B[A[i]] = 0;
			}
		}
		cout << sum << endl;
	}
}
