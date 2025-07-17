#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, k;
		cin >> n >> k;
		int A[n*n];
		for (int i = 0; i < n*n; i++){
			cin >> A[i];
		}
		sort(A, A+n*n);
		cout << A[k-1] << endl;
	}
}