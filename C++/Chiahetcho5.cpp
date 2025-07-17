#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    cin.ignore(); 
    
    while (T--) {
        string s; 
        cin >> s;
        
        int r = 0; 
        for (int i = 0; i < s.length(); i++) {
            r = (2 * r + (s[i] - '0')) % 5;
        }
        
        if (r == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}

