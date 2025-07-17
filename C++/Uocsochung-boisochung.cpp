#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
	while (a != b){
		if (a < b){
			b = b - a;
		}
		else if (a > b){
			a = a - b;
		}
	}
	return a;
}


ll lcm(ll a, ll b){
	return a*b/gcd(a, b);
}

void solve(ll a, ll b){
	cout << lcm(a, b) << " " << gcd(a, b) << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll a, b;
		cin >> a >> b;
		solve(a, b);
	}
}
