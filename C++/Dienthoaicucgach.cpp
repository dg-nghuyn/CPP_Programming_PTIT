#include<bits/stdc++.h>
using namespace std;

int banphim(char c){
	if (c >= 'a' && c <= 'c'){
		return 2;
	}
	else if (c >= 'd' && c <= 'f'){
		return 3;
	}
	else if (c >= 'g' && c <= 'i'){
		return 4;
	}
	else if (c >= 'j' && c <= 'l'){
		return 5;
	}
	else if (c >= 'm' && c <= 'o'){
		return 6;
	}
	else if (c >= 'p' && c <= 's'){
		return 7;
	}
	else if (c >= 't' && c <= 'v'){
		return 8;
	}
	else if (c >= 'w' && c <= 'z'){
		return 9;
	}
}

void solve(string &s){
	string a = "";
	for (int i = 0; i < s.size(); i++){
		a += banphim(s[i]);
	}
	
	int c = 0, b = a.size()-1;
	bool flag = 1;
	while (c <= b){
		if (a[c] != a[b]){
			flag = 0;
			break;
		}
		c++;
		b--;
	}
	if (flag == 1){
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main (){
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		for (int i = 0; i <= s.size(); i++){
			s[i] = tolower(s[i]);
		}
		solve(s);
	}
}