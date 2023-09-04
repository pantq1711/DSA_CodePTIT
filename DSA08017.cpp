#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int n;
vector <string> v;
bool cmp(string a, string b){
	if(a.size() == b.size()) return a > b;
	return a.size() > b.size();
}
void ktao(){
	queue <string> q;
	q.push("6"); q.push("8");
	while(!q.empty()){
		string tmp = q.front(); q.pop();
		if(tmp.size() == 15) break;
		v.push_back(tmp);
		q.push(tmp + "6");
		q.push(tmp + "8");
	}
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
		sort(v.begin(), v.end(), cmp);
		for(string x : v) if(x.size() <= n) cout << x << ' ';
		cout << endl;
		v.clear();
	}
}
