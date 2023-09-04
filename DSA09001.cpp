#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 1;
    cin >> t;
	while(t--){
		vector <int> ke[1005];
		int n, m;
		cin >> n >> m;
		for(int i=0; i<m; ++i)
		{
			int x,y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1; i<=n; ++i){
			cout << i << ": ";
			sort(ke[i].begin(), ke[i].end());
			for(int x : ke[i]) cout << x << " ";
			cout << endl;
		}
		cout << endl;
	}
}
