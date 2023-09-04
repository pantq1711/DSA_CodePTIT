#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int f[n+1][n+1];
		int res = 1;
		s = " " + s;
		for(int i=1; i<=n; ++i) f[i][i] = 1;
		for(int len=2; len<=n; ++len){
			for(int i=1; i<=n-len+1; ++i){
				int j = i + len - 1;
				if(len == 2) f[i][j] = s[i] == s[j];
				else {
					f[i][j] = f[i+1][j-1] && s[i] == s[j];
				}
				if(f[i][j])res = max(res, len);
			}
		}
		cout << res << endl;
	}
}
