#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> a(n);
		for(int &x : a) cin >> x;
		--n;
		int res = -1;
		for(int i=0; i<n; ++i) if(a[i] > a[i+1]) res = i + 1;
		if(res == -1){
			if(a[0] <= a[n-1]) cout << 0 << endl;
			else cout << n << endl;
		}
		else cout << res << endl;
	}
}
