#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a[201];
		int n=0;
		for(int i=0;i<201;i++) {
			cin>>a[i];
			n++;
		}
		int l=0,c=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0) c++;
			else l++;
		}
		if(n%2==0&&c>l||n%2==1&&l>c) cout<<"YES\n";
		else cout<<"NO\n";
	}
}