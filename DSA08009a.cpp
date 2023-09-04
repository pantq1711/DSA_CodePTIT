#include<bits/stdc++.h>
using namespace std;
int main(){
	int t1;
	cin >> t1;
	while(t1--){
		int s, t;
		cin >> s >> t;
		set <int> se;
		queue <pair<int,int>> q;
		q.push({s, 0});
		while(!q.empty()){
			pair <int, int> top;
			top = q.front();
			q.pop();
			if(top.first == t){
				cout << top.second << endl;
				break;
			}
			if(top.first > 1 && se.count(top.first - 1) == 0){
				se.insert(top.first - 1);
				q.push({top.first - 1, top.second + 1});
			}
			if(top.first < t && se.count(top.first * 2) == 0){
				se.insert(top.first * 2);
				q.push({top.first * 2, top.second + 1});
			}
		}
		
	}
}

