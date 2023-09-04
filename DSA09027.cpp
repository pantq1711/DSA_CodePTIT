#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
int tplt[1005], cnt;
void DFS(int u){
	visited[u] = 1;
	tplt[u] = cnt;
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
		cnt = 0;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x,y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1; i<=n; ++i){
			if(!visited[i]){
				++cnt;
				DFS(i);
			}
		}
		int q;
		cin >> q;
		while(q--){
			int s, t;
			cin >> s >> t;
			if(tplt[s] == tplt[t]) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
		for(int i=1; i<=n; ++i) ke[i].clear();
		cout << endl;
	}	
}
