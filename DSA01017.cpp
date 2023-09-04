#include<bits/stdc++.h>
using namespace std;
int a[100], n, dem, ok;
void khoitao(){
	dem = 1;
	a[1] = n;
}
void sinh(){
	int i = dem;
	while(i >= 1 && a[i] == 1) --i;
	if(i==0) ok = 1;
	else {
		int d = dem - i + 1;
		--a[i];
		dem = i;
		int q = d / a[i] , r = d % a[i];
		if(q!=0){
			for(int j=1; j<=q; ++j){
				a[j+i] = a[i];
			}
			dem += q;
		}
		if(r!=0){
			a[dem+1] = r;
			++dem;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		vector <vector<int>> v;
		cin >> n;
		khoitao();
		ok = 0;
		while(!ok){
			vector <int> v1;
			for(int i=1; i<=dem; ++i){
				v1.push_back(a[i]);
			}
			v.push_back(v1);
			sinh();
		}
		cout << v.size() << endl;
		for(int i=0; i<v.size(); ++i){
			cout << "(";
			for(int j=0; j<v[i].size(); ++j){
				cout << v[i][j];
				if(j!=v[i].size()-1) cout << " ";
			}
			cout << ") ";
		}
		cout << endl;
	}
}

