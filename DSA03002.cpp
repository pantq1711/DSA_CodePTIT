#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int a, b;
	cin >> a >> b;
	string m = to_string(a), n = to_string(b), x = m, y = n;
	for(int i=0; i<m.length(); ++i){
		if(m[i] == '5') m[i] = '6';
		if(m[i] == '6') x[i] = '5';
	}
	for(int i=0; i<n.length(); ++i){
		if(n[i] == '5') n[i] = '6';
		if(n[i] == '6') y[i] = '5';
	}
	cout << stoi(y) + stoi(x) << " " << stoi(m) + stoi(n);
}
