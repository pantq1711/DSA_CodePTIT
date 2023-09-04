#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, m, cnt;
void Try(int i, int j){
	if(i == n && j == m) ++cnt;
	if(i<n) Try(i+1, j);
	if(j<m) Try(i, j+1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		cnt = 0;
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j) cin >> a[i][j];
		}
		Try(1, 1);
		cout << cnt << endl;
	}
}
