#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo[93];

void fibo92(){
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

void solve(int A[1005], int n){
	fibo92();
	int tmp = 0, B[1005];
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= 92; j++){
			if (A[i] == fibo[j]){
				B[tmp] = A[i];
				tmp++;
				break;
			}
		}
	}
	for (int i = 0; i < tmp; i++){
		cout << B[i] << " ";
	}
	cout << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int A[n+5];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		solve(A, n);
	}
}
