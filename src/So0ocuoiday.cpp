#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n;
		cin >> n;
		ll A[n];
		ll count = 0;
		for (int i = 0; i < n; i++){
			cin >> A[i];
			if (A[i] == 0){
				count++;
			}
		}
//		sort (A, A+n);
		for (int i = 0; i < n; i++){
			if(A[i] != 0){
				cout << A[i] << " ";
			}
		}
		for (int j = 0; j < count; j++){
			cout << 0 << " ";
		}
		cout << endl;
	}
}