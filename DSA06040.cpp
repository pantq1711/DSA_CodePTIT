#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long

int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
	int n, m, k; cin >> n >> m >> k;
	ll a[n], b[m], c[k];
	for(int i=0; i<n; ++i) cin >> a[i];
	for(int i=0; i<m; ++i) cin >> b[i];
	for(int i=0; i<k; ++i) cin >> c[i];
	int i = 0, j = 0, l = 0;
	multiset <ll> s;
	while(i < n && j < m && l < k){
		if(a[i] == b[j] && b[j] == c[l]){
			s.insert(a[i]);
			++i;
			++j;
			++l;
		}
		else if(a[i] < b[j]){
			++i;
		}
		else if(b[j] < c[l]){
			++j;
		}
		else ++l;
	}
	if(s.size()==0) cout << "-1";
	else for(ll x : s) cout << x << " ";
	cout << endl;
}
}

