#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		if(n < m || 6 * (n-m)  < m ) cout << -1;
		else {
			int x = s * m / n;
			if(x * n == s * m ) cout << x;
			else cout << x + 1;
		}
		cout << endl;
	}
}
