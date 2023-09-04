#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int a[100][100];
bool check;
void Try(int i, int j, string s){
	if(i==n && j==n){
		cout << s << " ";
		check = 0;
	}
	if(i+1<=n && a[i+1][j]){
		a[i+1][j] = 0;
		s+="D";
		Try(i+1, j, s);
		a[i+1][j] = 1;
		s.pop_back();
	}
	if(j+1<=n && a[i][j+1]){
		a[i][j+1] = 0;
		s += "R";
		Try(i, j+1, s);
		a[i][j+1] = 1;
		s.pop_back();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		check = 1;
		s = "";
		cin >> n;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j) cin >> a[i][j];
		}
		if(!a[1][1]) cout << -1;
		else {
		    Try(1, 1, s);
		if(check) cout << "-1";
		}
		cout << endl;
	}
}
