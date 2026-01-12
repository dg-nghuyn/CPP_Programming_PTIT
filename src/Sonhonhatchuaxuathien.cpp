#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        vector<bool> xuathien(n + 1, false);
        for (int i = 0; i < n; ++i) {
            if (v[i] > 0 && v[i] <= n) {
                xuathien[v[i]] = true;
            }
        }

        int result = n + 1;
        for (int i = 1; i <= n; ++i) {
            if (!xuathien[i]) {
                result = i;
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}
