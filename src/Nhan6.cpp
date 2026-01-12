#include <bits/stdc++.h>
#define ll long long
using namespace std;

int countSolutions(ll b, int p) {
    int dem = 0;

    // Nghiệm 1 của phương trình: x = 1 % p
    if (1 <= b) {
        dem++;
    }

    // Nghiệm 2 của phương trình: x = (p - 1) % p
    if (p - 1 <= b && p - 1 != 1) {
        dem++;
    }

    return dem;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll b;
        int p;
        cin >> b >> p;

        int result = countSolutions(b, p);
        cout << result << endl;
    }

    return 0;
}
