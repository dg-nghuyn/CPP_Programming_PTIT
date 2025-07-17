#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, m;
		cin >> n >> m;
		
		ll A[n], B[m];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		for (int j = 0; j < m; j++){
			cin >> B[j];
		}
		
		sort(A, A+n);
		sort(B, B+m);
		
		cout << A[n-1]*B[0] << endl;
	}
}