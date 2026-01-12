#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll N) {
    if (N % 2 != 0) {
        cout << "0" << endl;
        return;
    }

    ll count = 0;
    for (ll i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            // Kiểm tra nếu i là ước chẵn
            if (i % 2 == 0) {
                count++;
            }
            // Kiểm tra nếu N / i là ước chẵn và khác i
            if ((N / i) % 2 == 0 && i != N / i) {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        solve(N);
    }
    return 0;
}
