#include<bits/stdc++.h>
using namespace std;
int main(){
	queue <int> q;
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		else if(s == "PRINTFRONT"){
			if(q.empty()) cout << "NONE";
			else cout << q.front();
			cout << endl;
		}
		else {
			if(!q.empty()) q.pop();
			else continue;
		}
	}
}
