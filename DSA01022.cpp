#include<bits/stdc++.h>
using namespace std;
int a[20], ok, n;
void khoitao(){
	for(int i=1; i<=n; ++i) a[i] = i;
}
void sinh(){
	int i = n - 1;
	while(i>=1 && a[i] > a[i+1]) --i;
	if(i == 0) ok = 0;
	else {
		int j = n;
		while(a[j] < a[i]) --j;
		swap(a[j], a[i]);
		reverse(a+i+1, a+n+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		vector <string> v;
		cin >> n;
		string tmp = "";
		khoitao();
		ok = 1;
		int b[n];
		for(int i=1; i<=n; ++i){
			cin >> b[i];
			tmp += to_string(b[i]);
		}
		while(ok){
			string s;
			for(int i=1; i<=n; ++i) s = s + to_string(a[i]);
			v.push_back(s);
			sinh();
		}
		int res = 0;
		for(int i=0; i<v.size(); ++i){
			if(v[i] == tmp) res = i;
		}
		cout << res + 1 << endl;
	}
}
