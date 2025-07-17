#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(string &s){
	int l = s.size();
	bool flag = 0;
	for (int i = l-1; i > 0; i--){
		if (s[i] < s[i-1]){
			flag = 1;
			int max = i;
			for (int j = i; j < l; j++){
				if (s[j] < s[i-1] && s[j] > s[max]){
					max = j;
				}
			}
			swap(s[i-1], s[max]);
			break;
		}
	}
	if (flag == 0){
		cout << -1 << endl;
	}
	else{
		cout << s << endl;
	}
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