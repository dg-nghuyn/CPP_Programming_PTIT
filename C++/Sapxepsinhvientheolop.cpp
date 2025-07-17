#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv, ht, lop, email;
	
	friend istream& operator>> (istream& is, SinhVien &a){
		getline(is, a.msv);
		getline(is, a.ht);
		getline(is, a.lop);
		getline(is, a.email);
		return is;
	}
	
	friend ostream& operator<< (ostream& os, SinhVien &a){
		os << a.msv << " "
		<< a.ht << " "
		<< a.lop << " "
		<< a.email << " " << endl;
		return os;
	}
};

bool cmp(SinhVien &a, SinhVien &b){
	if (a.lop != b.lop)
		return (a.lop < b.lop);
	else return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int N){
	sort(ds, ds+N, cmp);
}

int main (){
	int N, i;
	cin >> N;
	cin.ignore();
	SinhVien ds[N];
	for (int i = 0; i < N; i++){
		cin >> ds[i];
	}
	sapxep(ds, N);
	for (int i = 0; i < N; i++){
		cout << ds[i];
	}
}