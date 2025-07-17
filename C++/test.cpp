#include<iostream>
using namespace std;
int main (){
	int a, b, c;
	cin >> a >> b >> c;
	
	if (b > c){
		swap(b, c);
	}
	
	int tmp = c-b;
	if(tmp % 3 == 0){
		cout << "YES\n";
	}
	else cout << "NO\n";
}