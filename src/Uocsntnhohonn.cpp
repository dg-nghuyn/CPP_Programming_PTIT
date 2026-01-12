#include<iostream>
#include<math.h>
using namespace std;

int check(int a){
	if (a < 2){
		return 0;
	}
	else{
		for (int i = 2; i <= sqrt(a); i++){
			if (a % i == 0){
				return 0;
			}
		}
		return 1;
	}
}

void solve(int n){
	for (int i = 2; i <= n; i++){
		if (check(i) == 1){
			cout << i << " ";
		}
	}
	cout << endl;
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
