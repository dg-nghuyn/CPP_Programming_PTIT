/*
thuật toán tìm kiếm nhị phân
*/

#include<iostream>
using namespace std;

void binary_search(int a[], int n, int y){
	int res = -1;
	int l = 0, r = n-1;
	while (l <= r){
		int m = (l+r)/2;
		if (a[m] == y){
			res = m;
			break;
		}
		else if (a[m] < y){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	cout << res << endl;
}

int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int y;
	cin >> y;
	binary_search(a, n, y);
	return 0;
}