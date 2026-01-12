#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	
	while (T--){
		int n, k;
		cin >> n >> k;
		
		int A[n+5];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		int cnt = 0;
		for (int i = 0; i < n-1; i++){
			for (int j = i+1; j < n; j++){
				if (A[i] + A[j] == k){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
