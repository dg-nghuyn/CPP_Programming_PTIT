#include<bits/stdc++.h>
using namespace std;

int N, M;
char A[25][25];
int x[4] = {0, 1, 0, -1};
int y[4] = {1, 0, -1, 0};

int check(int i, int j){
	if (A[i][j] == 'X'){
		return 0;
	}
	else{
		for (int k = 0; k < 4; k++){
			int i1 = i + x[k], j1 = j + y[k];
			if (i1 >= 0 && i1 < N && j1 >= 0 && j1 < M){
				if (A[i1][j1] == 'O'){
					return 0;
				}
			}
		}
		return 1;
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		cin >> N >> M;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				cin >> A[i][j];
			}
		}
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				if (check(i, j) == 1){
					A[i][j] = 'X';
				}
			}
		}
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
	}
}