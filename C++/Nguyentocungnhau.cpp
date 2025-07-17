#include<bits/stdc++.h>
using namespace std;

int checksnt(int a){
	if (a < 2){
		return 0;
	}
	else{
		for(int i = 2; i <= sqrt(a); i++){
			if(a % i == 0){
				return 0;
			}
		}
		return 1;
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int x, cnt = 0;
		cin >> x;
		for(int i = 1; i <= x; i++){
			if(__gcd(i, x) == 1){
				cnt++;
			}
		}
//		cout << cnt << endl;
		cout << checksnt(cnt) << endl;
	}
}