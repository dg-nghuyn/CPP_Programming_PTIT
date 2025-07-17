#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
	if (s.size() > 10){
		return false;
	}
	for (int i = 0; i < s.size(); i++){
		if (s[i] > '9' || s[i] < '0'){
			return false;
		}
	}
	return true;
}

int main (){
	ifstream inFile("DATA.in");
	string line;
	long long cnt = 0;
	while (getline(inFile, line)){
		stringstream ss(line);
		string word;
		while (ss >> word){
			if (check(word)){
				cnt = cnt + stoi(word);
			}
		}
	}
	cout << cnt << endl;
	inFile.close();
	return 0;
}