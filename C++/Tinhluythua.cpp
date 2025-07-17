#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int x, y;
		ll P;
		cin >> x >> y >> P;
		ll tmp = 1;
		while (y--){
			tmp = tmp*x%P;
		}
		cout << tmp << endl;
	}
}