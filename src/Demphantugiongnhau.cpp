#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		
		int cnt[100005] = {0};
		int A[N][N]; 
		
		for (int i = 0; i < N; i++){
			set<int> cnthang;
			for (int j = 0; j < N; j++){
				cin >> A[i][j];
				cnthang.insert(A[i][j]);
			}
			for (int t : cnthang){
				cnt[t]++;
			}
		}
		
		int dem = 0;
		for (int i = 0; i < 100005; i++){
			if (cnt[i] == N){
				dem++;
			}
		}
		
		cout << dem << endl;		
	}
	return 0;
	
}