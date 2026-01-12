#include<bits/stdc++.h>
using namespace std;
int main (){
	string S;
	getline(cin, S);
	int a = S.size();
	cout << a << endl;
	int chu = 0, so = 0, khac = 0;
	for (int i = 0; i < a; i++){
		if (S[i] >= '0' && S[i] <= '9'){
			so++;
		}
		else if(S[i] >= 'a' && S[i] <= 'z' || S[i] >= 'A' && S[i] <= 'Z'){
			chu++;
		}
	}
	cout << chu << " " << so << " " << a-chu-so << endl;
}