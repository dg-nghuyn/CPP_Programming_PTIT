#include<bits/stdc++.h>
using namespace std;

struct Tg{
	int h, m, s;
};

void nhap(Tg ds[], int N){
	for (int i = 0; i < N; i++){
		cin >> ds[i].h >> ds[i].m >> ds[i].s;
	}
}

void sap_xep(Tg ds[], int N){
	sort(ds, ds+N, [](const Tg &a, const Tg &b){
		if (a.h != b.h){
			return a.h < b.h;
		}
		else if (a.m != b.m){
			return a.m < b.m;
		}
		else return a.s < b.s;
	});
}

void in(Tg ds[], int N){
	for (int i = 0; i < N; i++){
		cout << ds[i].h << " "
		<< ds[i].m << " "
		<< ds[i].s << " " << endl;
	}
}

int main (){
	int N;
	cin >> N;
	Tg ds[5005];
	nhap(ds, N);
	sap_xep(ds, N);
	in(ds, N);
}