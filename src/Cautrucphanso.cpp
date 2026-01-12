#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll tuso, mauso;
};

void nhap(PhanSo &a){
	cin >> a.tuso >> a.mauso;
}

void rutgon(PhanSo &a){
	ll gcd = __gcd(a.tuso, a.mauso);
	a.tuso /= gcd;
	a.mauso /= gcd;
}

void in(PhanSo &a){
	cout << a.tuso << "/" << a.mauso << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}