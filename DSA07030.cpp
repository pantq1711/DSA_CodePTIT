#include<bits/stdc++.h>
using namespace std;
int n, m, a[505][505];
vector <int> v[505];
void solve(){
	// hang thu i co cac chieu cao
	for(int j=0; j<m; ++j){
		int cnt = 0;
		for(int i=0; i<n; ++i){
			if(a[i][j] == 0) cnt = 0;
			else ++cnt;
			v[i].push_back(cnt);
		}
	}
}
void right(vector <int> &a, int n, int d[]){
	stack <int> st;
	for(int i=0; i<n; ++i){
		while(!st.empty() && a[i] < a[st.top()]){
			d[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		d[st.top()] = n;
		st.pop();
	}
}
void left(vector <int> &a, int n, int d[]){
	stack <int> st;
	for(int i=n-1; i>=0; --i){
			while(st.size() && a[i] < a[st.top()]){
				d[st.top()] = i;
				st.pop();
		}
		st.push(i);
	}
	while(st.size()){
		d[st.top()] = -1;
		st.pop();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j) cin >> a[i][j];
		}
		solve();
		long long res = 0;
		for(int i=0; i<n; ++i){
			int r[m] = {0}, l[m] = {0};
			right(v[i], v[i].size(), r);
			left(v[i], v[i].size(), l);
			for(int k=0; k<v[i].size(); ++k){
				res = max(res, 1ll * v[i][k] * (r[k] - l[k] -1));
			}
		}
		for(int i=0; i<505; ++i) v[i].clear();
		cout << res << endl;
	}
}
