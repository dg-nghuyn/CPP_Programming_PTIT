#include <bits/stdc++.h>
using namespace std;

string viettat(const string &a) {
    if (a == "KE TOAN") {
        return "KT";
    }
    if (a == "CONG NGHE THONG TIN") {
        return "CN";
    }
    if (a == "AN TOAN THONG TIN") {
        return "AT";
    }
    if (a == "VIEN THONG") {
        return "VT";
    }
    if (a == "DIEN TU") {
        return "DT";
    }
}

struct SinhVien {
    string msv, ht, lop, email;

    friend istream& operator>>(istream &is, SinhVien &a) {
        getline(is, a.msv);
        getline(is, a.ht);
        getline(is, a.lop);
        getline(is, a.email);
        return is;
    }

    friend ostream& operator<<(ostream &os, const SinhVien &a) {
        os << a.msv << " "
           << a.ht << " "
           << a.lop << " "
           << a.email;
        return os;
    }
};

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    SinhVien ds[N];
    for (int i = 0; i < N; i++) {
        cin >> ds[i];
    }
    
    int Q;
    cin >> Q;
    cin.ignore();
    
    vector<string> lops(Q);
    for (int i = 0; i < Q; i++) {
        getline(cin, lops[i]);
        for (int j = 0; j < lops[i].size(); j++) {
            lops[i][j] = toupper(lops[i][j]);
        }
    }
    
    for (int i = 0; i < Q; i++) {
        cout << "DANH SACH SINH VIEN NGANH " << lops[i] << ":" << endl;
        for (int j = 0; j < N; j++) {
            string nganh = viettat(lops[i]);
            if (ds[j].msv.substr(3, 4) == "DCCN" && ds[j].lop[0] != 'E' && nganh == "CN") {
                cout << ds[j] << endl;
            } else if (ds[j].msv.substr(3, 4) == "DCAT" && ds[j].lop[0] != 'E' && nganh == "AT") {
                cout << ds[j] << endl;
            } else if (ds[j].msv.substr(3, 4) == "DCKT" && nganh == "KT") {
                cout << ds[j] << endl;
            } else if (ds[j].msv.substr(3, 4) == "DCVT" && nganh == "VT") {
                cout << ds[j] << endl;
            } else if (ds[j].msv.substr(3, 4) == "DCDT" && nganh == "DT") {
                cout << ds[j] << endl;
            }
        }
    }
    return 0;
}
