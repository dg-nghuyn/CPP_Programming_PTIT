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

int main (){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}