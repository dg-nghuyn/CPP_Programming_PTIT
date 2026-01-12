#include<bits/stdc++.h>
#define ll long long
using namespace std;

int pr[1000005];
void nt(){
	for (int i = 0; i < 1000000; i++){
		pr[i] = 1;
	}
	pr[0] = pr[1] = 1;
	for (int i = 2; i*i < 1000000; i++){
		if (pr[i] == 1){
			for (int j = i*i; j < 1000000; j+=i){
				pr[j] = 0;
			}	
		}
	}
}

int check(ll n){
	int A[] = {0};
	int cnt = 0;
	while (n != 0){
		int tmp = n% 10;
		A[cnt++] = tmp;
		n/=10;
	}
	for (int i = 0; i < cnt; i++){
		for (int j = i+1; j < cnt; j++){
			if (A[i] == A[j]){
				return 0;
			}
		}
	}
	return 1;
}

main (){
	ll n;
	cin >> n;
	nt();
	int cnt = 0;
	for (int i = 2; i <= n; i++){
		if (pr[i] == 1 && check(i) == 1){
			cnt++;
		}
	}
	cout << cnt << endl;
}