#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

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

struct SinhVien{
	string MaSV = "";
	string Hoten = "", Lop = "", Ngaysinh = "";
	float DiemGPA = 0.0;
	
	friend istream& operator >> (istream &is, SinhVien &sv){
		cnt++;
		is.ignore();		
		getline(is, sv.Hoten);
		getline(is, sv.Lop);
		getline(is, sv.Ngaysinh);
		is >> sv.DiemGPA;
		chuanhoangaysinh(sv.Ngaysinh);
		sv.Hoten = chuanhoahoten(sv.Hoten);
		if (cnt < 10){
			sv.MaSV = sv.MaSV + "B20DCCN00" + to_string(cnt);
		}
		else sv.MaSV = sv.MaSV + "B20DCCN0" + to_string(cnt);
		return is;
	}
	
	friend ostream& operator << (ostream &os, SinhVien &sv){
		os << sv.MaSV << " "
		<< sv.Hoten << " "
		<< sv.Lop << " "
		<< sv.Ngaysinh << " "
		<< fixed << setprecision(2) << sv.DiemGPA << endl;
		return os;
	}
	
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}