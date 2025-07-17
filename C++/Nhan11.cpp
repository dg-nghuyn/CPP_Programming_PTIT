#include<bits/stdc++.h>
using namespace std;
int checktang(string s){
	for(int i=6;i<=8;i++){
		if(s[i+1]<=s[i]) return 0;
	}
	for(int i=10;i<12;i++){
		if(s[i+1]<=s[i]) return 0;
	}
	return 1;
}
int checkbang(string s){
	for(int i=6;i<=8;i++){
		if(s[i+1]!=s[i]) return 0;
	}
	for(int i=10;i<12;i++){
		if(s[i+1]!=s[i]) return 0;
	}
	return 1;
}
int check68(string s){
	for(int i=6;i<=8;i++){
		if(s[i]!='6'||s[i]!='8'||s[i]!='6'&&s[i]!='8') return 0;
	}
	for(int i=10;i<12;i++){
		if(s[i]!='6'||s[i]!='8'||s[i]!='6'&&s[i]!='8') return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
	    getline(cin,s);
	    if(checktang(s)||checkbang(s)||check68(s)) cout<<"YES\n";
	    else cout<<"NO\n";
	}

}