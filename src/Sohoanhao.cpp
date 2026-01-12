#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(long long a){
	if (a > (ll)1e12){
		return 0;
	}
	
	long long sum = 0;
	double tmp = sqrt(a);
	for (int i = 2; i < tmp; i++){
		if (a % i == 0){
			sum += i;
			sum += a/i;
		}
	}
	tmp = (int)tmp;
	if (tmp *tmp == a){
		sum += tmp;
	}
	sum += 1;
	
//	cout << sum << " " << a << endl;
	
	if (sum == a){
		return 1;
	}
	else return 0;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		if (solve(n) == 1){
			cout << 1 << endl;
		}
		else cout << 0 << endl;
	}	
}