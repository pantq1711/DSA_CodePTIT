#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
	int t;
	cin >> t;
	while(t--){
        int n; cin >> n;
        int a[n];
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            q.push(a[i]);
        }
        ll res = 0;
        while(q.size() > 1){
            ll tmp = q.top();
            q.pop();
            tmp += q.top();
            tmp %= mod;
            res += tmp;
            res %= mod;
            q.pop();
            q.push(tmp);
        }
        cout << res << endl;
}
}
