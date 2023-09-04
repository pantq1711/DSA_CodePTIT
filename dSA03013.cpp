#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		map <char, int> mp;
		int maxx = 0;
		for(char x : s){
			mp[x]++;
			maxx = max(maxx, mp[x]);
		}
		if(s.length() >= maxx * k - (k-1)) cout << 1;
		else cout << -1;
		cout << endl;
	}
}
