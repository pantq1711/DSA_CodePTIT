#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
bool cmp(pair <int,int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		pair <int, int> a[n];
		for(int i=0; i<n; ++i) cin >> a[i].first;
		for(int i=0; i<n; ++i) cin >> a[i].second;
		sort(a, a+n, cmp);
		int cnt = 1, i = 1;
		int end = a[0].second;
		while(i < n){
			if(a[i].first >= end){
				++cnt;
				end = a[i].second;
			}
			++i;
		}
		cout << cnt << endl;
	}
}
