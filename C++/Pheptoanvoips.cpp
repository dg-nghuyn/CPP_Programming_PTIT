#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll tu, mau;
};

void rutgon(PhanSo &ps){
	ll gcd = __gcd(ps.tu, ps.mau);
	ps.tu /= gcd;
	ps.mau /= gcd;
}

void in(const PhanSo &A){
	cout << A.tu << "/" << A.mau <<  " ";
}

void process(PhanSo &A, PhanSo &B){
	PhanSo C, D;
	
	ll lcmAB = A.mau/__gcd(A.mau, B.mau)*B.mau;
	C.tu = (A.tu*(lcmAB/A.mau)) + (B.tu*(lcmAB/B.mau));
	C.mau = lcmAB;
	C.tu *= C.tu;
	C.mau *= C.mau;
	rutgon(C);
	
	D.tu = A.tu*B.tu*C.tu;
	D.mau = A.mau*B.mau*C.mau;
	rutgon(D);
	
	in(C);
	in(D);
	cout << endl;
}

int main (){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}