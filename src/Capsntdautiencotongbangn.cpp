#include<bits/stdc++.h>
using namespace std;
int checksnt(long n){
	if (n < 2){
		return 0;
	}
	else{
		for (int i = 2; i <= sqrt(n); i++){
			if (n % i == 0){
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
		long n;
		cin >> n;
		long a = n/2;
		int flag = -1;
		for (long i = 2; i <= a; i++){
			if (checksnt(i) == 1){
				if (checksnt(n-i) == 1){
					cout << i << " " << n-i << endl;
					flag = 1;
					break;
				}
			}
		}
		if (flag == -1){
			cout << flag << endl;
		}
	}
}
