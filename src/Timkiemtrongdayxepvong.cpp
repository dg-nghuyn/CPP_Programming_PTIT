#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, x;
		cin >> n >> x;
		int A[n];
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		
		for (int i = 0; i < n; i++){
			if (A[i] == x){
				cout << i+1 << endl;
			}
		}
//		unordered_map<int, int> map;
//		for (int i = 0; i < n; i++){
//			map[A[i]] = i+1;
//		}
//		cout << map[x] << endl;
	}
}