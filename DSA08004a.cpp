#include<bits/stdc++.h>
using namespace std;
void solve(string s, int k){
	map <char, int> mp;
	for(char x : s) mp[x]++;
	priority_queue <int> q;
	for(auto it : mp) q.push(it.second);
	while(k--){
		int tmp = q.top();
		--tmp;
		q.pop();
		q.push(max(tmp, 0));
	}
	long long res = 0;
	while(q.size()){
		res += 1ll * q.top() * q.top();
		q.pop();
	}
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		string s;
		cin >> k >> s;
		solve(s, k);
	}
}
