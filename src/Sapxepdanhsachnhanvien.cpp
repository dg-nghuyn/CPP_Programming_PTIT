#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string Manv = "000";
    string Hoten, Gioitinh, Ngaysinh;
    string Diachi, Mst, Ngayhd;
};

int cnt = 0;

void nhap(NhanVien &a) {
    cnt++;
    if (cnt < 10) {
        a.Manv = a.Manv + "0" + to_string(cnt);
    } else {
        a.Manv = a.Manv + to_string(cnt);
    }
    getline(cin >> ws, a.Hoten); // Đảm bảo đọc đúng dữ liệu
    cin >> a.Gioitinh >> a.Ngaysinh;
    cin.ignore();
    getline(cin >> ws, a.Diachi);
    cin >> a.Mst >> a.Ngayhd;
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << ds[i].Manv << " "
             << ds[i].Hoten << " "
             << ds[i].Gioitinh << " "
             << ds[i].Ngaysinh << " "
             << ds[i].Diachi << " "
             << ds[i].Mst << " "
             << ds[i].Ngayhd << endl;
    }
}

bool cmp(NhanVien &a, NhanVien &b) {
    int year1 = stoi(a.Ngaysinh.substr(6, 4));
    int year2 = stoi(b.Ngaysinh.substr(6, 4));
    if (year1 != year2) {
        return year1 < year2;
    } else {
        int month1 = stoi(a.Ngaysinh.substr(0, 2));
        int month2 = stoi(b.Ngaysinh.substr(0, 2));
        if (month1 != month2) {
            return month1 < month2;
        } else {
            int day1 = stoi(a.Ngaysinh.substr(3, 2));
            int day2 = stoi(b.Ngaysinh.substr(3, 2));
            return day1 < day2;
        }
    }
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}