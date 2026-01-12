#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &A, int n){
	int cnt = 0;
	
	int left = 0, right = n-1;
	
	while (left < right){
		if(A[left] == A[right]){
			left++;
			right--;
		}
		
		else if(A[left] < A[right]){
			A[left+1] += A[left];
			left++;
			cnt++;
		}
		
		else{
			A[right-1] += A[right];
			right--;
			cnt++;
		}
	}
	
	cout << cnt << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		vector<int> A(n);
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		solve(A, n);
	}
	return 0;
}