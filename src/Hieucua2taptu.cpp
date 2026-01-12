#include<bits/stdc++.h>
using namespace std;

void solve(string &s1, string &s2){
	vector<string> words1, words2;
	stringstream ss1(s1), ss2(s2);
	string word;
	
	while (ss1 >> word){
		words1.push_back(word);
	}
	
	while (ss2 >> word){
		words2.push_back(word);
	}
	
	
	set<string> res;
	bool flag;
	for (int i = 0; i < words1.size(); i++){
		flag = 1;
		for (int j = 0; j < words2.size(); j++){
			if (words1[i] == words2[j]){
				flag = 0;
				break;
			}
		}
		if (flag == 1){
			res.insert(words1[i]);
		}
	}
	for (auto it = res.begin(); it != res.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string s1, s2;
		getline (cin, s1);
		getline (cin, s2);
		solve(s1, s2);
	}
}