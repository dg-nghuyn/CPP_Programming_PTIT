#include<bits/stdc++.h>
using namespace std;

class Diem{
	private:
		double x, y;
	friend class Hinhtron;	
};

class Hinhtron{
	private:
		Diem tam;
		double r;
	public:
		void nhap(){
			cin >> tam.x >> tam.y;
			cin >> r;
		}
		double chuvi(){
			return r*2*3.14;
		}
	friend double dientich(Hinhtron &a){
	}
	double dientich(Hinhtron &a){
	return a*a*3.14;
	}
};