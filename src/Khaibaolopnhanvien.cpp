#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string manv = "00001";
		string hoten, gioitinh, ngaysinh;
		string diachi, mst, ngayhopdong;
	
	public:
		friend istream& operator >> (istream& is, NhanVien& a){
			getline (is, a.hoten);
			getline (is, a.gioitinh);
			getline (is, a.ngaysinh);
			getline (is, a.diachi);
			getline (is, a.mst);
			getline (is, a.ngayhopdong);
			return is;
		}
		friend ostream& operator >> (ostream& os, NhanVien& a){
			os << a.manv << " "
			<< a.hoten << " "
			<< a.gioitinh << " "
			<< a.ngaysinh << " "
			<< a.diachi << " "
			<< a.mst << " "
			<< a.ngayhopdong << endl;
			return os;
		}
			
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}