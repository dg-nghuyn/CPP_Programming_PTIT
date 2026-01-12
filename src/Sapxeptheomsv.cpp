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
	
	friend ostream& operator<< (ostream& os, const SinhVien &a){
		os << a.msv << " "
		<< a.ht << " "
		<< a.lop << " "
		<< a.email << " " << endl;
		return os;
	}
};

bool cmp(SinhVien &a, SinhVien &b){
	return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int N){
	sort(ds, ds+N, cmp);
}

int main (){
	vector<SinhVien> ds;
	SinhVien sv;
	while (cin >> sv){
		ds.push_back(sv);
	}
	sapxep(ds.data(), ds.size());
	for (const SinhVien &s : ds){ 
		cout << s << endl;
	}
	return 0;
}