#include<iostream>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		char s;
		cin >> s;
		if (s >= 'A' && s <= 'Z'){
			s+= 32;
		}
		else{
			s -= 32;
		}
		cout << s << endl;
	}
}
