#include<bits/stdc++.h>
using namespace std;

struct Sv{
	int stt;
	string msv, ht, lop, email, dn;
};

void nhap(Sv ds[], int N){
	cin.ignore();
	for (int i = 0; i < N; i++){
		ds[i].stt = i+1;
		getline(cin, ds[i].msv);
		getline(cin, ds[i].ht);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].email);
		getline(cin, ds[i].dn);
	}
}

void sapxep(Sv ds[], int N){
	sort(ds, ds+N, [](Sv &a, Sv &b){
		return a.msv < b.msv;
	});
}

void in (Sv &a){
	cout << a.stt << " "
	<< a.msv << " "
	<< a.ht << " "
	<< a.lop << " "
	<< a.email << " "
	<< a.dn << " "
	<< endl;
}

int main (){
	int N, Q;
	cin >> N;
	
	Sv ds[50];
	nhap(ds, N);
	
	sapxep(ds, N);
	
	cin >> Q;
	cin.ignore();
	
	vector<string> dns(Q);
	for (int i = 0; i < Q; i++){
		getline(cin, dns[i]);
	}
	
	for (const string &dn : dns){
		for (int j = 0; j < N; j++){
			if (ds[j].dn == dn){
				in(ds[j]);
			}
		}
	}
	return 0;
}