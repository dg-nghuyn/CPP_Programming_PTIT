#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int k, n;
		cin >> k >> n;
		long long m = k*n;
		int A[m];
		for (int i = 0; i < m; i++){
			cin >> A[i];
		}
		sort(A, A+m);
		for(int j = 0; j < m; j++){
			cout << A[j] << " ";
		}
		cout << endl;
	}
}