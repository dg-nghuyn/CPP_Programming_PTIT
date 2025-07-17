#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int N, k;
		cin >> N >> k;
		int A[N];
		multiset<int> s;
		vector<int> v;
		for (int i = 0; i < N; i++){
			cin >> A[i];
			s.insert(A[i]);
		}
		for (auto x: s){
			v.push_back(x);
		}
		cout << v[k-1] << endl;
	}
	return 0;
}