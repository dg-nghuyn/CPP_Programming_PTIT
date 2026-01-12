#include<bits/stdc++.h>
using namespace std;
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
		sort(A.begin(), A.end());
		vector<int> B(n);
		int cnt = 0;
		for (int i = 0; i < n; i+=2){
			B[i] = A[cnt++];
		}
		for (int i = 1; i < n; i+=2){
			B[i] = A[cnt++];
		}
		for (auto x: B){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}