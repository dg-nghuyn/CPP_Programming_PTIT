#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (){
	int x = 10;
	int *p1, *p2;
	p1 = &x;
	p2 = p1;
	cout << p1 <<  " " << *p2;
}