#include<iostream>
#define ll long long
using namespace std;

void solve(int n, ll k){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i % k;
	}
	if (sum == k){
		cout << "1" << endl;
	}
	else cout << "0" << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		ll K;
		cin >> N >> K;
		solve(N, K);
	}
}
