#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < s.size(); i++){
		int res8 = 0, res24 = 0;
		for (int j = i; j < s.size(); j++){
			res8 = (res8*10 + (s[j]-'0')) % 8;
			res24 = (res24*10 + (s[j]-'0')) % 24;
			if (res8 == 0){
				cnt1++;
			}
			if (res24 == 0){
				cnt2++;
			}
		}
	}
	cout << cnt1 - cnt2 << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string S;
		cin >> S;
		solve(S);
	}
}