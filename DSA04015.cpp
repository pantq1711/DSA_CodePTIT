#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll x;
		cin >> n >> x;
		vector <ll> v(n);
		for(ll &i : v) cin >> i;
		int res = lower_bound(v.begin(), v.end(), x) - v.begin();
		if(v[res] != x) --res;
		if(res < 0) cout << -1;
		else cout << res + 1;
		cout << endl;
	}
}
