#include<bits/stdc++.h>
using namespace std;
int solve(vector <int> &a, vector <int> &b){
	if(a.size() == 0 || b.size() == 0) return 0;
	if(a.size() == 1){
		int cnt = 0;
		for(int x : b){
			if(x < a[0]) ++cnt;
		}
		return cnt;
	}
	if(b.size() == 1){
		int cnt = 0;
		for(int x : a){
			if(x > b[0]) ++cnt;
		}
		return cnt;
	}
	vector <int> a_left(a.begin(), a.begin() + a.size()/2);
	vector <int> a_right(a.begin() + a.size()/2, a.end());
	vector <int> b_left(b.begin(), b.begin() + b.size()/2);
	vector <int> b_right(b.begin() + b.size() / 2, b.end());
	int cnt = 0;
	cnt += solve(a_left, b_left);
	cnt += solve(a_left, b_right);
	cnt += solve(a_right, b_left);
	cnt += solve(a_right, b_right);
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		vector <int> a(n), b(m);
		for(int i=0; i<n; ++i) cin >> a[i];
		for(int i=0; i<m; ++i) cin >> b[i];
		cout << solve(a, b) << endl;
	}
}
