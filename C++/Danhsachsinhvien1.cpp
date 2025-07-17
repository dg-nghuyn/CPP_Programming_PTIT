#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int cnt = 0;

struct SinhVien{
	string MaSV = "";
	string Hoten = "", Lop = "", Ngaysinh = "";
	float DiemGPA = 0;
	
};

void chuanhoa(string &ngaysinh){
	if (ngaysinh[2] != '/'){
			ngaysinh.insert(0, "0");
	}
	if (ngaysinh[5] != '/'){
		ngaysinh.insert(3, "0");
	}
}

void nhap(SinhVien ds[], int N){
	for (int i = 1; i <= N; i++){
		cnt++;
		cin.ignore();
		getline(cin, ds[i].Hoten);
		getline(cin, ds[i].Lop);
		getline(cin, ds[i].Ngaysinh);
		cin >> ds[i].DiemGPA;
		chuanhoa(ds[i].Ngaysinh);
		if (cnt < 10){
			ds[i].MaSV = ds[i].MaSV + "B20DCCN00" + to_string(cnt);
		}
		else ds[i].MaSV = ds[i].MaSV + "B20DCCN0" + to_string(cnt);
		}
}

void in(SinhVien ds[], int N){
	for (int i = 1; i <= N; i++){
		cout << ds[i].MaSV << " " <<
		ds[i].Hoten << " " <<
		ds[i].Lop << " " <<
		ds[i].Ngaysinh << " ";
		cout << fixed << setprecision(2) << ds[i].DiemGPA << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
//    return 0;
}