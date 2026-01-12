#include<bits/stdc++.h>
using namespace std;

// Hàm tính tổng các chữ số của x
int Sum(int a) {
    int tmp = 0, tong = 0;
    while (a != 0) {
        tmp = a % 10;
        tong += tmp;
        a /= 10;
    }
    return tong;
}

void solve(int a, int b, int c) {
    vector<int> A;  // Sử dụng vector thay cho mảng tĩnh
    
    for (int s = 1; s <= 81; s++) {  // Duyệt từ 1 đến 81
        long long x = b * pow(s, a) + c;  // Sử dụng pow(s, a) để tính toán
        
        // Kiểm tra x có nằm trong khoảng hợp lệ và tổng chữ số của x có bằng s không
        if (x > 0 && x <= 1000000000 && Sum(x) == s) {
            A.push_back(x);  // Lưu nghiệm vào vector
        }
    }
    
    sort(A.begin(), A.end());  // Sắp xếp các nghiệm
    
    cout << A.size() << endl;  // In ra số lượng nghiệm
    
    for (int i = 0; i < A.size(); i++) {  // In ra các nghiệm
        cout << A[i] << " ";
    }
    cout << endl;
}

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}
