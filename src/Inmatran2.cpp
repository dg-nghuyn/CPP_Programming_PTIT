#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int m = 4*N, A[m][m];
		
		int cnt = 1;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				A[i][j] = cnt++;
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
		
		int a = 2*N, B[a], C[a], cnt1 = 0, cnt2 = 0;
		int c1 = 0, c2 = m-2, h1 = 0, h2 = m-2;
		cout << c1 << " "
		while (c1 <= c2 && h1 <= h2){
			for (int i = h1; i <= h2; i++){
				A[i][c1] = B[cnt1++];
			}
			c1+=2;
			if (h1 > h2) break;
			
			for (int i = c1; i <= c2; i++){
				A[h2][i] = B[cnt1++];
			}
			h2-=2;
			if (h1 > h2) break;
			
			for (int i = h2; i >= h1; i--){
				A[i][c2] = B[cnt1++];
			}
			c2-=2;
			if (c1 > c2) break;
			
			for (int i = c2; i >= c1; i--){
				A[h1][i] = B[cnt1++];
			}
			h1+=2;
		}
		
		for (int i = 0; i < cnt1; i++){
			cout << B[i] << " ";
		}
		cout << endl;
	}
}