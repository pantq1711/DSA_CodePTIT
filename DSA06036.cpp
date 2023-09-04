#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		map <int, int> mp;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a, a+n);
		int cnt = 0, check =0;
		for(int i=0; i<n-2; ++i){
			int l = i + 1, r= n-1;
			while(l < r){
				if(a[l] + a[r] == k - a[i]){
					check = 1;
					break;
				}
				else if(a[l] + a[r] > k - a[i]) --r;
				else ++l;
			}
		}
		if(check) cout << "YES";
		else cout << "NO";
		cout<< endl;
	}
}
