#include <bits/stdc++.h>
using namespace std;

void solve(string &a) {
    string res = "";
    for (int i = 0; i < a.size(); i++) {
        switch (a[i]) {
            case '1':
                break;
            case '2':
                res += '2';
                break;
            case '3':
                res += '3';
                break;
            case '4':
                res += "322";
                break;
            case '5':
                res += '5';
                break;
            case '6':
                res += "53";
                break;
            case '7':
                res += '7';
                break;
            case '8':
                res += "7222";
                break;
            case '9':
                res += "7332";
                break;
        }
    }
    sort(res.rbegin(), res.rend()); // Sắp xếp kết quả theo thứ tự giảm dần
    cout << res << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        solve(a);
    }
    return 0;
}
