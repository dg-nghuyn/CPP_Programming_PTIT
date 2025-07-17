#include<iostream>
using namespace std;
int main (){
	int *a;
	a = new int[6];
	int **a;
	a = new int*[SIZE];
	delete[]a;
	return 0;
}