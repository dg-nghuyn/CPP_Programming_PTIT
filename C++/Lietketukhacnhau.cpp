#include<bits/stdc++.h>
using namespace std;
int main (){
	ifstream inFile("VANBAN.in");
	string line;
	set<string> S;
	while(getline(inFile, line)){
		stringstream ss(line);
		string word;
		while (ss >> word){
			string tmp = "";
			for (int i = 0; i < word.size(); i++){
				tmp += tolower(word[i]);
			}
			S.insert(tmp);
		}
	}
	for (auto i : S){
		cout << i << endl;
	}
	
	inFile.close();
	return 0;
}