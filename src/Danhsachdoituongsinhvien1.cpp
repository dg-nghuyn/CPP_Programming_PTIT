#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int cnt = 0;

void chuanhoa(string &ngaysinh){
	if (ngaysinh[2] != '/'){
			ngaysinh.insert(0, "0");
	}
	if (ngaysinh[5] != '/'){
		ngaysinh.insert(3, "0");
	}
}

struct SinhVien{
	string MaSV = "";
	string Hoten = "", Lop = "", Ngaysinh = "";
	float DiemGPA = 0.0;
	
	friend istream& operator >> (istream &is, SinhVien &sv){
		cnt++;
		is.ignore();		
		getline(is, sv.Hoten);
		getline(is, sv.Lop);
		getline(is, sv.Ngaysinh);
		is >> sv.DiemGPA;
		chuanhoa(sv.Ngaysinh);
		if (cnt < 10){
			sv.MaSV = sv.MaSV + "B20DCCN00" + to_string(cnt);
		}
		else sv.MaSV = sv.MaSV + "B20DCCN0" + to_string(cnt);
		return is;
	}
	
	friend ostream& operator << (ostream &os, SinhVien &sv){
		os << sv.MaSV << " "
		<< sv.Hoten << " "
		<< sv.Lop << " "
		<< sv.Ngaysinh << " "
		<< fixed << setprecision(2) << sv.DiemGPA << endl;
		return os;
	}
	
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}