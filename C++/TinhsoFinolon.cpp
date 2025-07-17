#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000007
using namespace std;

ll fibo[1001];
void Fibo(){
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= 1000; i++){
		fibo[i] = (fibo[i-1] +fibo[i-2])%MAX;
	}
}

void solve(int n){
	cout << fibo[n] << endl;
}


int main (){
	int T;
	cin >> T;
	Fibo();
	while (T--){
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}