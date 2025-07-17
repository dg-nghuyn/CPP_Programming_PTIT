#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct SinhVien{
	string MaSV, Hoten, Lop, Ngaysinh;
	float DiemGPA;
};

void chuanhoa(string &ngaysinh){
	stringstream ss(ngaysinh);
	string ngay, thang, nam;
	
	getline(ss, ngay, '/');
	getline(ss, thang, '/');
	getline(ss, nam);
	
	if (ngay.length() == 1){
		ngay = "0" + ngay;
	}
	if (thang.length() == 1){
		thang = "0" + thang;
	}
	
	ngaysinh = ngay + "/" + thang + "/" + nam;
}

void nhapThongTinSV(SinhVien &a){
	a.MaSV = "N20DCCN001";
	getline(cin, a.Hoten);
//	getline(cin, a.Lop);
//	getline(cin, a.Ngaysinh);
	cin >> a.Lop;
	cin.ignore();
	cin >> a.Ngaysinh;
	cin.ignore();
	cin >> a.DiemGPA;
	
	chuanhoa(a.Ngaysinh);
}

void inThongTinSV(const SinhVien &a){
	cout 
	<< a.MaSV << " "
	<< a.Hoten << " "
	<< a.Lop << " "
	<< a.Ngaysinh << " ";
	cout << fixed << setprecision(2) << a.DiemGPA << endl;
	
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}