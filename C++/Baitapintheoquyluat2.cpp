#include<bits/stdc++.h>
using namespace std;
int main (){
    cout << "Nhap N: ";
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++){
		int tmp = 2;
		for (int j = 1; j <= N; j++){
			if (i*j <= N*2){
				cout << setw(3) << i*j << " ";
			}
			else{
				cout << setw(3) << tmp << " ";
				tmp += 2;
			}
		}
		cout << endl;
	}
}