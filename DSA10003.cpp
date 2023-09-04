#include<bits/stdc++.h>
using namespace std;
int parent[1005], sz[1005];
int Find(int u){
	if(u == parent[u]) return u;
	return parent[u] = Find(parent[u]);
}
bool Union(int u, int v){
	u = Find(u);
	v = Find(v);
	if(u == v) return 0;
	if(sz[u] > sz[v]){
		parent[v] = u;
		sz[u] += sz[v];
	}
	else {
		parent[u] = v;
		sz[v] += sz[u];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		bool check = 0;
		for(int i=1; i<=n; ++i){
			sz[i] = 1;
			parent[i] = i;
		}
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			if(!Union(x,y)) check = 1;
		}
		if(check) cout << "YES";
		else cout << "NO";
		cout << endl;
		memset(parent, 0, sizeof(parent));
		memset(sz, 0, sizeof(sz));
 	}
}
