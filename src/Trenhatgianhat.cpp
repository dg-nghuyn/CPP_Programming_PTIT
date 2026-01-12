#include<bits/stdc++.h>
using namespace std;

struct Thongtin{
	string ten, ns;
};

void nhap(Thongtin ds[], int N){
	for (int i = 0; i < N; i++){
		cin >> ds[i].ten;
		cin >> ds[i].ns;
	}
}

bool cmp(Thongtin &A, Thongtin &B){
	int a, b, c;
	int x, y, z;
	a = stoi(A.ns.substr(0, 2));
	b = stoi(A.ns.substr(3, 2));
	c = stoi(A.ns.substr(6, 4));
	
	x = stoi(B.ns.substr(0, 2));
	y = stoi(B.ns.substr(3, 2));
	z = stoi(B.ns.substr(6, 4));
	
	if (c != z){
		return c < z;
	}
	if (b != y){
		return b < y;
	}
	return a < x;
}

void sx(Thongtin ds[], int N){
	sort(ds, ds+N, cmp);
}

int main (){
	int N;
	cin >> N;
	Thongtin ds[100];
	nhap(ds, N);
	sx(ds, N);
	cout << ds[N-1].ten << endl;
	cout << ds[0].ten << endl;
}