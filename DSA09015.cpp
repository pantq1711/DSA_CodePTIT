#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005], ok;
int n, m, parent[1005], color[1005];
void DFS(int u){
	if(ok) return;
	color[u] = 1;
	for(int v : ke[u]){
		if(color[v] == 1) {
			ok = 1;
			return;
		}
		else if(color[v] == 0) DFS(v);
	}
	color[u] = 2;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n >> m;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
//			ke[y].push_back(x);
		}
		for(int i=1; i<=n && !ok; ++i){
			if(!visited[i]) DFS(i);
		}
		if(ok) cout << "YES";
		else cout << "NO";
		for(int i=1; i<=n; ++i) ke[i].clear();
		fill(color, color + 1005, 0);
		cout << endl;
	}
}
