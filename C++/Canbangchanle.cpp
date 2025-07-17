#include<iostream>
#include<math.h>
using namespace std;

int check (int n){
	int countchan = 0, countle = 0, tmp = 0;
	while (n != 0){
		tmp = n % 10;
		n /= 10;
		if (tmp % 2 == 0){
			countchan++;
		}
		else countle++;
	}
	if (countchan == countle){
		return 1;
	}
	return 0;
}

void solve (int N){
	int dem = 0;
	long long a = pow(10, N-1), b = pow(10, N)-1;
//	cout << a << b;
	for (long long i = a; i <= b; i++){
		if (check(i) == 1){
			cout << i << " ";
			dem++;
			if (dem == 10){
				cout << endl;
				dem = 0;
			}
		}
	}
}

int main (){
	int N;
	cin >> N;
	solve (N);
}

