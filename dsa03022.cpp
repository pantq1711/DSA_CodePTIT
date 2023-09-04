#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		sort(a, a+n);
		cout << max(a[n-1] * a[n-2] * a[n-3], a[0] * a[1] * a[n-1]);
//	}
}
