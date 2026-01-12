#include<bits/stdc++.h>
using namespace std;
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
		
		vector<int> a = A;
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++){
			auto it = upper_bound(a.begin(), a.end(), A[i]);
			if (it != a.end()){
				cout << *it << " ";
			}
			else cout << "_" << " ";
		}
		cout << endl;
	}
}