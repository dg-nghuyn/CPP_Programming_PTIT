#include<iostream>
using namespace std;

void doichothamchieu(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
//	cout << "Trong ham: " << a << " " << b << endl;
}

int main (){
	int a, b;
	cin >> a >> b;
	doichothamchieu(a, b);
	cout << a << " " << b;
}