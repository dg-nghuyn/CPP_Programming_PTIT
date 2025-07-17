#include<bits/stdc++.h>
using namespace std;

int main (){
	string S;
	getline(cin, S);
	
	string res = "";
	stringstream ss(S);
	string word;
	vector<string> words;
		
	while(ss >> word){
		words.push_back(word);
	}
	
	for (int i = 0; i < words.size()-1; i++){
		res += toupper(words[i][0]);
		for (int j = 1; j < words[i].size(); j++){
			res += tolower(words[i][j]);
		}
		res += " ";
	}
	
	string cuoi = words.back();
	for (int i = 0; i < cuoi.size(); i++){
		cuoi[i] = toupper(cuoi[i]);
	}
	res.pop_back();
	res += ", " + cuoi;
	cout << res << endl;
}