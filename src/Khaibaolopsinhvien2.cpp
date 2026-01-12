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