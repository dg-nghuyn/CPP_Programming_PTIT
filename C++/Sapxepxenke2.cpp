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
		
		int i = 0, j = N-1;
		while (i <= j){
			if (i==j){
				cout << A[j] << " ";
			}
			else{
				cout << A[j] << " " << A[i] << " ";
			}
			i++;
			j--;
		}
		cout << endl;
	}
	return 0;
}