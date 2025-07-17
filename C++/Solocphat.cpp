#include<iostream>
using namespace std;

int check(int N){
	if (N == 0 || N == 6 || N == 8){
		return 1;
	}
	return 0;
}

int main (){
	long long T, N;
	cin >> T;
	while (T--){
		int N;
		cin >> N;
		int flag = 1;
		while (N != 0){
			int tmp = N % 10;
			if (check(tmp) == 0){
				flag = 0;
				break;
			}
			N /= 10;
		}
		if (flag == 1){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
