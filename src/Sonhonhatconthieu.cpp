#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int A[n];
		set<int> B;
		for (int i = 0; i < n-1; i++){
			cin >> A[i];
			B.insert(A[i]);
		}
		
		int res = 0;
		for (int i = 1; i <= n; i++){
			if (B.find(i) == B.end()){
				res = i;
				break;
			}
		}
		cout << res << endl;
	}
}