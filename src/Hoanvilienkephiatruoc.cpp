#include<bits/stdc++.h>
using namespace std;

void solve(int A[], int N){
	int tmp = 0;
	for (int i = N-1; i > 0; i--){
		if (A[i-1] > A[i]){
			tmp = i-1;
			break;
		}
	}
	int max = A[tmp+1], flag = tmp+1;
	for (int i = N-1; i > tmp+1; i++){
		if (max < A[i] && A[i] < A[tmp]){
			max = A[i];
			flag = i;
		}
	}
	int res = A[tmp];
	A[tmp] = A[flag];
	A[flag] = res;
	
	for (int i = 0; i <= tmp; i++){
		cout << A[i] << " ";
	}
	for (int i = N-1; i > tmp; i--){
		cout << A[i] << " ";
	}
	cout << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int A[N];
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		solve(A, N);
	}
}