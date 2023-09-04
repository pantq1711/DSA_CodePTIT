#include<bits/stdc++.h>
using namespace std;
#define mod 123456789
#define ll long long
void powmod(ll n, ll k){
	ll res = 1;
	while(k){
		if(k%2==1){
			res *= n;
			res %= mod;
		}
		n*=n;
		n %= mod;
		k /= 2;
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n = 2;
		ll k;
		cin >> k;
		powmod(n, k-1);
	}
}

