#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	long long tmp = 0, sum = 0;
	int i = 0, j = 0;
	
	for (i = 0; i < s.size(); i++){
		if (s[i] >= '0' && s[i] <= '9'){
			tmp = s[i]-'0';
			for (int j = i+1; j < s.size(); j++){
				if (s[j] >= '0' && s[j] <= '9'){
					tmp = tmp * 10 + (s[j]-'0');
					i = j;
				}
				else break;
			}
		}
		sum += tmp;
		tmp = 0;
	}
	cout << sum << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string s;
		cin >> s;
		solve(s);
	}
}