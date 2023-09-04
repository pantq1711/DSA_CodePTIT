#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int x = q.front(); q.pop();
		cout << x << ' ';
		for(int y : ke[x]){
			if(!visited[y]){
				q.push(y);
				visited[y] = 1;
			}
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
//			ke[y].push_back(x);
		}
		BFS(s);
		cout << endl;
	}
}
