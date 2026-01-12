#include<bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
	private:
		ll tuso, mauso;
		
	public:
		PhanSo (ll tu = 1, ll mau = 1) : tuso(tu), mauso(mau){}
		
		PhanSo operator + (const PhanSo &other) const{
			ll lcm = mauso * other.mauso/__gcd(mauso, other.mauso);
			ll tu = tuso * (lcm/mauso) + other.tuso*(lcm/other.mauso);
			ll mau = lcm;
			ll tmp = __gcd(tu, mau);
			return PhanSo(tu/tmp, mau/tmp);
		}
		
	friend istream& operator >> (istream& is, PhanSo& p){
		is >> p.tuso >> p.mauso;
		return is;
	}
	friend ostream& operator << (ostream& os, const PhanSo& p){
		os << p.tuso << "/" << p.mauso;
		return os;
	}
		
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}