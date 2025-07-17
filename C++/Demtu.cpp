#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string s;
		getline(cin, s);
		int l = s.length(), count = 0;
		bool inword = false;
		for (int i = 0; i < l; i++){
			if (isspace(s[i])){
				inword = false;
			}
			else{
				if (!inword){
					count ++;
					inword = true;
				}
			}
		}
		cout << count << endl;
	}
}
