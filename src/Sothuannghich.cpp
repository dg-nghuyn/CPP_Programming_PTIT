#include<iostream>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		long long N, res = 0;
		int tmp = 0;
		cin >> N;
		long long M = N;
		while (N != 0){
			tmp = N % 10;
			res = res*10 + tmp;
			N /= 10;
		}
//		cout << M << " " << res << endl;
		if (M == res){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
}
