#include<iostream>
using namespace std;
int main (){
	int n;
	unsigned long long gt = 1;
	cin >> n;
	while (n > 1){
		gt *= n;
		n--;
//		cout << gt << " " << n << endl;
	}
	cout << gt << endl;
}