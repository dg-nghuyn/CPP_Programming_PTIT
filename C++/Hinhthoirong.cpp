#include<bits/stdc++.h>
using namespace std;
int main (){
	int N, tmp;
	cin >> N;
	for (int i = 1; i <= N; i++){
    	for (int j = 1; j <= 2*N-1; j++){
    		if(N-i+1 == j || N+i-1 == j){
    			cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = N-1; i >= 1; i--){
    	for (int j = 1; j <= 2*N-1; j++){
    		if(N-i+1 == j || N+i-1 == j){
    			cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}
}
/*
5
    * 1 5
   * * 2 4 6
  *   * 3 3 7
 *     * 
*       * 
 *     * 6 2 8 
  *   * 7 3 7
   * *
    * 
 
10
         * 10
        * *1 9
       *   *3 8
      *     *5 7
     *       *7 
    *         *9 
   *           * 
  *             * 
 *               * 
*                 * 
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         * 
*/