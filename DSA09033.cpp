#include<bits/stdc++.h>
using namespace std;
bool visited[100005];
vector <int> ke[100005];
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
		long long res = 0;
		for(int i=1; i<=n; ++i){
			if(!visited[i]){
				cnt = 0;
				DFS(i);
				res += 1ll * cnt * (cnt-1) / 2;
			}
		}
		if(res == m) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

