#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int t; 
    cin >> t;
    
    while (t--)
    {
        int n; 
        cin >> n;
        
        int arr[10000005] = {0};
        int max_val = 0;
        for (int i = 0; i < n; i++)
        {
            int x; 
            cin >> x;
            if(x >=0)
                arr[x]++;
            if (x > max_val) max_val = x;
        }

        for (int i = 0; i <= max_val; ++i)
        {
            if (arr[i] == i)
                cout << i << " ";
            else
                cout << "-1 ";
        }
        cout << endl;
    }
}