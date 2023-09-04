#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
vector <string> v;
int l, r;
bool check(string n){
	set <int> s;
	for(int i=0; i<n.size(); ++i) s.insert(stoi(string(1,n[i])));
	return s.size() == n.size() && stoi(n) >= l && stoi(n) <= r;
}
void ktao(){
	queue <string> q;
	for(int i=1; i<=5; ++i) q.push(to_string(i));
	while(1){
		string top = q.front(); q.pop();
		if(stoi(top) > r) break;
		if(check(top)) v.push_back(top);
		for(int i=0; i<=5; ++i){
			string tmp = top + to_string(i);
			q.push(tmp);
		}
	}
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		cin >> l >> r;
		ktao();
		int cnt = 0;
		for(string x : v){
			int tmp = stoi(x);
			if(tmp >= l && tmp <= r) ++cnt;
		}
		cout << cnt << endl;
		v.clear();
	}
}

