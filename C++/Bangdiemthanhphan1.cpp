#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string msv, hoten, lop;
    int tt;
    float diem1 = 0.0, diem2 = 0.0, diem3 = 0.0;
};

//int cnt = 0;

void nhap(SinhVien &a) {
//    cnt++;
//    a.tt = cnt;
    getline(cin >> ws, a.msv);
    getline(cin, a.hoten);
    getline(cin, a.lop);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
    cin.ignore();
}

void sap_xep(SinhVien ds[], int N) {
    sort(ds, ds + N, [](SinhVien &a, SinhVien &b) {
        return a.msv < b.msv;
    });
}

void in_ds(SinhVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << i+1 << " "
             << ds[i].msv << " "
             << ds[i].hoten << " "
             << ds[i].lop << " "
             << fixed << setprecision(1) << ds[i].diem1 << " "
             << fixed << setprecision(1) << ds[i].diem2 << " "
             << fixed << setprecision(1) << ds[i].diem3 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    struct SinhVien ds[100];
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
