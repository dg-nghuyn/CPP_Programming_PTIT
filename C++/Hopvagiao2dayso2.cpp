#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n, m;
		cin >> n >> m;
		
		set<int> A, B, C, D;
		
		int tmp = 0;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			A.insert(tmp);
			C.insert(tmp);
		}
		
		for (int i = 0; i < m; i++){
			cin >> tmp;
			B.insert(tmp);
			C.insert(tmp);
		}
		
		for (int k:C){
			cout << k << " ";
		}
		cout << endl;
		
		auto a = A.begin();
		auto b = B.begin();
		while (a != A.end() && b != B.end()){
			if (*a < *b){
				a++;
			}
			else if(*a > *b){
				b++;
			}
			else{
				D.insert(*a);
				a++;
				b++;
			}
		}
		
		for (int k:D){
			cout << k << " ";
		}
		cout << endl;
	}
}