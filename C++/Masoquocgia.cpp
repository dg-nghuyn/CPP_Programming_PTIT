#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s, word;
		word = "084";
		getline (cin, s);
		int find = s.find(word);
		s.erase(find, word.length());
		cout << s << endl;
	}
}
