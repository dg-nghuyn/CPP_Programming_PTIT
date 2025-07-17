#include<iostream>
#include<string>  // Thêm thư viện string để xử lý chuỗi có khoảng trắng
using namespace std;

class Monhoc {
private:
    string MaMH, TenMH;
    int SoTC;
    float DiemCC, DiemKT, DiemThi;

public:
    Monhoc() = default;

    Monhoc(string ma, string ten, int so, float cc, float kt, float thi)
        : MaMH(ma), TenMH(ten), SoTC(so), DiemCC(cc), DiemKT(kt), DiemThi(thi) {}

    string getMaMH() const { return MaMH; }
    string getTenMH() const { return TenMH; }

    float DiemTB() const {
        return DiemCC * 0.1 + DiemKT * 0.2 + DiemThi * 0.7;
    }

    void nhap() {
        cout << "Ma Mon Hoc: ";
        cin.ignore();  
        cout << "Ten Mon Hoc: "; getline(cin, TenMH); 
        cout << "So Tin Chi: "; cin >> SoTC;
        cout << "Diem Chuyen Can: "; cin >> DiemCC;
        cout << "Diem Kiem Tra: "; cin >> DiemKT;
        cout << "Diem Thi: "; cin >> DiemThi;
    }

    void xuat() const {
        cout << "Ma Mon Hoc: " << MaMH << ", Ten Mon Hoc: " << TenMH 
             << ", So TC: " << SoTC << ", Diem TB: " << DiemTB() << endl;
    }
};

class Sinhvien {
private:
    string MaSV, Hoten, Lop;
    Monhoc* dsMonhoc;
    int soMon;

public:
    Sinhvien() : dsMonhoc(nullptr), soMon(0) {}

    Sinhvien(string ma, string ten, string lop) 
        : MaSV(ma), Hoten(ten), Lop(lop), dsMonhoc(nullptr), soMon(0) {}

    ~Sinhvien() {
        delete[] dsMonhoc;
    }

    void nhap() {
        cout << "Ma SV: "; cin >> MaSV;
        cin.ignore();  
        cout << "Ho Ten SV: "; getline(cin, Hoten);  
        cout << "Lop: "; cin >> Lop;
        cout << "So mon hoc: "; cin >> soMon;
        dsMonhoc = new Monhoc[soMon];  
        for (int i = 0; i < soMon; i++) {
            cout << "Nhap thong tin mon hoc " << i + 1 << ": " << endl;
            dsMonhoc[i].nhap();
        }
    }

    float DiemTB() const {
        float tongDiem = 0;
        for (int i = 0; i < soMon; i++) {
            tongDiem += dsMonhoc[i].DiemTB();
        }
        return tongDiem / soMon;
    }

    bool Khenthuong() const {
        return DiemTB() >= 7.0;
    }

    void xuatcoban() const {
        cout << "Ma SV: " << MaSV << "; Ho ten: " << Hoten << "; Lop: " << Lop << endl;
    }
};

int main() {
    int soSinhvien;
    cout << "Nhap so sinh vien: "; cin >> soSinhvien;
    
    Sinhvien* dsSinhvien = new Sinhvien[soSinhvien];

    for (int i = 0; i < soSinhvien; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ": " << endl;
        dsSinhvien[i].nhap();
    }

    cout << "\nDanh sach sinh vien co Diem TB >= 7.0: " << endl;
    for (int i = 0; i < soSinhvien; i++) {
        if (dsSinhvien[i].Khenthuong()) {
            dsSinhvien[i].xuatcoban();
        }
    }

    delete[] dsSinhvien;

    return 0;
}
