#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
	int T;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		
		set<int> chuso;
		
		for (int i = 0; i < N; i++){
			ll x;
			cin >> x;
			
			while (x > 0){
				int tmp = x % 10;
				chuso.insert(tmp);
				x /= 10;
			}
		}
		for (int tmp : chuso){
			cout << tmp << " ";
		}
		cout << endl;
	}
}