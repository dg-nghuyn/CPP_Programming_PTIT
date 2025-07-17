#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int N, K, X[MAX];

void Result(){
	for (int i = 1; i <= K; i++){
		cout << X[i];
	}
	cout << " ";
}

void Try(int i){
	for (int j = X[i-1]+1; j <= N-K+i; j++){
		X[i] = j;
		if (i == K){
			Result();
		}
		else{
			Try(i+1);
		}
	}
}

void solve(int N, int K){
	Try(1);
	cout << "\n";
}

int main (){
	int T;
	cin >> T;
	while (T--){
		cin >> N >> K;
		solve(N, K);
	}
}