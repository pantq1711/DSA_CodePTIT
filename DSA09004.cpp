#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];
void DFS(int u){
	cout << u << ' ';
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
int main(){
    int t = 1;
    cin >> t;
	while(t--){
		int n, m, s;
		cin >> n >> m >> s;
		for(int i=1; i<=n; ++i) ke[i].clear();
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		memset(visited, 0, sizeof(visited));
		DFS(s);
		cout << endl;
	}
}
