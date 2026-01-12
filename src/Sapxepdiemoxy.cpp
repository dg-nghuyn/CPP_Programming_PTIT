#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
	if (x.first != y.first){
		return x.first < y.first;
	}
	else return x.second > y.second;
}

int main (){
	int n;
	cin >> n;
	pair<int, int> a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a+n, cmp);
	for (int i = 0; i < n; i++){
		cout << a[i].first << " " << a[i].second << endl;
	}
}