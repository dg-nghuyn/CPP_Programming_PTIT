#include<bits/stdc++.h>
using namespace std;

bool prime[1000005];

void sangnguyento(){
	for (int i = 1; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i*i <= 1000000; i++){
		if(prime[i] == 1){
			for (int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int tongchuso(int a){
	int res = 0;
	while (a != 0){
		int tmp = a % 10;
		res += tmp;
		a/=10;
	}
	return res;
}

int tonguocso(int a){
	int sum = 0;
	for (int i = 2; i <= sqrt(a); i++){
		if(a % i == 0){
			while(a % i == 0){
				sum += tongchuso(i);
				a/=i;
			}
		}
	}
	if(a > 1) sum+=tongchuso(a);
	return sum;
}

int main (){
	int T;
	cin >> T;
	sangnguyento();
	while (T--){
		int N;
		cin >> N;
		if(prime[N] == 0 && tongchuso(N) == tonguocso(N)){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}