#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int A[N+5][N+5];
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				cin >> A[i][j];
			}
		}
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (i == 0 || i == N-1 || j == 0 || j == N-1){
					cout << A[i][j] <<  " ";
				}
				else cout << "  ";
			}
			cout << endl;
		}
	}
}