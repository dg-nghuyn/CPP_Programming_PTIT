#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string N;
		cin >> N;
		ll M;
		cin >> M;
		ll sum = 0, res = 0;
		for (int i = 0; i < N.length(); i++){
			sum = sum*10 + (N[i]-'0');
			res = sum % M;
			sum = res;
		}
		cout << res << endl;
	}
}