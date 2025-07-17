#include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<int> prime;

// Hàm sàng nguyên tố (Sieve of Eratosthenes)
void Sangnguyento(int l){
    prime.resize(l+1, 1);  // Khởi tạo vector với giá trị 1
    prime[0] = prime[1] = 0;  // 0 và 1 không phải số nguyên tố

    for (int i = 2; i*i <= l; i++){
        if (prime[i]){
            for (int j = i*i; j <= l; j += i){
                prime[j] = 0;
            }
        }
    }
}

// Hàm tính tổng các chữ số
int tong(ll a){
    int sum = 0;
    while (a != 0){
        sum += a % 10;  // Lấy chữ số cuối
        a /= 10;        // Loại bỏ chữ số cuối
    }
    return sum;
}

// Hàm giải quyết bài toán
void solve(int N, ll S){
    ll l = pow(10, N);  // Giới hạn số có N chữ số
    Sangnguyento(l);    // Tìm các số nguyên tố từ 2 đến l

    // Tìm các số nguyên tố có tổng các chữ số bằng S
    for (int i = pow(10, N-1); i < l; i++){
        if (prime[i] && tong(i) == S){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main (){
    int T;  // Số lượng test case
    cin >> T;
    
    while (T--){
        int N;  // Số chữ số của số nguyên tố
        ll S;   // Tổng các chữ số của số nguyên tố
        cin >> N >> S;

        solve(N, S);  // Gọi hàm xử lý
    }
    return 0;
}