#include <bits/stdc++.h> 
using namespace std; 
main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		long long a,x,y; 
		cin>>a>>x>>y; 
		string p=""; 
		string k=to_string(a); 
		long long z=__gcd(x,y); 
		for(int i=1; i<=z; i++) 
			p+=k; 
		cout<<p<<endl; 
	} 
}