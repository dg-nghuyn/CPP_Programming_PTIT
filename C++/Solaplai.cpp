#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll a, x, y;
		cin >> a >> x >> y;
		
		ll tmp = __gcd(x, y);
		string res = "";
		string b = to_string(a);
		
		for (int i = 1; i <= tmp; i++){
			res += b;
		}
		
		cout << res << endl;
	}
}

// 22 = 2*10^
// 222