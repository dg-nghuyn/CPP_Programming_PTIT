#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string MaSV = "B20DCCN001";
		string Hoten = "";
		string Lop = "";
		string Ngaysinh = "";
		float DiemGPA = 0;
	public:
		void nhap(){
			getline(cin, Hoten);
			getline(cin, Lop);
			getline(cin, Ngaysinh);
			cin >> DiemGPA;
			if(Ngaysinh[2] != '/'){
				Ngaysinh.insert(Ngaysinh.begin(), '0');
			}
			if(Ngaysinh[5] != '/'){
				Ngaysinh.insert(Ngaysinh.begin()+3, '0');
			}
		}
		void xuat(){
			cout << MaSV << " "
			<< Hoten << " "
			<< Lop << " "
			<< Ngaysinh << " ";
			cout << fixed << setprecision(2) << DiemGPA << endl;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}