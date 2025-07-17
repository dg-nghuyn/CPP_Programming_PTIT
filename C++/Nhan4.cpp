#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(int a, int b){
	return 1LL*a/__gcd(a, b)*b;
}
int main(){
	int t;cin>>t;
	
	while(t--){
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		
		ll l=lcm(lcm(a, b), c);
		
//		ll p= pow(10,n-1) / l;
//		ll m=p*l+l;

		ll min = (ll)pow(10, n-1);
		ll max = (ll)pow(10, n)-1;
		ll m = (min+l-1)/l;
		
		ll res = m*l;
		ll r = res;
		int cnt = 0;
		while(r>0){
			    r/=10;
			    cnt++;
		}
		if(cnt==n) cout<<res<<endl;
			else cout<<"-1"<<endl;
//		if (r <= max) cout << r << endl;
	}
}

