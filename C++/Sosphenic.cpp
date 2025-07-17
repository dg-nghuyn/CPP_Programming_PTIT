#include<bits/stdc++.h>
using namespace std;

void solve(int N){
	int cnt = 0;
	for (int i = 2; i <= N; i++){
		if(N % i == 0){
			cnt++;
			N/=i;
			if (N % i == 0){
				cnt = 0;
				break;
			}
		}
	}
	if (N > 1) cnt++;
	cout << (cnt == 3 ? 1:0) << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		solve(N);
	}
}