#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int A[n*n];
	for (int i = 0; i < n*n; i++){
		cin >> A[i];
	}
	sort(A, A+n*n);
	
	int B[n][n];
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1, tmp = 0;
	while(h1 <= h2 && c1 <= c2){
		for (int i = c1; i <= c2; i++){
			B[h1][i] = A[tmp++];
//			cout << B[h1][i] << " ";
		}
		h1++;
		if (h1 > h2) break;
		
		for (int i = h1; i <= h2; i++){
			B[i][c2] = A[tmp++];
//			cout << B[i][c2] << " ";
		}
		c2--;
		if (c1 > c2) break;
		
		for (int i = c2; i >= c1; i--){
			B[h2][i] = A[tmp++];
//			cout << B[h2][i] << " ";
		}
		h2--;
		if (h1 > h2) break;
		
		for (int i = h2; i >= h1; i--){
			B[i][c1] = A[tmp++];
//			cout << B[i][c1] << " ";
		}
		c1++;
	}
	
//	cout << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
}