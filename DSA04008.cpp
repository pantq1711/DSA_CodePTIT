#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
struct matrix{
	ll a[2][2];
	friend matrix operator * (matrix x, matrix y){
		matrix kq;
		for(int i=0; i<2; ++i){
			for(int j=0; j<2; ++j){
				kq.a[i][j] = 0;
				for(int k=0; k<2; ++k){
					kq.a[i][j] += x.a[i][k] * y.a[k][j];
					kq.a[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};
matrix powMod(matrix a, ll n){
	if(n==1) return a;
	matrix kq = powMod(a, n/2);
	if(n%2==1) return kq * kq * a;
	else return kq * kq;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		matrix X;
		X.a[0][0] = 1;
		X.a[1][0] = 1;
		X.a[0][1] = 1;
		X.a[1][1] = 0;
		matrix Y = powMod(X, n);
		cout << Y.a[0][1] << endl;		
	}
}
