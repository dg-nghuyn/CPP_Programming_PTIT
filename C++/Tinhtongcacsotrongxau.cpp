#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int n = s.length();
	long long sum = 0, tmp = 0;
	for (int i = 0; i < n; i++){
		if (isdigit(s[i])){
			tmp = tmp*10+s[i] - '0';
		}
		else{
			sum += tmp;
			tmp = 0;
		}
	}
	sum += tmp;
	cout << sum << endl;
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
}
