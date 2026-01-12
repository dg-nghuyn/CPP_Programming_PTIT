/* 
gioi thieu cac phuogn phap lap trinh 
ham, con tro, mang, va xau ki tu
kieu du lieu cau truc
vao ra tren tep
lop va huong doi tuong
tinh ke thua va tinh da hinh
mot so lop quan trong
thu vien stl va ap dung

CPP-2024
trangntt2@ptit.edu.vn
Chao hoi, gioi thieu ban than
nghi hoc, doi lich thuc hanh, lam ro noi dung bai tap nhom

Noi dung
- lap trinh tuyen tinh
- lap trinh huong cau truc
- lap trinh huong doi tuong

Ngon ngu lap trinh C++

*/
#include<iostream>
using namespace std;
int main (){
	int n;
	long long res = 1;
	cin >> n;
	for (int i = 1; i <= n; i++){
		res *= i;
	}
	cout << res << endl;
	return 0;
}

