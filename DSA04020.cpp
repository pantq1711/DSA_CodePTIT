#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; ++i) cin >> a[i];
	int ok = -1;
	for(int i=0; i<n; ++i){
		if(a[i] == k) ok = i;
	}
	if(ok==-1) cout << "NO";
	else cout << ok + 1;
	cout << endl;
}
}

