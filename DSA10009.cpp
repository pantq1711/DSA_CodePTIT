#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, q;
	cin >> n >> m;
	int F[n+5][n+5];
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			F[i][j] = 1e9;
		}
		F[i][i] = 0;
	}	
	for(int i=1; i<=m; ++i){
		int x, y, z;
		cin >> x >> y >> z;
		F[x][y] = F[y][x] = z;
	}
	for(int k=1; k<=n; ++k){
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j) F[i][j] = min(F[i][j], F[k][i] + F[k][j]);
		}
	}
	cin >> q;
	while(q--){
		int x, y;
		cin >> x >> y;
		cout << F[x][y] << endl;
	}
}
