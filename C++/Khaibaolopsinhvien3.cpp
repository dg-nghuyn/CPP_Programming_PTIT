#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string MaSV = "B20DCCN001";
		string Hoten = "";
		string Lop = "";
		string Ngaysinh = "";
		float DiemGPA = 0;
		
	public:
		friend istream& operator>>(istream& in, SinhVien& sv){
			getline(in, sv.Hoten);
			getline(in, sv.Lop);
			getline(in, sv.Ngaysinh);
			in >> sv.DiemGPA;
			in.ignore();
			
			if(sv.Ngaysinh[2] != '/'){
				sv.Ngaysinh.insert(sv.Ngaysinh.begin(), '0');
			}
			if(sv.Ngaysinh[5] != '/'){
				sv.Ngaysinh.insert(sv.Ngaysinh.begin()+3, '0');
			}
			
			sv.Hoten[0] = toupper(sv.Hoten[0]);
			for (int i = 1; i < sv.Hoten.length(); i++){
				sv.Hoten[i] = tolower(sv.Hoten[i]);
				if(sv.Hoten[i-1] == ' '){
					sv.Hoten[i] = toupper(sv.Hoten[i]);
				}
			}
			
			return in;
		}
		friend ostream& operator<<(ostream& out, const SinhVien& sv){
			out << sv.MaSV << " "
			<< sv.Hoten << " "
			<< sv.Lop << " "
			<< sv.Ngaysinh << " ";
			out << fixed << setprecision(2) << sv.DiemGPA << endl;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}