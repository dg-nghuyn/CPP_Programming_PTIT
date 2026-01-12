#include<bits/stdc++.h>

using namespace std;

int main (){
	
	string s;
	getline(cin, s);
	
//	cout << s.size() << endl;
	
	for (int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
		if(s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'y'){
			cout << "." << s[i];
		}
	}
	cout << endl;
}