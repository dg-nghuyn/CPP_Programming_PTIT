#include<iostream>
using namespace std;
int main (){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++){
		if (i != N/2){
			for (int j = 0; j < N; j++){
				if (j == 0 || j == N-1){
					cout << "*";
				}
				else cout << " ";
			}
			cout << endl;
		}
		else{
			for (int j = 0; j < N; j++){
				cout << "*";
			}
			cout << endl;
		}
	}
}