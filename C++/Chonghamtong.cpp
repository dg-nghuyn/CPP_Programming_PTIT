#include<iostream>
using namespace std;

int tong(int a, int b){
	return a+b;
}
float tong(float a, float b){
	return a+b;
}

int main (){
	int x, y;
	float c, d;
	cin >> x >> y >> c >> d;
	cout << tong(x, y) << " " << tong(c, d);
	return 0;
}