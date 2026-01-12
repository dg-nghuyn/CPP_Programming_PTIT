#include <bits/stdc++.h>
using namespace std;

int countInversions(vector<int> &arr) {
    int n = arr.size();
    vector<int> leftGreater(n, 0);  // Số phần tử lớn hơn a[j] ở bên trái
    vector<int> rightSmaller(n, 0); // Số phần tử nhỏ hơn a[j] ở bên phải

    // Đếm số phần tử lớn hơn arr[j] ở bên trái mỗi phần tử
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < j; i++) {
            if (arr[i] > arr[j]) {
                leftGreater[j]++;
            }
        }
    }

    // Đếm số phần tử nhỏ hơn arr[j] ở bên phải mỗi phần tử
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if (arr[k] < arr[j]) {
                rightSmaller[j]++;
            }
        }
    }

    // Tính tổng số bộ 3 nghịch thế
    int count = 0;
    for (int j = 0; j < n; j++) {
        count += leftGreater[j] * rightSmaller[j];
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countInversions(arr) << endl;
    return 0;
}
