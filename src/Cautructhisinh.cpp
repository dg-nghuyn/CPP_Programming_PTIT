#include<bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string hoten, ngaysinh;
	double diem1, diem2, diem3, tong;
};

void nhap(ThiSinh &a){
	getline(cin, a.hoten);
	getline(cin, a.ngaysinh);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	cin.ignore();
	a.tong = a.diem1 + a.diem2 + a.diem3;
}

void in(ThiSinh &a){
	cout 
	<< a.hoten << " " 
	<< a.ngaysinh << " ";
	cout << fixed << setprecision(1) << a.tong << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}