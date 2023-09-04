#include<bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		int n, v;
		cin >> n >> v;
		int a[n+1], C[n+1];
		for(int i=1; i<=n; ++i) cin >> a[i] >> C[i];
		int F[n+1][v+1];
		memset(F, 0, sizeof(F));
		for(int i=1; i<=n; ++i){
			for(int j=0; j<=v; ++j){
				F[i][j] = F[i-1][j];
				if(j >= a[i]){
					F[i][j] = max(F[i][j], C[i] + F[i-1][j-a[i]]);
				}
			}
		}
		cout << F[n][v] << endl;
	}
}
