#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void solve(char s[25], int n){
	int flag = 1;
	for (int i = 0; i < n-1; i++){
		if (abs(s[i] - s[i+1]) != 1){
			flag = 0;
			break;
		}
	}
	if (flag == 1){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		char s[25];
		cin >> s;
		int n = strlen(s);
		solve(s, n);
	}	
}
