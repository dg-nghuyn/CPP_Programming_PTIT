#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct Sinhvien{
	string MaSV, Hoten, Lop;
	float DiemTHCS2, DiemC;
};

void nhap(Sinhvien &sv){
	getline(cin, sv.MaSV);
	getline(cin, sv.Hoten);
	getline(cin, sv.Lop);
	cin >> sv.DiemTHCS2 >> sv.DiemC;
	cin.ignore();
}

void in(Sinhvien &sv){
	cout << sv.MaSV << endl << sv.Hoten << endl << sv.Lop << endl << sv.DiemTHCS2 << endl << sv.DiemC << endl;
}

int main (){
	Sinhvien A;
	nhap(A);
	in(A);
}