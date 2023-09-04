#include<bits/stdc++.h>
using namespace std;
vector <pair<pair<int,int>, int>> vp;
int parent[1005], sz[1005];
int res, v, e;
void init(){
	cin >> v >> e;
	for(int i=1; i<=v; ++i){
		sz[i] = 1;
		parent[i] = i;
	}
}
int Find(int u){
	if(u == parent[u]) return u;
	return parent[u] = Find(parent[u]);
}
void Union(int u, int v, pair<pair<int,int>, int> p){
	u = Find(u);
	v = Find(v);
	if(u != v){
		res += p.second;
		if(sz[u] > sz[v]) swap(u, v);
		parent[u] = v;
		sz[u] += sz[v];
	}
}
bool cmp(pair<pair<int,int>, int> a, pair<pair<int,int>, int> b){
	return a.second < b.second;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		for(int i=0; i<e; ++i){
			int x, y, z;
			cin >> x >> y >> z;
			vp.push_back({{x,y},z});
		}
		res = 0;
		sort(vp.begin(), vp.end(), cmp);
		for(auto it : vp) Union(it.first.first, it.first.second, it);
		cout << res << endl;
		vp.clear();
	}
}
