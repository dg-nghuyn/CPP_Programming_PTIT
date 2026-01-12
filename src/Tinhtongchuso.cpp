#include<iostream>
#define ll long long
using namespace std;

int motchuso(ll n){
	if (n >= 0 && n <= 9){
		return 1;
	}
	return 0;
}

int tongchuso(ll n){
	int tmp = 0, sum = 0;
	while (n != 0){
		tmp = n % 10;
		sum += tmp;
		n /= 10;
	}
	return sum;
}

void solve(ll n){
	while (motchuso(n) == 0){
		n = tongchuso(n);
	}
	cout << n << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--){
		ll n;
		cin >> n;
		solve(n);
	}
}
