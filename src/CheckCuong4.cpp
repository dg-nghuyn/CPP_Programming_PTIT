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
        
        int arr[1000005];
        memset(arr, -1, sizeof(arr));
//        int arr[10000005] = {0};
//        int max_val = 0; khong can do ty nua minh se in den n luon
        for (int i = 0; i < n; i++)
        {
            int x; 
            cin >> x;
            if(x >=0 && x < n) //them dieu kien
//                arr[x]++; khong can do minh dang ko dem so phan tu
//            if (x > max_val) max_val = x; cung khong can vi minh se chay den chi so n luon
				arr[x] = x;
        }

        for (int i = 0; i < n/*max_val*/; ++i)
        {
//            if (arr[i] == i)
                cout << arr[i] << " ";
//            else
//                cout << "-1 ";
        }
        cout << endl;
	}
}