#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	
	while (T--){
		int n, m;
		cin >> n >> m;
		
		int A[n], B[m];
		
		set<int> C, D;;
		
		for (int i = 0; i < n; i++){
			cin >> A[i];
			C.insert(A[i]);
		}
		for (int j = 0; j < m; j++){
			cin >> B[j];
			C.insert(B[j]);
		}
		
		int a = 0, b = 0;
		while (a < n && b < m){
			if (A[a] == B[b]){
				D.insert(A[a]);
				a++, b++;
			}
			else if (A[a] < B[b]){
				a++;
			}
			else b++;
		}
		for (int k : C){
			cout << k << " ";
		}
		cout << endl;
		
		for (int h : D){
			cout << h << " ";
		}
		cout << endl;
	}
}