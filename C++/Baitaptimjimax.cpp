#include<bits/stdc++.h>
using namespace std;

void solve(int A[], int N){
	int max = -1, tmp1 = 0, tmp2 = 0;
	for (int i = 0; i < N-1; i++){
		for (int j = i+1; j < N; j++){
			if (A[i] < A[j] && (j-i) > max){
				max = j-i;
				tmp1 = i;
				tmp2 = j;
			}
		}
	}
	cout << A[tmp1] << " " << A[tmp2] << endl;
}

int main (){
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	solve(A, N);
	return 0;
}