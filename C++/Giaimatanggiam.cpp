#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
	string res = "";
	int n = s.size();
	stack<int> so;
	
	for (int i = 0; i <= n; i++){
		so.push(i+1);
		if (i == n || s[i] == 'I'){
			while (!so.empty()){
				res += to_string(so.top());
				so.pop();
			}
		}
	}
	cout << res << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string s;
		getline(cin, s);
		solve(s);
	}
	return 0;
}