#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int A[N];
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		sort(A, A+N);
		if (A[0] != A[1]){
			cout << A[0] << " " << A[1] << endl;
		}
		else cout << "-1" << endl;
	}
}