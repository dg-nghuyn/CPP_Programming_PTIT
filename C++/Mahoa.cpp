#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	cin.ignore();
	
	while(T--){
		string s;
		getline(cin, s);
		
		string res = "";
		int count = 1;
		for(int i = 1; i <= s.size(); i++){
			if(i < s.size() && s[i] == s[i-1]){
				count++;
			}
			else{
				res += s[i-1];
				res += to_string(count);
				count=1;
			}
		}
		cout << res << endl;
	}
}