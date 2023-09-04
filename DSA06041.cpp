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
	int n, k; cin >> n;
	int a[n];
	map <int, int> mp;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		mp[a[i]]++;
	}
	bool check = 0;
	for(auto it : mp){
		if(it.second > n/2){
			check = 1;
			cout << it.first;
			break;
		}
	}
	if(!check) cout << "NO";
	cout << endl;
}
}

