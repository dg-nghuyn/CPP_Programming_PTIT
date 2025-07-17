#include<iostream>
#include<iomanip>
#include<cmath>  // Thêm thu vi?n này d? dùng hàm fabs()
using namespace std;

void solve(float a, float b){
    float tong, hieu, tich, thuong;
    tong = a + b;
    hieu = fabs(a - b);  // Dùng fabs() cho s? th?c
    tich = a * b;
    thuong = a / b;
    
    cout << tong << " " << hieu << " " << tich << " ";
    cout << setprecision(2) << fixed << thuong << endl;  // Hi?n th? v?i 2 ch? s? th?p phân
}

int main (){
    float a, b;  // S?a ki?u d? li?u thành float d? phù h?p v?i phép chia và tính toán s? th?c
    cin >> a >> b;
    solve(a, b);
    return 0;
}
