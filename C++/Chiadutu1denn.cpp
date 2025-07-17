#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int solve(int n, ll k){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i % k;
	}
	return sum;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		ll K;
		cin >> N >> K;
		cout << solve(N, K) << endl;
	}
}
