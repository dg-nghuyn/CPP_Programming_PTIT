#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

void solve(int n, string s){
	string s1 = "ABBADCCABDCCABD";
	string s2 = "ACCABCDDBBCDDBB";
	float count = 0.0;
	if (n == 101){
		for (int i = 0; i < 15; i++){
			if (s[i*2] == s1[i]){
				count++;
			}
		}
	}
	else if (n == 102){
		for (int i = 0; i < 15; i++){
			if (s[i*2] == s2[i]){
				count++;
			}
		}
	}
//	cout << count << endl;
	cout << fixed << setprecision(2) << count/15*10 << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		solve(n, s);
	}
}
