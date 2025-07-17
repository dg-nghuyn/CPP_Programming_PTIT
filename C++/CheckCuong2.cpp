#include<bits/stdc++.h>
using namespace std;

int main (){
	
	#ifndef ONLINE_
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin >> t;
	while (t--){
		int n; cin >> n;
		int max = INT_MIN;
		while (n--){
			int x; cin >> x;
			if (x > max){
				max = x;
			}
		}
		cout << max << endl;
	}
}