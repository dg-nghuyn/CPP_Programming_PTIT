#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void solve(double x1, double y1, double x2, double y2){
	double x = abs(x1-x2), y = abs(y1-y2);
	double res = sqrt(pow(x, 2) + pow(y, 2));
	cout << fixed << setprecision(4) << res << endl;
}

int main (){
	int T;
	cin >> T;
	while (T--){
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		solve(x1, y1, x2, y2);
	}
}
