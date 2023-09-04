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
matrix powMod(matrix a, int n){
	if(n == 1) return a;
	matrix kq = powMod(a, n/2);
	if(n%2==1) return kq * kq * a;
	else return kq * kq;
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        matrix X, res;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cin >> X.a[i][j];
        res = powMod(X, k);
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j) cout << res.a[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}
