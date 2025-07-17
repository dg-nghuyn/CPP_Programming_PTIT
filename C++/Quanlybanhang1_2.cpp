#include<bits/stdc++.h>
using namespace std;

int cntkh = 0;

class KhachHang {
    string mkh, tkh, gt, ns, dc;
public:
    KhachHang() {
        cntkh++;
        if (cntkh < 10) mkh = "KH00" + to_string(cntkh);
        else mkh = "KH0" + to_string(cntkh);
    }

    string getMkh() const { return mkh; }
    string getTkh() const { return tkh; }
    string getDc() const { return dc; }

    friend istream& operator>>(istream &is, KhachHang &kh) {
        getline(is, kh.tkh);
        getline(is, kh.gt);
        getline(is, kh.ns);
        getline(is, kh.dc);
        return is;
    }

    friend class HoaDon; // Khai báo HoaDon là bạn của KhachHang
};

int cntmh = 0;

class MatHang {
    string mmh, tmh, dvt;
    long gm, gb;
public:
    MatHang() {
        cntmh++;
        if (cntmh < 10) mmh = "MH00" + to_string(cntmh);
        else mmh = "MH0" + to_string(cntmh);
    }

    string getMmh() const { return mmh; }
    string getTmh() const { return tmh; }
    string getDvt() const { return dvt; }
    long getGm() const { return gm; }
    long getGb() const { return gb; }

    friend istream& operator>>(istream &is, MatHang &mh) {
        getline(is, mh.tmh);
        getline(is, mh.dvt);
        is >> mh.gm >> mh.gb;
        is.ignore(); // Đọc bỏ ký tự newline sau số
        return is;
    }

    friend class HoaDon; // Khai báo HoaDon là bạn của MatHang
};

int cnthd = 0;

class HoaDon {
    string mhd, mkh, mmh;
    long sl;
public:
    HoaDon() {
        cnthd++;
        if (cnthd < 10) mhd = "HD00" + to_string(cnthd);
        else mhd = "HD0" + to_string(cnthd);
    }

    friend istream& operator>>(istream &is, HoaDon &hd) {
        is >> hd.mkh >> hd.mmh >> hd.sl;
        return is;
    }

    friend ostream& operator<<(ostream &os, const HoaDon &hd) {
        // Tìm thông tin khách hàng và mặt hàng từ mã
        const KhachHang &kh = findKhachHang(hd.mkh);
        const MatHang &mh = findMatHang(hd.mmh);

        // Tính thành tiền
        long long tt = (long long)mh.getGb() * hd.sl;

        // In thông tin hóa đơn
        os << hd.mhd << " "
           << kh.getTkh() << " "
           << kh.getDc() << " "
           << mh.getTmh() << " "
           << mh.getDvt() << " "
           << mh.getGm() << " "
           << mh.getGb() << " "
           << hd.sl << " "
           << tt << endl;
        return os;
    }

    static const KhachHang& findKhachHang(const string &mkh);
    static const MatHang& findMatHang(const string &mmh);
};

KhachHang dskh[25];
MatHang dsmh[45];

const KhachHang& HoaDon::findKhachHang(const string &mkh) {
    for (int i = 0; i < 25; i++) {
        if (dskh[i].getMkh() == mkh) return dskh[i];
    }
    throw runtime_error("Khach hang not found");
}

const MatHang& HoaDon::findMatHang(const string &mmh) {
    for (int i = 0; i < 45; i++) {
        if (dsmh[i].getMmh() == mmh) return dsmh[i];
    }
    throw runtime_error("Mat hang not found");
}

int main() {
    int N, M, K, i;
    cin >> N;
    cin.ignore();  // Để bỏ qua ký tự newline sau số lượng khách hàng
    for (i = 0; i < N; i++) cin >> dskh[i];
    cin >> M;
    cin.ignore();  // Để bỏ qua ký tự newline sau số lượng mặt hàng
    for (i = 0; i < M; i++) cin >> dsmh[i];
    HoaDon dshd[105];
    cin >> K;
    for (i = 0; i < K; i++) cin >> dshd[i];

    for (i