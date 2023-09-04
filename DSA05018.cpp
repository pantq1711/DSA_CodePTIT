#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int dp[1005][1005];
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		s = " " + s;
		int n = s.size(), ans = 1;
		for(int i=1; i<=n; ++i){
			dp[i][i] = 1;
		}
		for(int len = 2; len <= n; ++len){
			for(int i=1; i<=n-len+1; ++i){
				int j = i + len - 1; // chi so ket thuc;
				if(len == 2) dp[i][j] = (s[i] == s[j]);
				else
				dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
				if(dp[i][j]) ans = max(ans, len);
			}
		}
		cout << ans << endl;
	}
}
