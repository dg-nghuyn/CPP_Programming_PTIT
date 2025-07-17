#include<bits/stdc++.h>
using namespace std;

class point {
	private:
		double x, y;
	public:
		friend double distance (point a, point b);
		void nhap();
		void in(point a);
};

void point :: nhap(){
	cin >> x >> y; 
}

double distance (point a, point b){
	return sqrt(pow(b.x - a.x), 2) + pow(b.y - a.y, 2));
}

void point :: in (point a){
	cout << distance (a);
}

int main (){
	point a, b;
	a.nhap();
	b.nhap();
	a.in(b);
}
