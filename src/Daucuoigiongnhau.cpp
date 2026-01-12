#include<bits/stdc++.h>
using namespace std;

void solve(string S){
	int count = 0;
	int n = S.size()-1;
	for (int i = 0; i <= n; i++){
		for (int j = i; j <= n; j++){
			if(S[i] == S[j]){
				count++;
			}
		}
	}
	cout << count << endl;
}

int main (){
	
	int T;
	cin >> T;
	cin.ignore();
	
	while (T--){
		string S;
		getline(cin, S);
		solve(S);
	}
}