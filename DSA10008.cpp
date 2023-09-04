#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int v, e, u;
		cin >> v >> e >> u;
		vector<pair<int, int>> a[v+5];
		while(e--){
			int x, y, z;
			cin >> x >> y >> z;
			a[x].push_back({y, z});
			a[y].push_back({x,z});
		}
		vector <int> dist(v+5, 1e9);
		dist[u] = 0;
		priority_queue <pair <int,int>, vector <pair <int, int>>, greater <pair<int,int>>> pq;
		pq.push({0, u});
		pair <int, int> top;
		while(!pq.empty()){
			top = pq.top();
			pq.pop();
			if(top.first <= dist[top.second]){
				for(auto it : a[top.second]){
					if(dist[it.first] > dist[top.second] + it.second){
						dist[it.first] = dist[top.second] + it.second;
						pq.push({dist[it.first],it.first});
					}
				}
			}
		}
		for(int i=1; i<=v; ++i) cout << dist[i] << ' ';
		cout << endl;
	}
}
