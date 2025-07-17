#include<bits/stdc++.h>
using namespace std;

int lastpos(int a[], int n, int x){
	int pos = -1;
	int l = 0, r = n-1; 
	while (l <= r){
		int m = l + (r-l)/2;
		if (a[m] == x){
			pos = m; 
			l = m+1;
		}
		else if (a[m] < x){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return pos;
}

int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	
	int x;
	cin >> x;
	cout << lastpos(a, n, x) << endl;
}