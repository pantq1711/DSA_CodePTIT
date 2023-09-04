#include<bits/stdc++.h>
using namespace std;
int main(){
// 	queue <int> q;
	int t;
	cin >> t;
	while(t--){
	    queue <int> q;
		int m;
		cin >> m;
		while(m--)
		{
			int n;
			cin >> n;
			if(n == 3){
				int x;
				cin >> x;
				q.push(x);
			}
			else if(n == 1) cout << q.size();
			else if(n == 2){
				if(q.empty()) cout << "YES";
				else cout << "NO";
			}		
			else if(n == 4){
				if(!q.empty()) q.pop();
				else continue;
			}
			else if(n == 5){
				if(!q.empty()) cout << q.front();
				else cout << -1;
			}
			else{
				if(!q.empty()) cout << q.back();
				else cout << -1;
			}
			cout << endl;
		}
		cout << endl;
	}
}
