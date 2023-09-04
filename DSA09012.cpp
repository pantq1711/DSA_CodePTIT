#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
int n, m, s1, s2;
void DFS(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
		if((u == s1 && v == s2) || (u == s2 && v == s1)) continue;
		DFS(v);
		}
	}
}
int tplt(){
	int cnt = 0;
	for(int i=1; i<=n; ++i){
		if(!visited[i]){
			DFS(i);
			++cnt;
		}
	}	
	return cnt;
}
void DFS1(int u){
	visited[u] = 1;
	for(int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
int tplt1(){
	int cnt = 0;
	for(int i=1; i<=n; ++i){
		if(!visited[i]){
			DFS1(i);
			++cnt;
		}
	}	
	return cnt;
}
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		vector <pair<int,int>> edge;
		cin >> n >> m;
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=m; ++i){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			edge.push_back({x,y});
		}
		int tmp = tplt(), cnt = 0;
		for(int i=1; i<=n; ++i){
			memset(visited, 0, sizeof(visited));
			visited[i] = 1;
			if(tmp < tplt()) ++cnt;
		}
		cout << cnt << ' ';
		cnt = 0;		
		for (auto it : edge){
			s1 = it.first, s2 = it.second;
			memset(visited, 0, sizeof(visited));
			if(tmp < tplt()) ++cnt;
		}
		cout << cnt << ' ';
		memset(visited, 0, sizeof(visited));
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}

