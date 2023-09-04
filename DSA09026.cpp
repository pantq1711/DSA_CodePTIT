#include<bits/stdc++.h>
using namespace std;
int parent[1005];
vector <int> ke[1005];
bool visited[1005];
void BFS(int u){
	queue <int> q;
	q.push(u);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int y : ke[x]){
			if(!visited[y]){
				q.push(y);
				visited[y] = 1;
				parent[y] = x;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		 int n, m, s, t;
		 cin >> n >> m >> s >> t;
		 memset(visited, 0, sizeof(visited));
		 for(int i=1; i<=m; ++i){
		 	int x, y;
		 	cin >> x >> y;
		 	ke[x].push_back(y);
//		 	ke[y].push_back(x);
		 }
		 BFS(s);
		 if(!visited[t]) cout << -1;
		 else {
		 	vector <int> v;
		 	while(t != s){
		 		v.push_back(t);
		 		t = parent[t];
			 }
			 v.push_back(s);
			 reverse(v.begin(), v.end());
			 for(int x : v) cout << x << ' ';
		 }
		 cout << endl;
		 for(int i=1; i<=n; ++i) ke[i].clear();
	}
}
