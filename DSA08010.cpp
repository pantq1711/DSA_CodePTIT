#include<bits/stdc++.h>
using namespace std;
int bfs(int n){
	queue <pair<int, int>> q;
	q.push({n,0});
	set <int> se;
	se.insert(n);
	while(q.size()){
		pair <int,int> top = q.front();
		q.pop();
		if(top.first == 1) return top.second;
		for(int i=2; i<=sqrt(top.first); ++i){
			if(top.first%i==0){
				int m = max(i, top.first/i);
				if(se.count(m) == 0){
					se.insert(m);
					q.push({m, top.second+1});
				}
			}
		}
		if(top.first > 0 && se.count(top.first - 1) == 0){
			se.insert(top.first-1);
			q.push({top.first-1, top.second + 1});
		}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << bfs(n) << endl;
	}
}
