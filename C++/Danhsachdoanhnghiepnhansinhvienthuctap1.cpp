#include<bits/stdc++.h>
using namespace std;

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
	for (int i = 0; i < N; i++){
		cout << ds[i];
	}
}