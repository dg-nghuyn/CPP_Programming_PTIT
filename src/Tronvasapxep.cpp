#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n, m;
		cin >> n >> m;
		ll A[n], B[m], C[n+m], count = 0;
		for (ll i = 0; i < n; i++){
			cin >> A[i];
			C[count++] = A[i];
		}
		for (ll j = 0; j < m; j++){
			cin >> B[j];
			C[count++] = B[j];
		}
		
		sort(C, C+count);
		for (int a = 0; a < count; a++){
			cout << C[a] << " ";
		}
		cout << endl;
	}
}