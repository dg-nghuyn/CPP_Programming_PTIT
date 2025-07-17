#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort (A, A+n);
		cout << A[n-1] << endl;
	}
}
