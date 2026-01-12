#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

void solve(int n){
	ll a[105];
	a[1] = 1;
	a[2] = 1;
	if (n <= 2){
		cout << "1" << endl;
	}
	else{
		for (int i = 3; i <= 92; i++){
			a[i] = a[i-1] + a[i-2];
			if (n == i){
				cout << a[i] << endl;
			}
		}
	}
}

int main (){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		solve(n);
	}
}
