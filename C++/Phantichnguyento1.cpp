#include<bits/stdc++.h>
using namespace std;

/* ham Sang so nguyen to nhung bai nay khong can
vector<int> prime;

void Sangnguyento(int l){
	prime.resize(l+1, 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i < l; i++){
		if (prime[i]==0){
			for (int j = i*i; j < l; j+=i){
				prime[j] = 0;
			}
		}
	}
}
*/

void solve(int N){
	int count = 0;
	for (int i = 2; i <= sqrt(N); i++){
		if (N % i == 0){
			while (N % i == 0){
				count++;
				N /= i;
			}
		cout << i << " " << count << " ";
		count = 0;
		}
	}
	if (N != 1){
		cout << N << " " << "1" << endl;
	}
	else cout << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		solve (N);
	}
}
