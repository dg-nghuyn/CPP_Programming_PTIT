#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	cin.ignore();
	
	set<string> count; // leng chi chen 1 cau khac nhau
	while (n--){
		string s;
		getline(cin, s);
		count.insert(s);
	}
	
	cout << count.size() << endl;
	return 0;
}
