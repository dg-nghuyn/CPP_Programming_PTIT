#include<bits/stdc++.h>
using namespace std;


class Test {
	public:
		Test(){
			cout << "\n Constructor executed";
		}
		~Test(){
			cout << "\n Destructor executed";
		}
};
main (){
	Test t, t1, t2, t3;
	return 0;
}
/* tinh khoang cach 2 diem
goi toa do 2 cai la khong duoc chuyen tu private
sang public

chuyen sang phuong thuc tinh khaong cach cua 1 diem
get de lay ra tung thanh phan thuoc tinh
*/