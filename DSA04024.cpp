#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int n, k;
struct matrix{
	ll a[15][15];
	friend matrix operator * (matrix x, matrix y){
		matrix res;
		for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j){
				res.a[i][j] = 0;
				for(int k=0; k<n; ++k){
					res.a[i][j] += (x.a[i][k] * y.a[k][j]) % mod;
					res.a[i][j] %= mod;
				}
			}
		}
		return res;
	}
};
matrix powmod(matrix a, int n){
	if(n == 1) return a;
	matrix x = powmod(a, n/2);
	if(n%2==1) return x * x * a;
	return x * x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		matrix X, Y;
		for(int i=0; i<n; ++i){
			for(int j=0; j<n; ++j) cin >> X.a[i][j];
		}
		Y = powmod(X, k);
		ll res = 0;
		for(int i=0; i<n; ++i) res = (res + Y.a[i][n-1]) % mod;
		cout << res << endl;
	}
}
