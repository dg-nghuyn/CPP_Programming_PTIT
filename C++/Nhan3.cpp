#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt=0;
string tong(string s){
	if(s.size()==1) return s;
	ll sum=0;
	for(int i=0;i<s.size();i++){
		sum+=(s[i]-'0');
	}
	string ans = to_string(sum);
	cnt++;
	return tong(ans);
}
int main(){
	string s;cin>>s;
	string result = tong(s);
	cout<<cnt;
}