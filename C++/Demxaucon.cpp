#include<bits/stdc++.h>
using namespace std;

void solve(string &S, int &k){
	int res = 0;
	for (int i = 0; i < S.size(); i++){
		int cnt[256] = {0}, dem = 0;
		for (int j = i; j < S.size(); j++){
			if (cnt[S[j]] == 0){
				dem++;
			}
			if (dem == k){
				res++;
			}
			else if (dem > k) break;
			cnt[S[j]]++;
		}
	}
	cout << res << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		string S;
		int k;
		cin >> S >> k;
		solve(S, k);
	}
}