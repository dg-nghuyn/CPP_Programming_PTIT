#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x = 5;
	if (binary_search(a, a+n, x)){
		cout << "YES\n";
	}
	else cout << "NO\n";
}