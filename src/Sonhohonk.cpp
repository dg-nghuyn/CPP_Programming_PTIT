#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, k;
		cin >> n >> k;
		vector <ll> A(n+1);
		
		int dem = 0;
		for (int i = 1; i <= n; i++){
			cin >> A[i];
			if (A[i] <= k){
				dem++;
			}
		}
		
		int cnt = 0;
		for (int i = 1; i <= dem; i++){
			if (A[i] > k){
				cnt++;
			}
		}
		
		int res = cnt;
		for (int i = dem+1; i <= n; i++){
			if (A[i] > k){
				cnt++;
			}
			if (A[i-dem] > k){
				cnt--;
			}
			res = min(res, cnt);
		}
		cout << res << endl;
	}
	return 0;
}