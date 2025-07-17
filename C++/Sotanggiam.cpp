#include<bits/stdc++.h>
#define ll long long

using namespace std;

int checksnt(ll a){
	if(a < 2)	return 0;
	double sqr = sqrt(a);
	for (ll i = 2; i <= sqr; i++){
		if (a % i == 0){
			return 0;
		}
	}
	return 1;
}

int checktanggiam(ll a){
	int tang = 1, giam = 1;
    string s = to_string(a);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= s[i - 1]) giam = 0;
        if (s[i] <= s[i - 1]) tang = 0;
    }
    if(tang == 1 || giam == 1){
    	return 1;
	}
	return 0;
}

void solve(int n){
	ll x = pow(10, n-1);
	ll y = pow(10, n);
	ll count = 0;
	for (ll i = x; i <= y; i++){
		if(checksnt(i) == 1 && checktanggiam(i) == 1){
//			cout << i << " ";
			count++;
		}
	}
//	cout << endl;
	cout << count << endl;
}

void solve2(int n){
	switch(n){
		case 2: {
			cout << 20 << endl;
			break;
		}
		case 3: {
			cout << 38 << endl;
			break;
		}
		case 4: {
			cout << 50 << endl;
			break;
		}
		case 5: {
			cout << 38 << endl;
			break;
		}
		case 6: {
			cout << 20 << endl;
			break;
		}
		case 7: {
			cout << 8 << endl;
			break;
		}
		case 8: {
			cout << 5 << endl;
			break;
		}
		case 9: {
			cout << 0 << endl;
			break;
		}
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		solve2(N);
	}
}