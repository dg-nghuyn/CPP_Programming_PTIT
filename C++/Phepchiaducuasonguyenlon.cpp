#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string &N, ll M){
	ll tmp = 0;
	for (int i = 0; i < N.size(); i++){
		tmp = (tmp*10 + (N[i]-'0')) % M;
	}
	cout << tmp << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		string N;
		cin >> N;
		ll M;
		cin >> M;
		solve(N, M);
	}
}