#include<iostream>
#include<math.h>
using namespace std;

void solve(int a, int m){
	int x, flag = -1;
	for (int i = 0; i < m; i++){
		if (a*i%m == 1){
			flag = i;
			break;
		}
	}
	cout << flag << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int a, m;
		cin >> a >> m;
		solve(a, m);
	}
}
