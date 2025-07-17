#include<bits/stdc++.h>
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int n, X;
		cin >> n >> X;
		vector<int> a(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		stable_sort(a.begin(), a.end(), [X](int a, int b){
			return (abs(a-X) < abs(b-X));
		});
		for (int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}