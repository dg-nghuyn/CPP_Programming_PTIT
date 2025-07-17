#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A1, A2, hieu;
unordered_map<int, int> flag;

void solve(int n, vector<int>& A1, vector<int>& A2) {
    int maxa = 0;
    int sum1 = 0, sum2 = 0;
    hieu.resize(n);

    for (int i = 0; i < n; i++) {
        sum1 += A1[i];
        sum2 += A2[i];
        hieu[i] = sum1 - sum2;

        if (hieu[i] == 0) {
            maxa = i + 1;
        }
        else if (flag.find(hieu[i]) != flag.end()) {
            maxa = max(maxa, i - flag[hieu[i]]);
        }
        else {
            flag[hieu[i]] = i;
        }
    }
    cout << maxa << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        A1.resize(n);
        A2.resize(n);
        hieu.clear();
        flag.clear();

        for (int i = 0; i < n; i++) {
            cin >> A1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> A2[i];
        }
        solve(n, A1, A2);
    }
    return 0;
}
