#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		string s;
		cin >> s;
		
		string a, b;
		for (int i = 0; i < s.size(); i++){
			if (s[i] >= '0' && s[i] <= '9'){
				b+= s[i];
			}
			else a+= s[i];
		}
		
		sort(a.begin(), a.end());
		
		int sum = 0;
		for (int i = 0; i < b.size(); i++){
			sum += (b[i]-'0');
		}
		
		for (int i = 0; i < a.size(); i++){
			cout << a[i];
		}
		cout << sum << endl;
	}
}