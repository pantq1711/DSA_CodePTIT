#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i) cin >> a[i];
	int maxx = 0, f[n+5];
	memset(f, 0, sizeof(f));
	for(int i=0; i<n; ++i){
		f[a[i]] = f[a[i]-1] + 1;
		maxx = max(maxx, f[a[i]]);
	}
	cout << n - maxx;
}
