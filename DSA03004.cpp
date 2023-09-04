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
		for(int &x : a) cin >> x;
		sort(a, a+n);
		ll sum1 = 0, sum2 = 0;
		for(int i=0; i<n; ++i){
			if(i%2==0) sum1 = sum1 * 10 + a[i];
			else sum2 = sum2 * 10 + a[i];
		}
		cout << 1ll * (sum1 + sum2) << endl;
	}
}
