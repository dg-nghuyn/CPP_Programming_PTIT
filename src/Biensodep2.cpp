#include<bits/stdc++.h>
using namespace std;

bool check1(string &s){
	for (int i = 1; i <= 4; i++){
		if (s[i] <= s[i-1]){
			return 0;
		}
	}
	return 1;
}

bool check2(string &s){
	for (int i = 1; i <= 4; i++){
		if (s[i] != s[0]){
			return 0;
		}
	}
	return 1;
}

bool check3(string &s){
	if (s[0] == s[1] && s[0] == s[2] && s[3] == s[4]) return 1;
	else return 0;
}

bool check4(string &s){
	for (int i = 1; i <= 4; i++){
		if (s[i] != '6' && s[i] != '8'){
			return 0;
		}
	}
	return 1;
}

void check(string &s){
	if (check1(s) || check2(s) || check3(s) || check4(s)){
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string s;
		cin >> s;
		s.erase(0, 5);
		s.erase(3, 1);
		check(s);
	}
}