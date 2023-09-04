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
		int n; cin >> n;
		int a[n];
		bool check = 1;
		vector <int> v;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			v.push_back(a[i]);
		}
		for(int x : v) if(count(v.begin(), v.end(), x) > 1){
			cout << x;
			check = 0;
			break;
		}
		if(check) cout << "NO";
		cout << endl;
}
}

