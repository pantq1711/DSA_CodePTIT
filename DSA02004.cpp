#include<bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
string s;
bool ok;
void Try(int i, int j, string s){
	if(i==n && j == n) {
		cout << s << " ";
		ok = 1;
	}
	if(i+1 <= n && a[i+1][j]){
		a[i][j] = 0;
		Try(i+1, j, s + "D");
		a[i][j] = 1;
	}
	if(j-1 >= 1 && a[i][j-1]){
		a[i][j] = 0;
		Try(i, j-1, s + "L");
		a[i][j] = 1;
	}	
	if(j+1 <=n && a[i][j+1]){
		a[i][j] = 0;
		Try(i, j+1, s + "R");
		a[i][j] = 1;
	}
	if(i-1 >= 1 && a[i-1][j]){
		a[i][j] = 0;
		Try(i-1, j, s + "U");
		a[i][j] = 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j) cin >> a[i][j];
	}
		if(!a[1][1]) cout << -1;
		else {
			s = "";
	Try(1, 1, s);
	if(!ok) cout << -1;
		}
		cout << endl;
	}
}
