#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i < N; i++){
    	for (int j = 1; j <= 2*N-1; j++){
    		if(N-i+1 == j || N+i-1 == j){
    			cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
	for (int k = 1; k < 2*N; k++){
		if(k % 2 == 0){
			cout << " ";
		}
		else cout << "*";
	}
}


/*
5
    * 1 5 
   * * 2 4 6  
  *   * 3 3 7 
 *     * 4 2 8
* * * * * 
 
10
         * 
        * * 
       *   * 
      *     * 
     *       * 
    *         * 
   *           * 
  *             * 
 *               * 
* * * * * * * * * * 
*/