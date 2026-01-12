#include<bits/stdc++.h>
using namespace std;

class phanso{
	private:
		double tu, mau;
	public:
		void nhap();
		void cong (phanso b){
			int mau = this -> mau * b.mau;
			int tu = b.mau * this -> tu + this -> mau * b.tu;
			cout << tu << '/' << mau;
		} 
} 

int main (){
	point a, b;
	a.nhap();
	b.nhap()0;
	a.in(b);
}
