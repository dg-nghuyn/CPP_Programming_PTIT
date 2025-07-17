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
		
		int tmp = -1;
		for(int i = n-1; i > 0; i--){
			for(int j = i-1; j >= 0; j--){
				if(A[i] - A[j] > tmp){
					tmp = A[i] - A[j];
				}
			}
		}
		
		cout << tmp << endl;
	}
}