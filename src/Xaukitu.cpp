#include<bits/stdc++.h>
using namespace std;
int main(){
//	char s1[201];
//	gets(s1, 5, stdin);
//	strcpy(s1, s2); //copy s2 vao s1
//	strcat(s1, s2); // noi s2 sau s1
//	strlen(s); // do dai s
//	strcmp(s1, s2); // so sanh theo tu dien
	
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	s1 = s2;
//	s1 = s1+s2;
//	s1 == s2;
//	s1 < > <= >= != s2;

//	s.size(); //do dai string s
//	s.length(); // do dai string s
//	getline(cin, s); // nhap 1 dong tu ban phim cho s
//	s.erase(n, k); // xoa k ki tu tu vi tri n
//	s.insert(n, s1); // chen s1 vao s tu vi tri n
//	s.insert(n, s1, k, m);
//	s.replace(n, k, s1);
//	s.find(s1);
//	s.rfind(s1);
//	s.at(int i);

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int m, n;
	m = s1.size();
	n = s2.size();
	cout << m << " " << n << endl;
	
//	s1.erase(2, 3);
//	cout << s1 << endl;
//	
//	s2.insert(6,s1,2,3);
//	cout << s2 << endl;
	
	s1.replace(5, 3, s2);
	cout << s1 << endl;
	
	m = s2.find(s1);
	cout << m << endl;
	
	n = s1.rfind(s2);
	cout << n << endl;
//	int a = s1.at(int 3);
}