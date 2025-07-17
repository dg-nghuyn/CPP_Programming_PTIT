#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void reserve_words(string str){ //khai báo hàm, ki?u d? li?u du?c dua vào
	stack<string> s; //khai báo ngan x?p
	
	for (int i = 0; i < str.length(); i++){
		if(str[i] == ' '){ 
			s.push(str.substr(0, i)); // day tu vao ngan xep
			str = str.substr(i+1); //cat chuoi da xu ly
			i = 0;//reset chi so i
		}
	}
	s.push(str); //t? cu?i cùng s? không cso kho?ng tr?ng nào nên c?n d?y nso vào ngan x?p
	
	while (!s.empty()){
		cout << s.top()<< " "; // in tu tren cung
 		s.pop(); // xoa tu tren cung khoi ngan xep
	}
}

int main(){
	string S;
	getline (cin, S);
	reserve_words(S);
}