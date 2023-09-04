#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];
void DFS(int u){
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
		int cnt[1005];
		memset(visited, 0, sizeof(visited));
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			cnt[x]++;
			cnt[y]++;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		DFS(1);
		bool check = 0;
		for(int i=1; i<=n; ++i){
			if(!visited[i]) check = 1;
		}
		if(check) cout << 0;
		else {
			int ok = 0, cnt1 = 0;
			for(int i=1; i<=n; ++i){
				if(cnt[i] % 2 != 0){
					ok = 2;
					++cnt1;
				}
			}
			if(cnt1 <=2) ok = 1;
			if(ok!=0) cout << ok;
			
		}
		cout << endl;
		for(int i=1; i<=n; ++i) ke[i].clear();
	}
}
