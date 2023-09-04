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
		ll a[n], b[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		for(int i=0; i<n; ++i){
			cin >> b[i];
		}
		sort(a, a+n, greater<ll>());
		sort(b, b+n);
		ll sum = 0;
		for(int i=0; i<n; ++i){
			sum += a[i] * b[i];
		}
		cout << sum << endl;
	}
}
