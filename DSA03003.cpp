#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		sort(a, a+n);
		ll sum = 0;
		for(int i=0; i<n; ++i){
			sum += a[i] * i;
			sum %= mod;
		}
		cout << sum << endl;
	}
}
