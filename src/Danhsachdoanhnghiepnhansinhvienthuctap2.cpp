#include<bits/stdc++.h>
using namespace std;

struct TV{
	int dau, cuoi;
	
	friend istream& operator>> (istream& is, TV &a){
		is >> a.dau >> a.cuoi;
		is.ignore();
	}
};

struct DN{
	string mdn, ten;
	int ssv;
	
	friend istream& operator>> (istream& is, DN &a){
		getline(is, a.mdn);
		getline(is, a.ten);
		is >> a.ssv;
		is.ignore();
		return is;
	}
	
	friend ostream& operator<< (ostream& os, DN &a){
		os << a.mdn << " "
		<< a.ten << " "
		<< a.ssv << endl;
		return os;
	}
};

bool cmp(DN &a, DN &b){
	if (a.ssv != b.ssv){
		return a.ssv > b.ssv;
	}
	else return a.mdn < b.mdn;
}

int main (){
	int N;
	cin >> N;
	cin.ignore();
	DN ds[N];
	for (int i = 0; i < N; i++){
		cin >> ds[i];
	}
	sort(ds, ds+N, cmp);
	
	int Q;
	cin >> Q;
	cin.ignore();
	TV ds2[Q];
	for (int i = 0; i < Q; i++){
		cin >> ds2[i];
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << ds2[i].dau << " DEN " << ds2[i].cuoi << " SINH VIEN:" << endl;
		for (int j = 0; j < N; j++){
			if (ds[j].ssv >= ds2[i].dau && ds[j].ssv <= ds2[i].cuoi){
				cout << ds[j] << endl;
			}
		}
	}
}