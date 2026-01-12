#include<bits/stdc++.h>
using namespace std;

void solve(string &s){
	vector<int> A(10005), B(150, 0);
	for (int i = 0; i < s.size(); i++){
		A[i] = s[i];
		B[A[i]]++;
	}
	int max = 0;
	for (int i = 0; i <s.size(); i++){
		if (max < B[A[i]]){
			max = B[A[i]];
		}
	}
	if (s.size()-max >= max-1){
		cout << 1 << endl;
	}
	else cout << 0 << endl;
}

main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string S;
		cin >> S;
		solve(S);
	}
}