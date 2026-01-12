#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll tong(string s){
	ll tmp = 0;
	for (int i = 0; i < s.size(); i++){
		tmp += (s[i]-'0');
	}
	return tmp;
}

void check(string s){
	ll sum = 0;
	sum = tong(s);
	while (sum >= 10){
		sum = tong(to_string(sum));
	}
//	cout << sum << endl;
	if (sum == 9){
		cout << "1" << endl;
	}
	else cout << "0" << endl;
}

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		check(s);
	}
}