#include<bits/stdc++.h>
using namespace std;
int main (){
	int N;
	cin >> N;
	int A[N][N];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> A[i][j];
		}
	}
	int M;
	cin >> M;
	int B[M][M];
	for (int i = 0; i < M; i++){
		for (int j = 0; j < M; j++){
			cin >> B[i][j];
		}
	}
	
	int C[N][N] = {0};
	for (int i = 0; i < N; i+= M){
		for (int j = 0; j < N; j+= M){
			for (int x = 0; x < M; x++){
				for (int y = 0; y < M; y++){
					C[i+x][j+y] = A[i+x][j+y]*B[x][y];
				}
			}
		}
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}