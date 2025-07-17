#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
	int l = s.size();
	long long tmp = 0, max = 0;
	for (int i = 0; i < l; i++){
		if (s[i] >= '0' && s[i] <= '9'){
			tmp = s[i]-'0';
			for (int j = i+1; j < l; j++){
				if (s[j] >= '0' && s[j] <= '9'){
					tmp = tmp * 10 + (s[j]-'0');
					i = j;
				}
				else break;
			}
			if (max < tmp){
				max = tmp;
			}
		}
		tmp = 0;
	}
	cout << max << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		solve(s);
	}
}