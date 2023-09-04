#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		ll cnt = 0;
		sort(a, a+n);
		for(int i=0; i<n; ++i){
			if(a[i] > k) break;
			for(int j=i+1; j<n; ++j){
				auto it = upper_bound(a + j + 1, a + n, k - a[i] - a[j] - 1);
				if(it - a > j) cnt += it - a - j - 1;
				else break;
			}
		}
		cout << cnt << endl;
	}
}
