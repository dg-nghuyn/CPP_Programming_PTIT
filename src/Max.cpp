#include<iostream>

using namespace std;

int max(int a[])
{
	int max1 = a[1];
	for (int i = 2; i <= 4; i++)
	{
		if (max1 < a[i])
			max1 = a[i];
	}
	return max1;
}

int main (){
	int a[10];
	for (int i = 1; i <= 4; i++)
	{
		cin >> a[i];
	}
	printf ("%d", max(a));
}
