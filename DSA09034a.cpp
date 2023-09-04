#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
vector <string> v;
bool check(int x, int y){
	return x >= 0 && y >= 0 && x < n && y < m && v[x][y] == 'W';
}
void DFS(int x, int y){
	v[x][y] = '.';
	for(int i=0; i<8; ++i){
		if(check(x + dx[i], y + dy[i])){
			DFS(x + dx[i], y + dy[i]);
		}
	}
}
int main(){
	cin >> n >> m;
	v.resize(n);
	int res = 0;
	for(int i=0; i<n; ++i) cin >> v[i];
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			if(v[i][j] == 'W'){
				++res;
				DFS(i, j);
			}
		}
	}
	cout << res;
}
