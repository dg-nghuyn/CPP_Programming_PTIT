#include<iostream>
using namespace std;
int main ()
{
	int T;
	cin >> T;
	while (T--){
		long long N, sum = 0;
		cin >> N;
		sum = (1+N) * N/2;
		cout << sum << endl;
	}
}
