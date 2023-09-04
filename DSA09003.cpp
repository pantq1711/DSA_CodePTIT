#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v[1005];
		int n, m;
		cin >> n >> m;
		for(int i=0; i<m; ++i){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
		}
		for(int i=1; i<=n; ++i){
			cout << i << ": ";
			sort(v[i].begin(), v[i].end());
			for(int x : v[i]) cout << x << " ";
			cout << endl;
		}
	}
}
