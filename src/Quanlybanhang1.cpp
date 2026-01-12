#include<bits/stdc++.h>
using namespace std;

int cntkh = 0;
int cntmh = 0;

struct KhachHang{
	string mkh, tkh, gt, ns, dc;
	
	friend istream& operator >> (istream &is, KhachHang &kh){
		cntkh++;
		scanf("\n");		
		getline(is, kh.tkh);
		getline(is, kh.gt);
		getline(is, kh.ns);
		getline(is, kh.dc);
		if (cntkh < 10){
			kh.mkh = "KH00" + to_string(cntkh);
		}
		else kh.mkh = "KH0" + to_string(cntkh);
		return is;
	}
};

struct MatHang{
	string mmh, tmh, dvt;
	long gm, gb;
	
	friend istream& operator >> (istream &is, MatHang &mh){
		cntmh++;
		scanf("\n");
		getline(is, mh.tmh);
		getline(is, mh.dvt);
		is >> mh.gm >> mh.gb;
		if (cntmh < 10){
			mh.mmh = "MH00" + to_string(cntmh);
		}
		else mh.mmh = "MH0" + to_string(cntmh);
		return is;
	}
};

struct HoaDon{
	string mhd, mkh, mmh;
	long sl;
	
	friend istream& operator >> (istream &is, HoaDon &hd){
		getline(is, hd.mhd);
		getline(is, hd.mkh);
		getline(is, hd.mmh);
		is >> hd.sl;
		return is;
	}
	
	friend ostream& operator << (ostream &os, HoaDon &hd){
		os << hd.mhd << " "
		<< tkh << " "
		<< dc << " "
		<< tmh << " "
		<< dvt << " "
		<< gm << " "
		<< gb << " "
		<< sl << " "
		<< tt << " "
		<< endl;
		return os;
	}
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}