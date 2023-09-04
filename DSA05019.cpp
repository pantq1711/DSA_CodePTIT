#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int a[505][505];
int F[505][505];
int main(){
    int t;
    cin >> t;
    while(t--){
		int n, m;
		cin >> n >> m;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j) cin >> a[i][j];
		}
		int ans = 0;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j){
				if(a[i][j] == 0) F[i][j] = 0;
				else {
					F[i][j] = min({F[i-1][j], F[i][j-1], F[i-1][j-1]}) + 1; 
				}
				ans = max(ans, F[i][j]);
			}
		}
		cout << ans << endl;
	}
}
