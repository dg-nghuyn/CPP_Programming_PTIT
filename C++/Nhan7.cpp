#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		ll b;
		int p;
		cin >> b >> p;
		
		ll tmp = p/b;
		ll cnt = 0;
		
		for (int i = 1; i <= tmp; i+= p){
			cnt++;
		}
		
		cout << cnt-1 << endl;
	}
}