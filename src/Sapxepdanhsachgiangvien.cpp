#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

string xlbm(string &a){
	stringstream ss (a);
	string word;
	
	string res = "";
	while (ss >> word){
		res += toupper(word[0]);
	}
	return res;
}

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

bool cmp (GV &a, GV &b){
	stringstream ssa(a.ht), ssb(b.ht);
	string worda, wordb;
	vector<string> wordsa, wordsb;
	
	while (ssa >> worda){
		wordsa.push_back(worda);
	}
	
	while (ssb >> wordb){
		wordsb.push_back(wordb);
	}
	
	if (wordsb.back() != wordsa.back()){
		return wordsa.back() < wordsb.back();
	}
	else return a.mgv < b.mgv;
}

int main (){
	int N;
	cin >> N;
	cin.ignore();
	GV ds[N];
	for (int i = 0; i < N; i++){
		cin >> ds[i];
	}
	sort(ds, ds+N, cmp);
	for (int i = 0; i < N; i++){
		cout << ds[i];
	}
	return 0;
}