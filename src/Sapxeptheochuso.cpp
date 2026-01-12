#include<bits/stdc++.h>
using namespace std;

bool cmp(string &a, string &b){
	return a+b > b+a;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		vector<string> A(n);
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A.begin(), A.end(), cmp);
		for (int i = 0; i < n; i++){
			cout << A[i];
		}
		cout << endl;
	}
	return 0;
}