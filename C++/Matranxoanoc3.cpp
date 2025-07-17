#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int n, m, k;
		cin >> n >> m >> k;
		
		int A[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> A[i][j];
			}
		}
		
		int B[n*m], cnt = 0;
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		while (h1 <= h2 && c1 <= c2){
			for (int i = c1; i <= c2; i++){
				B[cnt++] = A[h1][i];
			}
			h1++;
			if (h1 > h2) break;
			
			for (int i = h1; i <= h2; i++){
				B[cnt++] = A[i][c2];
			}
			c2--;
			if (c1 > c2) break;
			
			for (int i = c2; i >= c1; i--){
				B[cnt++]= A[h2][i];
			}
			h2--;
			if (h1 > h2) break;
			
			for (int i = h2; i >= h1; i--){
				B[cnt++] = A[i][c1];
			}
			c1++;
		}
		
		cout << B[k-1] << endl;
	}
}