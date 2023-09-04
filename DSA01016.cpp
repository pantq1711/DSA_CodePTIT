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
			a[dem+1] = 1;
			++dem;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		khoitao();
		ok = 0;
		while(!ok){
			cout << "(";
			for(int i=1; i<dem; ++i){
				cout << a[i] <<  " ";
			}
			cout << a[dem];
			cout << ") ";
			sinh();
		}
		cout << endl;
	}
}

