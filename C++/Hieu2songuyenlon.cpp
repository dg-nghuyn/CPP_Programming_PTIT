#include<bits/stdc++.h>
using namespace std;

void substract (string &a, string &b){
	if (a.size() < b.size() || (a.size() == b.size() && a < b)){
		swap(a, b);
	}
	while (b.size() < a.size()){
		b = '0' + b;
	}
	
	int tmp = 0, nho = 0;
	string res = a;
	for (int i = a.size()-1; i >= 0; i--){
		tmp = (a[i]-'0') - (b[i]-'0') - nho;
		if (tmp < 0){
			tmp += 10;
			nho = 1;
		}
		else nho = 0;
		res[i] = tmp + '0';
	}
//	while (res.size() > 1 && res[0] == '0'){
//		res.erase(0, 1);
//	} 
	cout << res << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string X, Y;
		cin >> X >> Y;
		substract(X, Y);
	}
}