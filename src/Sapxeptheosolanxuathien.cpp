#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		vector<int> A(n);
		unordered_map<int, int> cnt;
		for (int i = 0; i < n; i++){
			cin >> A[i];
			cnt[A[i]]++;
		}
		sort(A.begin(), A.end(), [&](int a, int b){
			if (cnt[a] != cnt[b]){
				return cnt[a] > cnt[b];
			}
			return a < b;
		});
		for (int i = 0; i < n; i++){
			cout << A[i] << " ";
		}
		cout << endl;
	}
}