#include<bits/stdc++.h>
using namespace std;
bool visited[100005];
vector <int> ke[100005];
int d[100005], cnt = 0, k;
void DFS(int u){
	d[u]++;
	if(d[u] == k) ++cnt;
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		int n, m;
		cin >> k >> n >> m;
		int khach[k];
		for(int &x : khach) cin >> x;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
//			ke[y].push_back(x);
		}
		for(int x : khach){
			memset(visited, 0, sizeof(visited));
			DFS(x);
		} 
		cout << cnt << endl;
	}
}
