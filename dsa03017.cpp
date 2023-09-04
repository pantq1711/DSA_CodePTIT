#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; string s;
	cin >> n >> s;
	map <char,int> mp;
	for(int i=0; i<s.length(); ++i){
		mp[s[i]]++;
	}
	priority_queue<int> q;
	for(auto x : mp){
		q.push(x.second);
	}
	if(n >= s.length()) cout << 0;
	else {
		while(n--){
			int t1 = q.top();
			--t1;
			q.pop();
			q.push(t1);
		}
		ll ans = 0;
		while(!q.empty()){
			ans += q.top() * q.top();
			q.pop();
		}
		cout << ans;
	}
	cout << endl;
	}
}
