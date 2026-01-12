#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main (){
	string S;
	getline(cin, S);
	
	//ham str.substr - tim chuoi con
	cout << S.substr(6, 3) << endl;
	cout << S.substr(6) << endl;
	
	//ham tim do dai xau S
	cout << S.length() << endl;
	
	//ham trong ngan xep
	stack<string>s;
	cout << s.empty() << endl; //kiem tra ngan xep trong hay khong
	s.push("duong"); // them vao ngan xep
	cout << s.empty() << endl;
	s.pop(); //xoa tu o dinh cua ngan xep
	cout << s.top() << endl; //tra ve gia tri o dinh
}