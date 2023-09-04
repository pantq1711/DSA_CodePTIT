#include<bits/stdc++.h>
using namespace std;
int parent[100005];
bool visited[100005];
vector <int> ke[100005];
void DFS(int u, vector <pair<int,int>> &v){
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			v.push_back({u, x});
			DFS(x,v);
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
		vector <pair<int, int>> v;
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		DFS(u,v);
		if(v.size() == n-1){
			for(auto it : v){
				cout << it.first << ' ' << it.second << endl;
			}
		}
		else cout << -1;
		cout << endl;
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}

