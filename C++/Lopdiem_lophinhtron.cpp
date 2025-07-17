#include <bits/stdc++.h>
using namespace std;

class Diem;
class Hinhtron;
class C;

class Diem {
	private:
		float x, y;
	public:
		void nhap(){
			cin >> x >> y;
		}
		void xuat(){
			cout << x << " " << y << endl;
		}
};

class Hinhtron {
	private:
		Diem tam;
		float bankinh;
	public:
		void nhap(){
			tam.nhap();
			cin >> bankinh;
		}
};
