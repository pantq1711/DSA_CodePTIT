#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(int a, int b){
	ll x = 1ll * a * a + 1ll * b * b;
	int c = sqrt(x);
	if(1ll * c * c == x) return c;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		sort(a, a+n);
		bool ok = 0;
		for(int i=0; i<n-2; ++i){
			for(int j=i+1; j<n-1; ++j){
				int x = check(a[i], a[j]);
				if(x!=0 && binary_search(a+j+1, a+n, x)){
					ok = 1;
//					break;
				}
			}
		}
		if(ok) cout << "YES";
		else cout << "NO"; cout << endl;
	}
}
