#include <bits/stdc++.h>
using namespace std;

// Struct so sánh các chuỗi dựa trên độ dài và giá trị từ điển
struct cmp {
    bool operator() (const string& a, const string& b) const {
        if (a.size() == b.size()) {
            return a > b;
        }
        return a.size() > b.size();
    }
};

// Hàm kiểm tra số thuận nghịch
bool checkTN(const string& str) {
    if (str.size() < 2) return false;
    int len = str.size();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    map<string, int, cmp> mp;

    // Đọc và xử lý từng chuỗi từ đầu vào
    while (cin >> s) {
        if (checkTN(s)) {
            mp[s]++;
        }
    }

    // In kết quả
    for (const auto& it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}