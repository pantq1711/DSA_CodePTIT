#include<bits/stdc++.h>
using namespace std;
int count(int x, int Y[], int n, int f[]){
	if(x == 0) return 0;
	if(x == 1) return f[0];
	auto idx = upper_bound(Y, Y+n, x); // tim phan tu dau tien lon hon x 
	int ans = (Y + n) - idx; // [idx, ... n-1];
	ans += f[0] + f[1];
	if(x == 2) {
		ans -= (f[3] + f[4]);
	}
	if(x == 3) ans += f[2];
	return ans;
}
int solve(int X[], int Y[], int n, int m){
	int f[5] = {0};
	for(int i=0; i<n; ++i){
		if(Y[i] < 5) f[Y[i]]++;
	}
	sort(Y, Y+n);
	int res = 0;
	for(int i=0; i<m; ++i){
		res += count(X[i], Y, n, f);
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		int a[n], b[m];
		for(int i=0; i<n; ++i) cin >> a[i];
		for(int i=0; i<m; ++i) cin >> b[i];
		m = sizeof(a) / sizeof(a[0]);
		n = sizeof(b) / sizeof(b[0]);
		cout << solve(a, b, n, m) << endl;
	}
}
