#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		set<char> S;
		for (int i = 0; i < s.size(); i++){
			S.insert(s[i]);
		}
//		for (auto i = S.begin(); i != S.end(); i++){
//			cout << *i;
//		}
//		cout << endl;
		int a = s.size();
		int b = S.size();
//		cout << a << " " << b << endl;
		if (26-b-k <= 0){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}