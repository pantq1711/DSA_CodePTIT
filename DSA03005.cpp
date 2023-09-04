#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a+n);
		int x = min(k, n-k);
		int sum1 = 0, sum2 = 0;
		for(int i=0; i<x; ++i) sum1 += a[i];
		for(int i=x; i<n; ++i) sum2 += a[i];
		cout << sum2 - sum1 << endl;
}
}
