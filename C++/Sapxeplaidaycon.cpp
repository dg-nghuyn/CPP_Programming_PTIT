#include<bits/stdc++.h>
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int l = 0, r = n-1;
//		for (int i = 0; i < n; i++){
//			if (a[i] != b[i]){
//				l = i;
//				break;
//			}
//		}
//		for (int i = n-1; i >= 0; i--){
//			if (a[i] != b[i]){
//				r = i;
//				break;
//			}
//		}
//		cout << l+1 << " " << r+1 << endl;
		while (l < n && a[l] == b[l]){
			l++;
		}
		while (r >= 0 && a[r] == b[r]){
			r--;
		}
		if (l > r){
			cout << "0 0" << endl;
		}
		else cout << l+1 << " " << r+1 << endl;
	}
	return 0;
}