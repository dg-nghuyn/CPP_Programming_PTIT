#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main (){
	int N;
	cin >> N;
	cin.ignore();
	
	string name;
	ofstream ghi("A.txt");
	
	for(int i = 1; i <= N; i++){
		getline(cin, name);
		ghi << name << endl;
	}
	
	ghi.close();
	
	ifstream doc("A.txt");
	while(getline(doc, name)){
		cout << name << endl;
	}
	doc.close();
	
	ifstream doc_copy("A.txt");
	ofstream ghi_copy("B.txt");
	
	while(getline(doc_copy, name)){
		ghi_copy << name << endl;
	}
	doc_copy.close();
	ghi_copy.close();
	
	return 0;
}