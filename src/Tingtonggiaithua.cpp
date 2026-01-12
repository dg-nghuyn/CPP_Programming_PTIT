#include<iostream>
using namespace std;
int main (){
	int N;
	cin >> N;
	long long tmp = 1, sum = 0;
	for (int i = 1; i <= N; i++){
		tmp *= i;
		sum+=tmp;
	}
	cout << sum << endl;
}
