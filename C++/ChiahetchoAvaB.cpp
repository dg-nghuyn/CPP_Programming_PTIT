#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;  // Dùng công thức LCM để tránh tràn số
}

int cnt1(int m, int n, int a){
	int tmp1 = (m+a-1)/a;
	int tmp2 = n/a;
	return (tmp2-tmp1+1);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int M, N, A, B;
        cin >> M >> N >> A >> B;
        
        if (M > N) swap(M, N);  // Đảm bảo M <= N
        
        int bcnn = lcm(A, B);  // Tính bội chung nhỏ nhất của A và B
        
        int dau = (M + bcnn - 1) / bcnn; // Tìm bội đầu tiên của `bcnn` >= M
        int cuoi = N / bcnn;  // Tìm bội cuối cùng của `bcnn` <= N
        
//        cout << bcnn << " " << dau << " " << cuoi << endl;
//        cout << (cuoi - dau + 1) << endl;  // Số bội trong khoảng
        
        cout << cnt1(M, N, A) + cnt1(M, N, B) - (cuoi - dau +1) << endl;
    }
    return 0;
}
