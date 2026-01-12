#include<bits/stdc++.h>
using namespace std;

int N, A[25], dem = 0;
bool OK = true;

// thiet lap cac so ban dau theo tu thu
void Init(){
	for (int i = 1; i <= N; i++){
		A[i] = i;
	}
}

// in ket qua ra man hinh
void Result(){
	for (int i = 1; i <= N; i++){
		cout << A[i];
	}
	cout << " ";
}

void Try(){
	// tu cuoi len, tim A[j] < A[j+1]
	int j = N-1;
	while (j > 0 && A[j] > A[j+1]){
		j--;
	}
	
	if (j > 0){// A[k] min > A[j]
		int k = N;
		while (A[j] > A[k]){
			k--;
		}
		
		// doi cho 2 so cho nhau
		int t = A[j];
		A[j] = A[k];
		A[k] = t;
		
		// lat nguoc tu j den cuoi
		int r = j+1, s = N;
		while (r <= s){
			t = A[r];
			A[r] = A[s];
			A[s] = t;
			r++;
			s--;
		}
	}
	else{
		OK = false;
	}
}

void solve(int N){
	OK = true;
	Init();
	while (OK){
		Result();
		Try();
	}
}

int main (){
	int T;
	cin >> T;
	while (T--){
		cin >> N;
		solve(N);
		cout << "\n";
	}
	return 0;
}