#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int d[1001][1001];
int n, m;
bool used[1001][1001];
int bfs(int i, int j){
	queue <pair<int, int>> q;
	q.push({i, j});
	d[i][j] = 0;
	while(q.size()){
		pair <int, int> top = q.front();
		q.pop();
		int i = top.first, j = top.second;
		if(i == n && j == m) return d[i][j];
		if(i + a[i][j] <= n && !used[i+a[i][j]][j]){
			used[i+a[i][j]][j] = 1;
			q.push({i + a[i][j], j});
			d[i+a[i][j]][j] = d[i][j] + 1;
		}
		if(j + a[i][j] <=m && !used[i][j+a[i][j]]){
			used[i][j+a[i][j]] = 1;
			q.push({i, j + a[i][j]});
			d[i][j + a[i][j]] = d[i][j] + 1;
		}
	}
	return -1;
}
int main(){
	int t1; 
	cin >> t1;
	while(t1--){
		cin >> n >> m;
		memset(d, 0, sizeof(d));
		memset(used, 0, sizeof(used));
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j) cin >> a[i][j];
		}
		cout << bfs(1, 1) << endl;
	}
}
