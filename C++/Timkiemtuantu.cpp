#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, X;
		cin >> n >> X;
		int A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		int tmp = -1;
		for (int i = 0 ; i < n; i++){
			if (A[i] == X){
				tmp = i+1;
				break;
			}
		}
		
		cout << tmp << endl;
	}
}