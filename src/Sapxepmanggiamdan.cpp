#include<bits/stdc++.h>
using namespace std;

bool cmp1(int a, int b){
	if (a > b){
		return true;
	}
	else{
		return false;
	}
}

int main (){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, cmp1);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}