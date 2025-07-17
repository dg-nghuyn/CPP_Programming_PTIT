#include<bits/stdc++.h>
using namespace std;

// Hàm nhân hai số lớn biểu diễn dưới dạng chuỗi
string multiplyStrings(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    vector<int> result(n1 + n2, 0);
    
    // Nhân từng chữ số và cộng dồn kết quả vào mảng result
    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
    
    // Chuyển đổi kết quả từ mảng sang chuỗi
    string res = "";
    for (int num : result) {
        if (!(res.empty() && num == 0)) { // Bỏ qua các số 0 dư thừa ở đầu
            res.push_back(num + '0');
        }
    }
    
    return res.empty() ? "0" : res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string x, y;
        cin >> x >> y;
        cout << multiplyStrings(x, y) << endl;
    }
    return 0;
}