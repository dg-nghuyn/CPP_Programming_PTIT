#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void sang(){
	for (int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	
	prime[0] = prime[1] = 0;
	
	for (int i = 2; i*i <= 1000000; i++){
		if(prime[i]){
			for (int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int cacchusnt(long long a){
	while (a != 0){
		int tmp = a%10;
		if(prime[tmp] == 0){
			return 0;
		}
		a /= 10;
	}
	return 1;
}

int tongchusnt(long long a){
	int sum = 0;
	while(a != 0){
		int tmp = a % 10;
		sum += tmp;
		a /= 10;
	}
	return prime[sum];
}

int nguoc(long long a){
	long long res = 0;
	while (a != 0){
		int tmp = a % 10;
		res = res * 10 + tmp;
		a /= 10;
	}
	return prime[res];
}

int main (){
	long long b = 1000001;
	sang();
	for (long long i = 2; i <= b; i++){
		if ((prime[i] == 1) && (nguoc(i) == 1) && (tongchusnt(i) == 1) && (cacchusnt(i) == 1)){
			cout << i << endl;
		}
	}
}