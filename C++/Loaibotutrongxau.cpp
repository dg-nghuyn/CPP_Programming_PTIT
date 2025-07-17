#include<bits/stdc++.h>
using namespace std;
int main (){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int find = s1.find(s2);
	while (find != string::npos){
		s1.erase(find, s2.length()+1);
		find = s1.find(s2);
	}
	cout << s1 << endl;
}
/* tieu chi chung va tieu chi ban
tieu chi chung: thai do + chuyen mon (chia % bat buoc)
khi vao den ban thi se co chuyen mon cu the cua cac em
cac em se co nhung tieu chi rieng de cham diem

tieu chi chung + tieu chi ban
- chia phan tram
- gioi chuyen mon
*/

