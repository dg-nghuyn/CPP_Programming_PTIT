#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main (){
	ll n;
	cin >> n;
	if (n < 2){
		cout << "NO";
	}
	else{
		int flag = 1;
		for (ll i = 2; i <= sqrt(n); i++){
			if (n % i == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1){
			cout << "YES";
		}
		else cout << "NO";
	}
}
