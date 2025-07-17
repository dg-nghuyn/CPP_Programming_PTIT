#include<bits/stdc++.h>
using namespace std;
main (){
	ifstream inFile1("DATA1.in");
	ifstream inFile2("DATA2.in");
	
	string word, line;
	
	set<string> A, B, C;
	while (getline(inFile1, line)){
		stringstream ss(line);
		while (ss >> word){
			string tmp = "";
			for (int i = 0; i < word.size(); i++){
				tmp += tolower(word[i]);
			}
			A.insert(tmp);
			C.insert(tmp);
		}
	}
	
	while (getline(inFile2, line)){
		stringstream ss(line);
		while (ss >> word){
			string tmp = "";
			for (int i = 0; i < word.size(); i++){
				tmp += tolower(word[i]);
			}
			B.insert(tmp);
			C.insert(tmp);
		}
	}
	
	for (auto i : C){
		cout << i << " ";
	}
	cout << endl;
	for (auto i : A){
		if (B.count(i) != 0){
			cout << i << " ";
		}
	}
	cout << endl;
	
	inFile1.close();
	inFile2.close();
	return 0;
}