#include<bits/stdc++.h>
using namespace std;

void sum(string &x, string &y){
	if (x.size() < y.size()){
		while (x.size() < y.size()){
			x = '0'+ x;
		}
	}
	else if (y.size() < x.size()){
		while (y.size() < x.size()){
			y = '0' + y;
		}
	}
	
	string res = x;
	int nho = 0;
	int tmp = 0;
	
	
	for (int i = x.size()-1; i >= 0; i--){
		tmp = (x[i]-'0') + (y[i]-'0') + nho;
		nho = tmp/10;
		res[i] = (tmp%10) + '0';
	}
	
	if (nho) res = (char)(nho+'0') + res;
	cout << res << endl;
}

int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string x, y;
		cin >> x >> y;
		sum (x, y);
	}
}