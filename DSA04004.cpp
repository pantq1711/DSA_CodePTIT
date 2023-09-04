#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
ll binpow(int a, int b){
	if(b==0) return 1;
	ll x = binpow(a, b/2);
	if(b%2==1) return 1ll * x * x * a;
	return 1ll * x * x;
}
ll find(ll n, ll k)
{
    ll x = binpow(2, n - 1);
    if(k == x) return n;
    if(k < x) return find(n - 1, k);
    return find(n - 1, k - x);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		cout << find(n, k) << endl;
	}
}
