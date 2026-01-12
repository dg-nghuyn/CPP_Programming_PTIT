#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	cin.ignore();
	while (T--){
		string S;
		getline (cin, S);
		int n = S.length();
		int B[260]= {0};
		for (int i = 0; i < n; i++){
			B[(int)S[i]]++;
		}
		for (int i = 0; i < n; i++){
			if (B[(int)S[i]] == 1){
				cout << S[i];
			}
		}
		cout << endl;
	}
}
