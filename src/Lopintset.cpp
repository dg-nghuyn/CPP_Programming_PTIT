#include<bits/stdc++.h>
using namespace std;
main (){
	ifstream inFile("DATA.in");
//	if (!inFile){
//		cout << "Ko mo duoc File!" << endl;
//	}
	int n, m;
	inFile >> n >> m;
	set<int> a, b;
	
	int tmp;
	for (int i = 0; i < n; i++){
		inFile >> tmp;
		a.insert(tmp);
	}
	
	for (int j = 0; j < m; j++){
		inFile >> tmp;
		b.insert(tmp);
	}
	
	for (auto i : a){
		if (b.count(i) != 0){
			cout << i << " ";
		}
	}
	cout << endl;
	inFile.close();
	return 0;
}