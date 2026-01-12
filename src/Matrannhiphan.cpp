#include<bits/stdc++.h>
using namespace std;
int main (){
	int N;
	cin >> N;
	
	int A[N+5][8];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < 3; j++){
			cin >> A[i][j];
		}
	}
	
	int count0 = 0, count1 = 0, res = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < 3; j++){
			if (A[i][j] == 0){
				count0 ++;
			}
			else count1++;
		}
		if (count1 > count0){
			res++;
		}
		count1 = 0;
		count0 = 0;
	}
	cout << res << endl;
}
