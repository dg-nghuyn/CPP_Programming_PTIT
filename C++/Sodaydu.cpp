#include<bits/stdc++.h>
using namespace std;

int check(string &s){
	if (s[0] == '0') return 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] < 48 || s[i] > 57){
			return 0;
		}
	}
	return 1;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		set<int> xau;
		if (check (s) == 0) cout << "INVALID\n";
		else{
			for (char c:s){
				xau.insert(c);
			}
			if (xau.size() == 10){
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
	}
}