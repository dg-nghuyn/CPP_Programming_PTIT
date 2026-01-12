#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct SinhVien{
	string masv, ten, lop;
	float diem1, diem2, diem3;
};

void nhap(SinhVien &sv){
	cin.ignore();
	getline(cin, sv.masv);
	getline(cin, sv.ten);
	getline(cin, sv.lop);
	cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

bool xepmasv(SinhVien a, SinhVien b) {
    return a.masv < b.masv;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds, ds + n, xepmasv);
}

void in_ds(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << i+1 << " " << ds[i].masv << " " << ds[i].ten << " " << ds[i].lop << " ";
		cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
	}
}

int main (){
	int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}