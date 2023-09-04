#include<bits/stdc++.h>
using namespace std;
vector <int> ke[100005];
bool visited[100005];
int cnt;
void DFS(int u){
	++cnt;
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
		int res = 1;
		for(int i=1; i<=n; ++i){
			cnt = 0;
			if(!visited[i]){
				DFS(i);
				res = max(res, cnt);
			}
		}
		cout << res << endl;
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}

