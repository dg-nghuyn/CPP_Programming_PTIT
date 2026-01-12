#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	int r1 = a%2, r2 = b%2;
	if (r1 == 0 && r2 == 1) return true;
	if (r1 == 1 && r2 == 0) return false;
	if (r1 == 0 && r2 == 0) return a > b;
	if (r1 == 1 && r2 == 1) return a < b;
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
}