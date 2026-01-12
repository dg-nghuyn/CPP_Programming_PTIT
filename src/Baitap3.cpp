#include<bits/stdc++.h>
using namespace std;
int main (){
	int N;
	cin >> N;
	
	int A[N][3];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < 3; j++){
			cin >> A[i][j];
		}
	}
	
	int res = 0;
	for (int i = 0; i < N; i++){
		int cnt1 = 0;
		for (int j = 0; j < 3; j++){
			if (A[i][j] == 1){
				cnt1++;
			}
		}
		if (cnt1 >= 2){
			res++;
		}
	}
	
	cout << res << endl;
}