#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	
	while (T--){
		int N;
		cin >> N;
		int A[N];
		for (int i = 0; i < N; i++){
			cin >> A[i];
		}
		
		int suma[N], sumb[N];
		suma[0] = A[0], sumb[N-1] = A[N-1];
		for (int i = 1; i < N; i++){
			suma[i] = suma[i-1]+A[i];
		}
		
		for (int i = N-2; i >= 0; i--){
			sumb[i] = sumb[i+1]+A[i];
		}
		
		int flag = -1;
		for (int i = 1; i < N-1; i++){
			if (suma[i-1] == sumb[i+1]){
				flag = i+1;
				break;
			}
		}
		cout << flag << endl;
	}
}