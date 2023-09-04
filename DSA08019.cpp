#include<bits/stdc++.h>
using namespace std;
vector <string> v;
bool cmp(string a, string b){
	if(a.size() == b.size()) return a > b;
	return a.size() > b.size();
 }
void ktao(){
	queue <string> q;
	q.push("6"); q.push("8");
	while(1){
		string top = q.front(); q.pop();
		if(top.size() > 15) break; 
		v.push_back(top);
		q.push(top + "6");
		q.push(top + "8");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ktao();
		int cnt = 0;
		for(string x : v) if(x.size() <= n) ++cnt;
		cout << cnt << endl;
		sort(v.begin(), v.end(), cmp);
		for(string x : v) if(x.size() <= n) cout << x << ' ';
		cout << endl;
		v.clear();
	}
}
