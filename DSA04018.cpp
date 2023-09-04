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
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i) cin >> a[i];
	int ok = 0;
	for(int i=0; i<n; ++i){
		if(a[i] == 0) ++ok;
	}
	cout << ok << endl;
}
}

