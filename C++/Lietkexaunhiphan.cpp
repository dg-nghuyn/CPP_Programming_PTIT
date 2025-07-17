#include<bits/stdc++.h>
using namespace std;

int S[25];
bool ok;

void khoitao(int N){
	for(int i = 0; i < N; i++){
		S[i] = 0;
	}
	ok = true;
}

void sinh(int N){
	int tmp = N-1;
	while (tmp >= 0 && S[tmp] == 1){
		S[tmp] = 0;
		tmp--;
	}
	if(tmp >= 0){
		S[tmp] = 1;
	}
	else ok = false;
}

void in(int N){
	for(int i = 0; i < N; i++){
		cout << S[i];
	}
	cout << " ";
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		khoitao(N);
		while(ok){
			in(N);
			sinh(N);
		}
		cout << endl;
	}
}