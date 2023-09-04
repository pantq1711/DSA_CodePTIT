#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		s1 = " " + s1; s2 = " " + s2;
		int F[n+1][m+1];
		memset(F, 0, sizeof(F));
		for(int i=0; i<=n; ++i) F[i][0] = i;
		for(int i=0; i<=m; ++i) F[0][i] = i;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j){
				if(s1[i] == s2[j]){
					F[i][j] = F[i-1][j-1];
				}
				else {
					F[i][j] = min({F[i-1][j], F[i][j-1], F[i-1][j-1]}) + 1;
				}
			}
		}
		cout << F[n][m] << endl;
	}
}
