#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main (){
	ll n;
	cin >> n;
	int count = 0;
	for (ll i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			while (n % i == 0){
				count++;
				n /= i;
			}
			cout << i << " " << count << endl;
			count = 0;
		}
	}
	if (n != 1){
		cout << n << " " << 1 << endl;
	}
}
