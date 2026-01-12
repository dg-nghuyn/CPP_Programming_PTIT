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

void nhap(SinhVien &a){
	a.MaSV = "B20DCCN001";
	getline(cin, a.Hoten);
	getline(cin, a.Lop);
	getline(cin, a.Ngaysinh);
	cin >> a.DiemGPA;
	
	chuanhoa(a.Ngaysinh);
}

void in(const SinhVien &a){
	cout 
	<< a.MaSV << " "
	<< a.Hoten << " "
	<< a.Lop << " "
	<< a.Ngaysinh << " ";
	cout << fixed << setprecision(2) << a.DiemGPA << endl;
	
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}