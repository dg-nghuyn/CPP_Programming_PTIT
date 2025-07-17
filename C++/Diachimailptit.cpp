#include<bits/stdc++.h>
using namespace std;

void toEmail(string a){
	string c ="";
	int l = a.length();
	
	for (int i = 0; i < l; i++){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
	
	a = ' ' + a;
	while(a[a.length()-1] != ' '){
		c = a[a.length()-1] + c;
//		cout << c << endl;
		a.erase(a.length()-1, 1);
	}
	
//	cout << c << endl;
	
	for (int i = 1; i < a.length()-1; i++){
		if(a[i-1] == ' '){
			c = c+a[i];
		}
	}
//	cout << c << endl;
	
	c+="@ptit.edu.vn";
	cout << c << endl;
}


int main (){
	string S;
	getline(cin, S);
	toEmail(S);
	return 0;
}
