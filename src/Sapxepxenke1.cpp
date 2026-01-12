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
		
		for (int i = N-1; i >= N/2; i--){
			if(A[i] != A[N-i-1]){
				cout << A[i] << " " << A[N-i-1] << " ";
			}
			else cout << A[i];
		}
		cout << endl;
	}
}