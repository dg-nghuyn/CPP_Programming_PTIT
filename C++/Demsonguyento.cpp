#include<bits/stdc++.h>
using namespace std;

bool prime[1000005];

void sangnguyento(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i  <= 1000000; i++){
		if(prime[i] == 1){
			for(int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main (){
	int T;
	cin >> T;
	sangnguyento();
	while (T--){
		int L, R;
		cin >> L >> R;
		int cnt = 0;
		for(int i = L; i <= R; i++){
			if(prime[i] == 1){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}