#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct SinhVien{
	string MaSV = "B20DCCN0";
	string Hoten, Lop, Ngaysinh;
	float DiemGPA = 0.0;	
};

int cnt = 0;

void chuanhoangaysinh(string &ngaysinh){
	if (ngaysinh[2] != '/'){
		ngaysinh.insert(0, "0");
	}
	if (ngaysinh[5] != '/'){
		ngaysinh.insert(3, "0");
	}
}

string chuanhoahoten(string &ten){
	string res = "";
	for (int i = 0; i < ten.size(); i++){
		ten[i] = tolower(ten[i]);
	}
	stringstream ss(ten);
	vector<string> words;
	string word;
	
	while (ss >> word){
		words.push_back(word);
	}
	
	for (int i = 0; i < words.size(); i++){
		res += toupper(words[i][0]);
		for (int j = 1; j < words[i].size(); j++){
			res += words[i][j];
		}
		res += " ";
	}
	return res;
}

void nhap(SinhVien ds[], int N){
	cin.ignore();
	for (int i = 1; i <= N; i++){
		cnt++;
		getline(cin, ds[i].Hoten);
		getline(cin, ds[i].Lop);
		getline(cin, ds[i].Ngaysinh);
		cin >> ds[i].DiemGPA;
		cin.ignore();
		chuanhoangaysinh(ds[i].Ngaysinh);
		ds[i].Hoten = chuanhoahoten(ds[i].Hoten);
		if (cnt < 10){
			ds[i].MaSV = ds[i].MaSV + "0" + to_string(cnt);
		}
		else ds[i].MaSV = ds[i].MaSV + to_string(cnt);
		}
}

void sapxep(SinhVien ds[], int N){
	for (int i = 1; i < N; i++){
		for (int j = i+1; j <= N; j++){
			if (ds[i].DiemGPA < ds[j].DiemGPA){
				swap(ds[i], ds[j]);
			}
		}
	}
}

//bool cmp(SinhVien a, SinhVien b){
//	return a.DiemGPA > b.DiemGPA;
//}
//void sapxep(SinhVien ds[], int N){
//	sort(ds, ds + N, cmp);
//}

void in(SinhVien ds[], int N){
	for (int i = 1; i <= N; i++){
		cout << ds[i].MaSV << " " <<
		ds[i].Hoten << " " <<
		ds[i].Lop << " " <<
		ds[i].Ngaysinh << " ";
		cout << fixed << setprecision(2) << ds[i].DiemGPA << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}