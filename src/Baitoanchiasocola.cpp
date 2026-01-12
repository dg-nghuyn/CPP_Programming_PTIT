#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll N, M;
	cin >> N >> M;
	ll A[N];
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
	sort(A,A+N);
	ll tmp = A[M-1]-A[0];
	for (int i = 0; i < N-M; i++){
		if (A[M-1+i] - A[i] < tmp){
			tmp = A[M-1+i] - A[i];
		}
	}
	cout << tmp << endl;
}