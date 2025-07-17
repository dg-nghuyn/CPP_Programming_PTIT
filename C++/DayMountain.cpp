#include<bits/stdc++.h>
using namespace std;

bool solve(int A[], int L, int R){
	int i = L;
	while (i < R && A[i] <= A[i+1]){
		i++;
	}
	while (i < R && A[i] >= A[i+1]){
		i++;
	}
	if(i == R){
		return 1;
	}
	else return 0;
}

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
		int L, R;
		cin >> L >> R;
		if (solve(A, L, R) == 1){
			cout << "Yes\n";
		}
		else cout << "No\n";
	}
}