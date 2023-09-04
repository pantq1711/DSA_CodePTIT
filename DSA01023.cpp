#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int n, k, ok;
int a[1000];
void khoitao(){
	for(int i=1; i<=k; ++i) a[i] = i;
}
void sinh(){
	int i = k;
	while(i>=1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0) ok = 0;
	else{
		++a[i];
		for(int j=i+1; j<=k; ++j) a[j] = a[j-1] + 1;
	}
}
int main(){
    faster();
    int t;
    cin >> t;
    while(t--){
   	vector <string> v;
		cin >> n >> k;
		string tmp = "";
		khoitao();
		ok = 1;
		int b[k];
		for(int i=1; i<=k; ++i){
			cin >> b[i];
			tmp += to_string(b[i]);
		}
		while(ok){
			string s;
			for(int i=1; i<=k; ++i) s = s + to_string(a[i]);
			v.push_back(s);
			sinh();
		}
		int res = 0;
		for(int i=0; i<v.size(); ++i){
			if(v[i] == tmp) res = i;
		}
		cout << res + 1 << endl;
//		for(auto it : v) cout << it << " ";
	}
}

