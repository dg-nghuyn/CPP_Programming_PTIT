#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct Point{
	double x, y;
};

void input(Point &A){ // truyen tham chieu nhap toa do
	cin >> A.x >> A.y;
}

double distance(Point A, Point B){
	double tmp;
	tmp = sqrt(pow(B.x-A.x, 2) + pow(B.y-A.y,2));
	return tmp;
}
		
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}