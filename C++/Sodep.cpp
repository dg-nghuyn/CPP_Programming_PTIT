#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int check1 = 1, check2 = 1;
	int l = s.length();
	
	for (int i = 0; i < l; i++){
		if (s[i] % 2 == 1){
			check1 = 0;
			break;
		}
	}
	
	for (int i = 0; i <= l/2; i++){
		if (s[i] != s[l-1-i]){
			check2 = 0;
			break;
		}
	}
	
	if (check2 == 0){
		cout << "NO" << endl;
	}
	else{
		if (check1 == 0){
			cout << "NO" << endl;
		}
		else cout << "YES" << endl;
	}
}

int main (){
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--){
		string s;
		getline(cin, s);
		solve(s);
	}
}
