#include<bits/stdc++.h>
using namespace std;
int a[20], n, ok = 1;
void khoitao(){
	for(int i=1; i<=n; ++i) a[i] = 6;
}
void sinh(){
	int i = n;
	while(i>=1 && a[i] == 8){
		a[i] = 6;
		--i;
	}
	if(i==0) ok = 0;
	else a[i] = 8;
}
bool check1(){
	return a[1] == 8 && a[n] == 6;
}
bool check2(){
	for(int i=1; i<n; ++i){
		if(a[i] == 8 && a[i+1] == 8) return 0;
	}
	return 1;
}
bool check3(){
	for(int i=1; i<=n; ++i){
		int cnt = 1;
		int l = i + 1;
		if(a[i] == 6){
			while(a[l] == 6){
			++cnt;
			++l;
			if(cnt>3) return 0;
		}
		}
	}
	return 1;
}
int main(){
	cin >> n;
	khoitao();
	while(ok){
		if(check1() && check2() && check3()) {
			for(int i=1; i<=n; ++i){
			cout << a[i];
		}
		cout << endl;}
		sinh();
		}
//		sinh();
}
