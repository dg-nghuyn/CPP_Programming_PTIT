#include<bits/stdc++.h>
using namespace std;

void xuat(char a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main (){
	int n;
	cin >> n;
	char a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a+n);
	xuat(a, n);
	
	sort(a, a+n, greater<int>());
	xuat(a, n);
	
	sort(a+3, a+8);
	xuat(a, n);

	
}