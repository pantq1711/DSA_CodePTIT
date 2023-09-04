#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005], ok;
int n, m, parent[1005];
void DFS(int u){
	if(ok) return;
	visited[u] = 1;
	for(int v : ke[u]){
		if(visited[v] && parent[u] != v){
			ok = 1;
			return;
		}
		else if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n;
		m = n - 1;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1; i<=n && !ok; ++i){
			if(!visited[i]) DFS(i);
		}
		if(ok) cout << "NO";
		else cout << "YES";
		for(int i=1; i<=n; ++i) ke[i].clear();
		cout << endl;
	}
}
