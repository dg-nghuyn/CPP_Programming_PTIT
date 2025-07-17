#include<bits/stdc++.h>
using namespace std;
int main (){
	int n, m, p;
	cin >> n >> m >> p;
	
	int A[55][55], B[55][55];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			cin >> B[i][j];
		}
	}
	
	int c[55][55];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			c[i][j] = 0;
			for (int k = 0; k < m; k++){
				c[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < p; j++){
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}	
}
