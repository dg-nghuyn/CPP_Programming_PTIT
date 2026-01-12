#include<bits/stdc++.h>
using namespace std;

void solve(int &a, string &s){
	string res = "";
	for (int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string word;
	vector<string> words;
	
	while (ss >> word){
		words.push_back(word);
	}
	
	if (a == 1){
		for (int i = 0; i < words.size()-1; i++){
			res += toupper(words[i][0]);
			for (int j = 1; j < words[i].size(); j++){
				res += words[i][j];
			}
			res += " ";
		}
		string cuoi = words.back();
		cuoi[0] = toupper(cuoi[0]);
		res = cuoi + " " + res;
		cout << res;
		cout << endl;
	}
	
	if (a == 2){
		for (int i = 1; i < words.size(); i++){
			res += toupper(words[i][0]);
			for (int j = 1; j < words[i].size(); j++){
				res += words[i][j];
			}
			res += " ";
		}
		string dau = words.front();
		dau[0] = toupper(dau[0]);
		res = res + dau;
		cout << res;
 		cout << endl;
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int a;
		cin >> a;
		cin.ignore();
		string s;
		getline(cin, s);
		solve(a, s);
	}
}