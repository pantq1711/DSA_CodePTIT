#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
void solve(ll a, ll b){
	ll res = 1;
	while(b){
		if(b%2==1){
			res*=a;
			res%=mod;
		}
		a *= a;
		a %= mod;
		b/=2;
	}
	cout << res << endl;
}
int main(){
	ll a, b;
	while(cin >> a >> b){
		if(a==0&&b==0) break;
		else {
			solve(a,b);
		}
	}
}

