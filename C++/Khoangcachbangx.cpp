#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> A, int N, int X){
	unordered_set<int> s;
	for (int i = 0; i < N; i++){
		if(s.find(A[i]-X) != s.end()){
			return true;
		}
		s.insert(A[i]);
	}
	return false;
}

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
		
		if (check (A, N, X)){
			cout << "1\n";
		}
		else cout << "-1\n";
	}
}