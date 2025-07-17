#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		
		int l = s.length();
		
		int sum = 0;
		for (int i = 0; i < l; i++){
			sum += s[i]-'0';
		}
		
		while (sum >= 10){
			int new_sum = 0;
			while (sum > 0){
				new_sum += sum % 10;
				sum /= 10;
			}
			sum = new_sum;
		}
		
		if (sum == 9){
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
}
