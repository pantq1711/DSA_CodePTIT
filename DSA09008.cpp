#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];
void DFS(int u){
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
		int n, m;
		cin >> n >> m;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int cnt = 0;
		for(int i=1; i<=n; ++i){
			if(!visited[i]){
				++cnt;
				DFS(i);
			}	
		}
		cout << cnt << endl;
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}

