#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		map <char, int> mp;
		for(char &i : s) mp[i]++;
		priority_queue <int> q;
		for(auto it : mp) q.push(it.second);
		while(k--){
			int tmp = q.top();
			q.pop();
			--tmp;
			q.push(max(tmp, 0));
		}
		long long res = 0;
		while(q.size()){
			int tmp = q.top();
			q.pop();
			res += 1ll * tmp * tmp; 
		}
		cout << res << endl;
	}
}
