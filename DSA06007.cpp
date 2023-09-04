#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		bool check = 0;
		for(int i=0; i<n; ++i){
			for(int j=i+1; j<n; ++j){
				ll x = sqrt(a[i]*a[i] + a[j] * a[j]);
				if(1ll * x * x == 1ll * a[i]* a[i] + 1ll * a[j] * a[j]){
					check = 1;
					break;
				}
			}
		}
		if(check) cout << "YES";
		else cout << "NO"; cout << endl;
	}
}
