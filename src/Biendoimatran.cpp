#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int A[N][N];
		int h[N] = {0}, c[N] = {0}, sum = 0;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				cin >> A[i][j];
				sum += A[i][j];
				h[i] += A[i][j];
				c[j] += A[i][j];
			}
		}
		int max = 0;
		for (int i = 0; i < N; i++){
			if (max < h[i]){
				max = h[i];
			}
			if (max < c[i]){
				max = c[i];
			}
		}
		cout << max*N-sum << endl;
	}
}