#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll min(string s){
	ll res = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '6'){
			s[i] = '5';
		}
//		res = res * 10 + (s[i]-'0');
	}
	res = stoll(s);
	return res;
}

ll max(string s){
	ll res = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '5'){
			s[i] = '6';
		}
//		res = res * 10 + (s[i]-'0');
	}
	res = stoll(s);
	return res;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string x1, x2;
		cin >> x1 >> x2;
		cout << min(x1) + min(x2) << " "
		<< max (x1) + max(x2) << endl;
	}
}