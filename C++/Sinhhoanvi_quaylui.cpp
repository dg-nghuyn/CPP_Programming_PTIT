#include<bits/stdc++.h>
#define MAX 1005
using namespace std;

int n;
int A[MAX];
int Bool[MAX] = {0};

void xuat(){
	for (int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void Try(int k){
	for (int i = 0; i < n; i++){
		if (Bool[i] == 0){
			A[k] = i;
			Bool[i] = 1;
			if (k == n-1){
				xuat();
			}
			else{
				Try(k+1);
			}
			Bool[i] = 0;
		}
	}
}

int main (){
	cin >> n;
	Try (1);
}