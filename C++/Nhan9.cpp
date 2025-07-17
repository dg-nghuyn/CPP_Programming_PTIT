#include<bits/stdc++.h>
#define ll long long
#define MAX (long long)1e14
using namespace std;

int prime[MAX];

void sang(){
	for (int i = 0; i <= MAX; i++){
		prime[i] = 1;
	}
	
	prime[0] = prime[1] = 0;
	
	for (int i = 2; i*i <= MAX; i++){
		if(prime[i]){
			for (int j = i*i; j <= MAX; j+=i){
				prime[j] = 0;
			}
		}
	}
}

void innto(long long n){
	int dem=0;
	for (ll i = 0; i <= MAX; i++){
		if (prime[i] == 1){
			while (n % prime[i] == 0){
				dem++;
			}
			cout << i << " " << dem;
			dem = 0;
		}
	}
	if(n>2) cout<<n<<" 1"<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		innto(n);
		cout << endl;
	}
}