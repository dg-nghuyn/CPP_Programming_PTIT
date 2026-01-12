#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin >> T;
	while (T--){
		ll n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		vector<ll> a(n1), b(n2), c(n3);

		for (int i = 0; i < n1; i++){
			cin >> a[i];
		}
		
		for (int i = 0; i < n2; i++){
			cin >> b[i];
		}
		
		for (int i = 0; i < n3; i++){
			cin >> c[i];
		}
		
		vector<ll> res;
		int i = 0, j = 0, k = 0;
		
		while (i < n1 && j < n2 && k < n3){
			if (a[i] == b[j] && a[i] == c[k]){
				res.push_back(a[i]);
				i++;
				j++;
				k++;
			}
			else if (a[i] < b[j]){
				i++;
			}
			else if (b[j] < c[k]){
				j++;
			}
			else {
				k++;
			}
		}
		
		if (res.empty()){
			cout << "-1" << endl;
		}
		else{
			for (ll x : res){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}