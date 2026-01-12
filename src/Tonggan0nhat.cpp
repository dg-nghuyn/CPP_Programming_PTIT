#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        // Thay đổi từ `sort(A, A + n);` thành không sử dụng sort vì đoạn code đầu tiên không có bước này
        int res = INT_MAX; // Sửa từ A[0] + A[1] thành INT_MAX để tìm giá trị nhỏ nhất
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(res) > abs(A[i] + A[j])) {
                    res = A[i] + A[j];
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
