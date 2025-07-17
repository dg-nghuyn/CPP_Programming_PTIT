#include <bits/stdc++.h>
using namespace std;

void solve(string S, int K) {
    bool mark[26] = {false};
    for (char c : S) {
        if (isalpha(c)) { // Ki?m tra xem ký t? có ph?i là ch? cái không
            mark[c - 'a'] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (mark[i]) {
            count++;
        }
    }

    if (26 - count > K) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string S;
        getline(cin, S);
        int K;
        cin >> K;
        cin.ignore();
        solve(S, K);
    }
}

