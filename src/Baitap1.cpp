#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		int i = 0, j = n-1;
		while (i <= j){
			if(i == j){
				cout << A[i] << " ";
			}
			else{
				cout << A[j] << " " << A[i] << " ";
			}
			i++;
			j--;
		}
		cout << endl;
	}
}