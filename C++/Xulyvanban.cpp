#include<bits/stdc++.h>
using namespace std;

string hoa(string s){
	s[0] = toupper(s[0]);
	return s;
}

string thuong(string s){
	for (int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

main (){
	string s, line;
	vector<string> S;
	while (getline(cin, line)){
		stringstream ss(line);
		while (ss >> s){
			S.push_back(thuong(s));
		}
	}
	
	bool flag = 1;
	for (auto it = S.begin(); it != S.end(); it++){
		string word = *it;
		if (flag){
			word = hoa(word);
			flag = 0;
		}
		char last = word[word.size()-1];
		if (last == '.' || last == '?' || last == '!'){
			word.pop_back();
			cout << word << endl;
			flag = 1;
		}
		else{
			cout << word << " ";
		}
	}
	return 0;
}