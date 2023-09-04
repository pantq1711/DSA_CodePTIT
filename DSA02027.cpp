#include<bits/stdc++.h>
using namespace std;
int n,C[100][100], x[100], ans, cmin;
bool used[100];
void Try(int i, int sum){
	for(int j=2; j<=n; ++j){
		if(!used[j]){
			x[i] = j;
			used[j] = 1;
			sum += C[x[i-1]][x[i]];
			if(i==n){
				ans = min(ans, sum + C[x[n]][1]);
			}
			else if(sum + (n-i) * cmin < ans) Try(i+1, sum);
			used[j] = 0;
			sum -= C[x[i-1]][x[i]];
		}
	}
}
int main(){
		ans = 1e9, cmin = 1e9;
		cin >> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin >> C[i][j];
			cmin = min(cmin, C[i][j]);
		}
	}
	memset(used, 0, sizeof(used));
	x[1] = 1;
	Try(2, 0);
	cout << ans << endl;
}
