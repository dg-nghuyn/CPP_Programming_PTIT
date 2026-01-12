#include<bits/stdc++.h>
using namespace std;

bool check1(string &S){
	for (int i = 0; i < 4; i++){
		if (S[i] >= S[i+1]){
			return false;
		}
	}
	return true;
}

bool check2(string &S){
	for (int i = 0; i < 4; i++){
		if (S[i] != S[i+1]){
			return false;
		}
	}
	return true;
}

bool check3(string &S){
	for (int i = 0; i < 2; i++){
		if(S[i] != S[i+1]){
			return false;
		}
	}
	if(S[3] != S[4]){
		return false;
	}
	
	return true;
}

bool check4(string &S){
	for (int i = 0; i <= 4; i++){
		if(S[i] != '6' && S[i] != '8'){
			return false;
		}
	}
	return true;
}

void solve(string &S){
	if (check1(S) || check2(S) || check3(S) || check4(S)){
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string S;
		getline(cin, S);
		S.erase(0, 5);
		S.erase(3, 1);
		solve(S);
	}
	return 0;
}