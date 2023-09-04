#include<bits/stdc++.h>
using namespace std;
int k, n, a[100];
bool cot[100], nguoc[100], xuoi[100];
int x[100][100], ans;
void Try(int i){
	for(int j=1; j<=n; ++j){
		if(!cot[j] && !nguoc[i-j+n] && !xuoi[i+j-1]){
			a[i] = j;
			cot[j] = 1;
			nguoc[i-j+n] = 1;
			xuoi[i+j-1] = 1;
			if(i==n){
				int tong = 0;
				for(int k=1; k<=n; ++k){
					tong += x[k][a[k]];
				}
				ans = max(ans, tong);
				}
			else Try(i+1);
			cot[j] = 0;
			nguoc[i-j+n] = 0;
			xuoi[i+j-1] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ans = 0;
		n = 8;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j) cin >> x[i][j];
		}
	Try(1);
	cout << ans << endl;
	}
}
