#include<bits/stdc++.h>
using namespace std;

int tong(int n){
	int ans = 0;
	while (n){
		ans += (n%10);
		n/=10;
	}
	return ans;
}

bool cmp(int a, int b){
	if (tong(a) < tong(b)){
		return true;
	}
	else return false;
}

int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	stable_sort(a, a+n, cmp);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}