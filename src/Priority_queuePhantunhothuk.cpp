#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int N, k;
		cin >> N >> k;
		priority_queue<int> pq;
		for (int i = 0; i < N; i++){
			int A;
			cin >> A;
			pq.push(A);
			if (pq.size() > k){
				pq.pop();
			}
		}
		cout << pq.top() << endl;
	}
	return 0;
	return 0;
}