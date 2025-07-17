#include<bits/stdc++.h>
using namespace std;

void reverse_word(string str){
	stack<string> s;
	
	for (int i = 0; i < str.length(); i++){
		if(str[i] == ' '){
			s.push(str.substr(0, i));
			str = str.substr(i+1);
			i = 0;
		}
	}
	s.push(str);
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string S;
		getline(cin, S);
		reverse_word(S);
	}
}