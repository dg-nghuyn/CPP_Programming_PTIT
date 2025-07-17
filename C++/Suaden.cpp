#include<bits/stdc++.h>
using namespace std;
int main (){
	int N, K, B;
	cin >> N >> K >> B;
	vector<int> A(N+1, 0);
	for (int i = 1; i <= B; i++){
		int x;
		cin >> x;
		A[x] = 1;
	}
	
	int tmp = 0;
	for (int i = 1; i <= K; i++){
		if (A[i] == 1){
			tmp++;
		}
	}
	
	int res = tmp;
	for (int i = K+1; i <= N; i++){
		tmp += A[i]-A[i-K];
		res = min(res, tmp);
	}
	
	cout << res << endl;
}