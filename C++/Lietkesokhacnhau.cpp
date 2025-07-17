#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int A[n+5], B[1005];
	memset(B, 0, 1005);
	int count = 0, C[n+5];
	for (int i = 0; i < n; i++){
		cin >> A[i];
		B[A[i]]++;
	}
	for (int i = 0; i < n; i++){
		if (B[A[i]] > 0){
			C[count] = A[i];
			count++;
			B[A[i]] = 0;
		}
	}
	
	sort(C, C+count);
	for (int i = 0; i < count; i++){
		cout << C[i] << " ";
	}
	cout << endl;
}
