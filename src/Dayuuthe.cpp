#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	cin.ignore();
	
	while (T--){
		string S;
		getline(cin, S);
		
		stringstream ss(S);
		string word;
		
		int dem = 0, chan = 0, le = 0;
		while(ss >> word){
			dem++;
			if((word.back() - '0') % 2 == 0){
				chan++;
			}
			else le++;
		}
		if((dem % 2 == 0 && (chan > le)) || (dem % 2 != 0 && (le > chan)) ){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}