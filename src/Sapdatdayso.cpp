#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int n, m;
		cin >> n >> m;
		
		int A1[n], A2[m];
		int B[1000005] = {0};

		for (int i = 0; i < n; i++){
			cin >> A1[i];
			B[A1[i]]++;
		}
		sort(A1, A1 + n);
		
		for (int j = 0; j < m; j++){
			cin >> A2[j];
		}
		
		for (int j = 0; j < m; j++){
			if (B[A2[j]] != 0){
				for (int k = 1; k <= B[A2[j]]; k++){
					cout << A2[j] << " "; 
				}
				B[A2[j]] = 0;
			}
		}
		
		for (int i = 0; i < n; i++){
			if(B[A1[i]] != 0){
				cout << A1[i] << " ";
			}
		}
		cout << endl;
	}
}
/*
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3
*/