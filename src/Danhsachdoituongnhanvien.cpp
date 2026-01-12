#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

struct NhanVien{
	string MaNV = "";
	string Hoten = "", Gioitinh = "", Ngaysinh = "";
	string Diachi = "", Mst = "", Ngayhd = "";
	
	friend istream& operator >> (istream &is, NhanVien &sv){
		cnt++;
		scanf("\n");
		getline(is, sv.Hoten);
		getline(is, sv.Gioitinh);
		getline(is, sv.Ngaysinh);
		getline(is, sv.Diachi);		
		getline(is, sv.Mst);
		getline(is, sv.Ngayhd);
		if (cnt < 10){
			sv.MaNV = "0000" + to_string(cnt);
		}
		else sv.MaNV = "000" + to_string(cnt);
		return is;
	}
	
	friend ostream& operator << (ostream &os, NhanVien &sv){
		os << sv.MaNV << " "
		<< sv.Hoten << " "
		<< sv.Gioitinh << " "
		<< sv.Ngaysinh << " "
		<< sv.Diachi << " "
		<< sv.Mst << " "
		<< sv.Ngayhd << " " << endl;
		return os;
	}	
};

int main (){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}