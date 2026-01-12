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

string to_lower(string &a){
	string res = a;
	for (int i = 0; i < res.size(); i++){
		res[i] = tolower(res[i]);
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
	vector<string> kws(Q);
	for (int i = 0; i < Q; i++){
		getline(cin, kws[i]);
	}
	
	for (int i = 0; i < Q; i++){
		string kw = to_lower(kws[i]);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << kws[i] << ": " << endl;
		for (int j = 0; j < N; j++){
			string tmp1 = to_lower(ds[j].ht);
			if (tmp1.find(kw) != -1){
				cout << ds[j] << endl;
			}
		}
	}
	
	return 0;
}