#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
string s;
int n, ok;
void sinh(){
	int i = n - 1;
	while(n >= 0 && s[i] >= s[i+1]) --i;
	if(i==-1) ok = 0;
	else {
		int j = s.length() - 1;
		while(j>=0 && s[i] >= s[j]) --j;
		swap(s[j], s[i]);
		reverse(s.begin()+i+1, s.end());
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a; cin >> a;
		ok = 1;
		cin >> s;
		n = s.length() - 1;
		sinh();
		cout << a << " ";
		if(ok==0) cout << "BIGGEST";
		else cout << s;
		cout << endl;
	}
}
