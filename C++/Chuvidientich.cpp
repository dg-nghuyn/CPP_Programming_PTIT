#include<iostream>
#include<iomanip>
using namespace std;

void solve(float a, float b){
	float P, S;
	P = (a+b) * 2;
	S = a*b;
	cout << P << endl;
	cout << setprecision(2) << fixed << S;
}

int main (){
	float a, b;
	cin >> a >> b;
	solve(a, b);
}