#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string n) {
    int l = n.length();
    int sumchan = 0, sumle = 0;
    
    for (int i = 0; i < l; i++) {
        if (i % 2 == 0) {
            sumchan += n[i] - '0';
        } else {
            sumle += n[i] - '0';
        }
    }
    
    if ((sumle - sumchan) % 11 == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string N;
        getline(cin, N);
        solve(N);
    }
    return 0;
}
