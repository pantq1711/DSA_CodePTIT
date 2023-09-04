#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
bool check(int a[], int b[], int n){
	int l = 0, r = n - 1;
	while(l < r){
		if((a[l] == b[r] && a[r] == b[l]) || (a[l] == b[l] && a[r] == b[r])){
			++l;
			--r;
		}
		else return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		if(check(a, b, n)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
