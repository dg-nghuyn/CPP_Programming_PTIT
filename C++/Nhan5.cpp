#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    
    ll MAX = 1000000005;
    vector<ll> A(MAX);
    for (ll i = 0; i < MAX; i++) {
        A[i] = i + 1;
    }

    while (n--) {
        ll x, y;
        cin >> x >> y;
        swap(A[x - 1], A[y - 1]);
    }

    ll cnt = 0;
    for (ll i = 0; i < MAX; i++) {
        for (ll j = i + 1; j < MAX; j++) {
            if (A[i] > A[j]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
