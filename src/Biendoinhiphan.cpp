#include <bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin >> T;
    while (T--){
        int n , m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        vector<bool> hang(n, false), cot(m, false);

        // Ðánh d?u các hàng và c?t c?n bi?n d?i
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (a[i][j] == 1){
                    hang[i] = true;
                    cot[j] = true;
                }
            }
        }

        // Bi?n d?i hàng theo dánh d?u
        for (int i = 0; i < n; i++){
            if (hang[i]){
                for (int j = 0; j < m; j++){
                    a[i][j] = 1;
                }
            }
        }

        // Bi?n d?i c?t theo dánh d?u
        for (int j = 0; j < m; j++){
            if (cot[j]){
                for (int i = 0; i < n; i++){
                    a[i][j] = 1;
                }
            }
        }

        // In ma tr?n k?t qu?
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

