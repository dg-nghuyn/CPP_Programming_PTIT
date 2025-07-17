#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int N, X;
		cin >> N >> X;
		vector<int> A(N);
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		int count = 0;
		for (int j = 0; j < N; j++){
			if (A[j] == X){
				count++;
			}
		}
		if (count == 0){
			cout << "-1" << endl;
		}
		else cout << count << endl;
	}
}