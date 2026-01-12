#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		long long sum =0;
		long long lt2=1;
		for(int j=s.length()-1;j>=0;j--){
			if(s[j]=='1') sum = (sum+lt2)%5;
			lt2= (lt2*2)%5;
		}
//			cout<<sum<<endl;
		if(sum%5==0) cout<<"Yes\n";
		else cout<<"No\n";
	}
}