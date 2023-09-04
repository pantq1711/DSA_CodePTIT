#include<bits/stdc++.h>
using namespace std;
vector <string> v;
int n;
void ktao(){
	queue <string> q;
	q.push("1");
	while(1){
		string top = q.front(); q.pop();
		if(v.size() == n) break; 
		v.push_back(top);
		q.push(top + "0");
		q.push(top + "1");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
		for(auto it : v) cout << it << ' ';
		cout << endl;
		v.clear();
	}
}
