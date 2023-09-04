#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[505][505];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
struct cmp{
	bool operator () (pair <int, pair<int, int>> a, pair <int, pair<int, int>> b){
		return a.second.second > b.second.second;
	}
};
int BFS(){
	int visited[505][505] = {};
	priority_queue<pair<int, pair<int, int>>, vector <pair<int, pair<int,int>>>, cmp> pq;
	pair <int, pair <int, int>> top;
	pq.push({1, {1, a[1][1]}});
	visited[1][1] = 1;
	int x, y;
	while(pq.size()){
		top = pq.top(); pq.pop();
		for(int i=0; i<4; ++i){
			x = dx[i] + top.first;
			y = dy[i] + top.second.first;
			if(x == n && y == m) return top.second.second + a[x][y];
			if(x > 0 && y >0 && x <= n && y <= m && !visited[x][y] ){
				visited[x][y] = 1;
				pq.push({x, {y, top.second.second + a[x][y]}});
			}
		}
	}
	return -1;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=1; i<=n; ++i)
			for(int j=1; j<=m; ++j) cin >> a[i][j];
			cout << BFS() << endl;
	}
}
