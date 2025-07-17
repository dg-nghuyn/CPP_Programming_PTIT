#include<iostream>
using namespace std;

void solonnhat(int a, int b, int c){
	int max = a;
	if (a < b){
		max = b;
	}
	else if (a < c){
		max = c;
	}
	cout << max << endl;
}

int main (){
	int a, b, c;
	cin >> a >> b >> c;
	solonnhat(a, b, c);
	return 0;
}