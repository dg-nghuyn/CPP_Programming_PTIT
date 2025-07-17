#include<bits/stdc++.h>
using namespace std;

string xlbm(string &a){
	stringstream ss(a);
	string word, res = "";
	while (ss >> word){
		res += toupper(word[0]);
	}
	return res;
}

int cnt = 0;

struct GV{
	string ht, bm, mgv;
	
	friend istream& operator>> (istream& is, GV &a){
		cnt++;
		scanf("\n");
		if (cnt < 10){
			a.mgv = "GV0" + to_string(cnt);
		}
		else a.mgv = "GV" + to_string(cnt);
		getline(is, a.ht);
		getline(is, a.bm);
		a.bm = xlbm(a.bm);
		return is;
	}
	
	friend ostream& operator<< (ostream& os, GV &a){
		os << a.mgv << " "
		<< a.ht << " "
		<< a.bm << endl;
		return os;
	}
};

int main (){
	int N;
	cin >> N;
	cin.ignore();
	GV ds[N];
	for (int i = 0; i < N; i++){
		cin >> ds[i];
	}
	
	int Q;
	cin >> Q;
	cin.ignore();
	vector<string> bms(Q);
	for (int i = 0; i < Q; i++){
		getline(cin, bms[i]);
		bms[i] = xlbm(bms[i]);
	}
	
	for (int i = 0; i < Q; i++){
		cout << "DANH SACH GIANG VIEN BO MON " << bms[i] << ": " << endl;
		for (int j = 0; j < N; j++){
			if (ds[j].bm == bms[i]){
				cout << ds[j] << endl;
			}
		}
	}
	
	return 0;
}