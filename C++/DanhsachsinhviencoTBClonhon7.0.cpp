#include<bits/stdc++.h>
using namespace std;

struct MonHoc{
	int ma;
	string ten;
	int tc;
	float diem_cc, diem_kt, diem_thi, diem_tb;
};

struct SinhVien{
	int ma;
	string ho_ten, lop;
	MonHoc *sv_mh;
	float diem_tb;
};

MonHoc tim_mh(int ma, MonHoc mang_mh[], int n){
	for (int i = 0; i < n; i++){
		if (mang_mh[i].ma == ma){
			return mang_mh[i];
		}
	}
	MonHoc mh;
	mh.ma = -1;
	return mh;
}

int main (){
	int n, m;
	cin >> n >> m;
	
	MonHoc *mang_mh = new MonHoc[n];
	for (int i = 0; i < n; i++){
		cin >> mang_mh[i].ma;
		cin.ignore();
		getline(cin, mang_mh[i].ten);
		cin >> mang_mh[i].tc;
	}
	
	SinhVien *mang_sv = new SinhVien[m];
	for (int i = 0; i < m; i++){
		cin >> mang_sv[i].ma;
		cin.ignore();
		getline(cin, mang_sv[i].ho_ten);
		getline(cin, mang_sv[i].lop);
		int k;
		cin >> k;
		mang_sv[i].sv_mh = new MonHoc[k];
		float tong_diem = 0;
		float tong_tc = 0;
		for (int j = 0; j < k; j++){
			int  ma_j;
			cin >> ma_j;
			mang_sv[i].sv_mh[j] = tim_mh(ma_j, mang_mh, n);{
				cin >> mang_sv[i].sv_mh[j].diem_cc;
				cin >> mang_sv[i].sv_mh[j].diem_kt;
				cin >> mang_sv[i].sv_mh[j].diem_thi;
				mang_sv[i].sv_mh[j].diem_tb = (
				mang_sv[i].sv_mh[j].diem_cc * 10 + 
				mang_sv[i].sv_mh[j].diem_kt * 20 +
				mang_sv[i].sv_mh[j].diem_thi * 70) / 100;
				tong_diem += mang_sv[i].sv_mh[j].diem_tb * mang_sv[i].sv_mh[j].tc;
				tong_tc += mang_sv[i].sv_mh[j].tc;
			}
			mang_sv[i].diem_tb = tong_diem/ tong_tc;
		}
		
		}
		for (int i = 0; i < m; i++){
			if (mang_sv[i].diem_tb >= 7.0){
				cout << mang_sv[i].ma << " "
				<< mang_sv[i].ho_ten << " "
				<< mang_sv[i].diem_tb << " "
				<< mang_sv[i].lop << endl;
			}
	}
}