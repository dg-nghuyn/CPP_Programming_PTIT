#include<bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
	private:
		ll tuso, mauso;
	
	public:
		PhanSo (ll tu = 1, ll mau = 1) : tuso(tu), mauso(mau){		}
		void rutgon(){
			ll tmp = __gcd(tuso, mauso);
			tuso /= tmp;
			mauso /= tmp;
			
			if (mauso < 0){
				tuso = -tuso;
				mauso = -mauso;
			}
		}
		
		friend istream& operator>>(istream& is, PhanSo& p){
			is >> p.tuso >> p.mauso;
			return is;
		}
		
		friend ostream& operator<<(ostream& os, PhanSo& p){
			os << p.tuso << "/" << p.mauso;
			return os;
		}
		
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p << endl;
	return 0;
}