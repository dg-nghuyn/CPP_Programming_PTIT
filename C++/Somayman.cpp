#include<iostream>
#define ll long long
using namespace std;

void solve(ll n){
	int so1 = n % 10, so2 = (n/10) % 10;
	if (so1 == 6){
		if (so2 == 8){
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
	else cout << "0" << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		solve(n);
	}
}
