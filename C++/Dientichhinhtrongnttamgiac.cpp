#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct Diem {
    double x, y;
    
    void nhap() {
        cin >> x >> y;
    }
};

bool check(Diem A, Diem B, Diem C) {
    return (A.x - B.x) * (A.y - C.y) != (A.x - C.x) * (A.y - B.y);
}

double Kc(Diem A, Diem B) {
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

void process() {
    Diem A, B, C;
    A.nhap();
    B.nhap();
    C.nhap();
    
    if (!check(A, B, C)) {
        cout << "INVALID\n";
        return;
    }
    
    double a = Kc(B, C);
    double b = Kc(A, C);
    double c = Kc(A, B);
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double r = (a * b * c) / (4 * area);
    double S = PI * r * r;
    
    cout << fixed << setprecision(3) << S << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        process();
    }
    return 0;
}