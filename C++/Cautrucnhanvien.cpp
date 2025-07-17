#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string MaNV, Hoten, Gioitinh, Ngaysinh, Diachi, MST, Hopdong;
};

void nhap (NhanVien &a){
	a.MaNV = "00001";
	getline(cin, a.Hoten);
	getline(cin, a.Gioitinh);
	getline(cin, a.Ngaysinh);
	getline(cin, a.Diachi);
	getline(cin, a.MST);
	getline(cin, a.Hopdong);
}

void in(NhanVien &a){
	cout << a.MaNV << " "
	<< a.Hoten << " "
	<< a.Gioitinh << " "
	<< a.Ngaysinh << " "
	<< a.Diachi << " "
	<< a.MST << " "
	<< a.Hopdong << endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}