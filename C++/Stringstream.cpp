#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main (){
	string S;
	getline(cin, S);
	
	stringstream ss(S);
	string word;
	
	int dem = 0;
	while(ss >> word){ //while (getline(ss, word, '-'))
		dem++;
		cout << dem << " " << word << " ";
	}
	return 0;
	
}