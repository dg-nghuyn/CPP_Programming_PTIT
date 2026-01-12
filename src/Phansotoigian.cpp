#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main (){
	ll tu, mau;
	cin >> tu >> mau;
	
	ll a = tu, b = mau;
	while (b != 0){
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
		
	tu /= a;
	mau /= a;
	cout << tu << "/" << mau << endl;
}