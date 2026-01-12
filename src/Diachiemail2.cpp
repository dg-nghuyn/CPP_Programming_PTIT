#include<bits/stdc++.h>
using namespace std;

map<string, int> cnt;

void Res(string &S){
	string res = "";
	stringstream ss (S);
	string word;
	vector<string> words;
	
	while (ss >> word){
		words.push_back(word);
	}
	res += words.back();
	for (int i = 0; i < words.size()-1; i++){
		res += words[i][0];
	}
	cnt[res]++;
	if (cnt[res]> 1){
		res += to_string(cnt[res]);
	}
	res += "@ptit.edu.vn";
	cout << res << endl;
}

int main (){
	int N;
	cin >> N;
	cin.ignore();
	while (N--){
		string S;
		getline(cin, S);
		for (int i = 0; i < S.size(); i++){
			S[i] = tolower(S[i]);
		}
		Res(S);
	}
	return 0;
}