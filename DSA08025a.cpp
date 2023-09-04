#include<bits/stdc++.h>
using namespace std;
int s, t, u, v;
bool visited[100][100];
int d[100][100];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int bfs(int i, int j){
	queue <pair<int, int>> q;
	q.push({i, j});
	visited[i][j] = 1;
	while(!q.empty()){
			pair <int, int> top = q.front();
			q.pop();
			if(top.first == u && top.second == v) return d[top.first][top.second];
			for(int k=0; k<8; ++k){
				int i1 = top.first + dx[k];
				int j1 = top.second + dy[k];
				if(i1 >=0 && i1 < 8 && j1 >= 0 && j1 < 8 && !visited[i1][j1]){
					visited[i1][j1] = 1;
					d[i1][j1] = d[top.first][top.second] + 1;
					q.push({i1, j1});
				}
			}
	}
	return -1;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		string n, m;
		cin >> n >> m;
		t = n[0] - 'a';
		s = n[1] - '0' - 1;
		v = m[0] - 'a';
		u = m[1] - '0' - 1;
		memset(visited, 0, sizeof(visited));
		memset(d, 0, sizeof(d));
		cout << bfs(s, t) << endl;
 	}
}
