#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        set<int> C;
        
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            C.insert(A[i]);
        }
        
        int a = *C.begin(), b = *C.rbegin();
        cout << b-a + 1 - C.size();
        
		cout << endl;
    }
    return 0;
}
