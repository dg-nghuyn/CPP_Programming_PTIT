#include<bits/stdc++.h>
using namespace std;

void solve(int N, int P){
	int x = 0;
	int tmp = P;
	
	while (tmp <= N){
		x += N/tmp;
		if(tmp > N/P) break;
		tmp*=P;
	}
	cout << x << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N, P;
		cin >> N >> P;
		solve(N, P);
	}
}