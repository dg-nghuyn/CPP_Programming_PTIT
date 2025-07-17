#include<bits/stdc++.h>
using namespace std;

class Point(){
	private:
		int x, y;
	public:
		void nhap(){
			cin >> x >> y;
		}
		void in ();
		float KC(Point);
}

void point::in (){
	cout << "\n";
}

float point:: KC(Point p){
	float d;
	d = sqrt((x-p.x) * (x-p.x) + (y-p.y) * (y-p.y));
}

Point diem;

int main (){
	
}
