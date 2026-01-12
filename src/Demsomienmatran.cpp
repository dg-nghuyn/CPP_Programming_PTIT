#include<bits/stdc++.h>
using namespace std;

int M, N;
bool A[105][105];
int x[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int y[8] = {1, 1, 1, 0, 0, -1, -1, -1};

void check(int i1, int j1){
	A[i1][j1] = 0;
	for (int k = 0; k < 8; k++){
		int i = i1+x[k], j = j1+y[k];
		if (i >= 0 && i < M && j >= 0 && j < N && A[i][j] == 1){
			check(i, j);
		}
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		cin >> M >> N;
		for (int i = 0; i < M; i++){
			for (int j = 0; j < N; j++){
				cin >> A[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < M; i++){
			for (int j = 0; j < N; j++){
				if (A[i][j] == 1){
					cnt++;
					check(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
}