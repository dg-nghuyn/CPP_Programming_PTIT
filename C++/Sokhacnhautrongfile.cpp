#include<bits/stdc++.h>
using namespace std;
int main (){
	ifstream inFile("DATA.in");
	string line;
	int A[100005];
	int B[100005] = {0};
	
	int tmp = 0;
	while (getline(inFile, line)){
		stringstream ss(line);
		string word;
		while (ss >> word){
			A[tmp] = stoi(word);
			B[A[tmp]]++;
			tmp++;
		}
	}
	
	sort(A, A+tmp);
	for (int i = 0; i < tmp; i++){
		if (B[A[i]] >= 1){
			cout << A[i] << " " << B[A[i]] << endl;
		}
		B[A[i]] = 0;
	}
	
	inFile.close();
	return 0;
}