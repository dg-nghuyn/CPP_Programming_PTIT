#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		int n; 
		cin >> n; 
		vector<int> a(n); 
		int check = 1, result; 
		for (int i = 0; i < n; i++) { 
			cin >> a[i]; 
			if(check) { 
				for (int j = 0; j < i; j++) 
					if(a[j] == a[i]) {
						check = 0; result = a[i]; break; 
					} 
				} 
		}
		if (check) cout << "-1\n"; 
		else cout << result << endl; 
	}
	return 0; 
}