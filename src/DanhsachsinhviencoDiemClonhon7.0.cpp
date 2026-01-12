#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    int ma;
    string hoten;
    float diemthcs2, diemc;
};

bool xepten(SinhVien a, SinhVien b) {
    return a.hoten < b.hoten;
}

bool xepdiemthcs2(SinhVien a, SinhVien b) {
    return a.diemthcs2 > b.diemthcs2;
}

int main() {
    int N;
    cin >> N;

    SinhVien *mang_sv = new SinhVien[N];
    for (int i = 0; i < N; i++) {
        cin >> mang_sv[i].ma;
        cin.ignore();
        getline(cin, mang_sv[i].hoten);
        cin >> mang_sv[i].diemthcs2 >> mang_sv[i].diemc;
    }

    cout << "Danh sach sinh vien co diem C++ >= 7.0:\n";
    for (int i = 0; i < N; i++) {
        if (mang_sv[i].diemc >= 7.0) {
            cout << mang_sv[i].ma << " "
                 << mang_sv[i].hoten << " "
                 << mang_sv[i].diemthcs2 << " "
                 << mang_sv[i].diemc << endl;
        }
    }

    sort(mang_sv, mang_sv + N, xepten);
    cout << "\nDanh sach sinh vien theo thu tu tu dien cua ho ten:\n";
    for (int i = 0; i < N; i++) {
        cout << mang_sv[i].ma << " "
             << mang_sv[i].hoten << " "
             << mang_sv[i].diemthcs2 << " "
             << mang_sv[i].diemc << endl;
    }

    sort(mang_sv, mang_sv + N, xepdiemthcs2);
    cout << "\nDanh sach sinh vien theo diem THCS2 giam dan:\n";
    for (int i = 0; i < N; i++) {
        cout << mang_sv[i].ma << " "
             << mang_sv[i].hoten << " "
             << mang_sv[i].diemthcs2 << " "
             << mang_sv[i].diemc << endl;
    }

    delete[] mang_sv;
    return 0;
}