#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int N;
	cin >> N;
	double sum = 0;
	for (int i = 1; i <= N; i++){
		sum += (double)1/i;
	}
	cout << fixed << setprecision(4) << sum << endl;
	return 0;
}
