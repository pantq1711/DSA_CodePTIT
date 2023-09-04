#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
void DFS(int u){
	cout << u << ' ';
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, s;
		cin >> n >> m >> s;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=n; ++i) ke[i].clear();
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		DFS(s);
		cout << endl;
	}
}
