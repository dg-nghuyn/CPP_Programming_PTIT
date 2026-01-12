#include<iostream>
using namespace std;
int main (){
	int a, b;
	cin >> a >> b;
	int tmp;
	while (b > 0){
		tmp = a % b;
		a = b;
		b = tmp; 
	}
	cout << a << endl;
}
//6 3
//3 3