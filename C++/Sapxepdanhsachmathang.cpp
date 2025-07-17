#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int cnt = 0;

struct MatHang{
	int Mamh;
	string Tenmh, Nhomh;
	float Giamua, Giaban, Loinhuan;
};

void nhap(MatHang ds[], int N){
	for (int i = 0; i < N; i++){
		cnt++;
		ds[i].Mamh = cnt;
		getline(cin, ds[i].Tenmh);
		getline(cin, ds[i].Nhomh);
		cin >> ds[i].Giamua;
		cin >> ds[i].Giaban;
		cin.ignore();
		ds[i].Loinhuan = ds[i].Giaban - ds[i].Giamua;
	}
}

void sapxep(MatHang ds[], int N){
	for (int i = 0 ; i < N-1; i++){
		for (int j = i+1; j < N; j++){
			if (ds[i].Loinhuan < ds[j].Loinhuan){
				swap(ds[i], ds[j]);
			}
		}
	}
}

void in(MatHang ds[], int N){
	for (int i = 0; i < N; i++){
		cout << ds[i].Mamh << " "
		<< ds[i].Tenmh << " "
		<< ds[i].Nhomh << " ";
		cout << fixed << setprecision(2) << ds[i].Loinhuan;
		cout << endl; 
	}
}

int main (){
	int N;
	cin >> N;
	cin.ignore();
	MatHang ds[105];
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
}