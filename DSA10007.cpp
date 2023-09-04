#include<bits/stdc++.h>
using namespace std;
vector <int> ke[100005];
bool visited[1005];
void BFS(int u, vector <pair<int, int>> &vp){
	queue <int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int x = q.front(); q.pop();
		for(int v : ke[x]){
			if(!visited[v]){
				visited[v] = 1;
				q.push(v);
				vp.push_back({x,v});
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, u;
		cin >> n >> m >> u;
		memset(visited, 0, sizeof(visited));
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		vector <pair<int, int>> v;
		BFS(u, v);
		if(v.size() == n - 1){
			for(auto it : v){
				cout << it.first << ' ' << it.second << endl;
			}
		}
		else cout << -1 << endl;
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}
