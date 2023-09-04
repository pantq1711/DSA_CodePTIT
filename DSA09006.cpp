#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
int parent[1005], cnt;
void DFS(int u){
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, s, t;
		cin >> n >> m >> s >> t;
		cnt = 0;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x,y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q = 1;
//		cin >> q;
		while(q--){
			DFS(s);
			if(!visited[t]) cout << "-1";
			else {
				vector <int> v;
				while(t != s){
					v.push_back(t);
					t = parent[t];
				}
				v.push_back(s);
				reverse(v.begin(), v.end());
				for(int x : v) cout << x << " ";
			}
			cout << endl;
		}
		for(int i=1; i<=n; ++i) ke[i].clear();
		cout << endl;
	}	
}
