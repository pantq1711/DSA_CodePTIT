#include<bits/stdc++.h>
using namespace std;
int a[20], n, check, k;
void khoitao(){
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
}
void sinh(){
	int i = n;
	while(i>=1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i==0) check = 0;
	else {
		a[i] = 1;
	}
}
bool check1(){
	int cnt = 0, res = 0;
	for(int i=1; i<=n; i++){
		if(a[i] == 0) cnt++;
		else cnt = 0;
		if(cnt>k) return 0;
		if(cnt==k) res++;
	}
	return res == 1;
}
int main(){
		vector <string> v;
		int cnt = 0;
		check = 1;
		cin >> n >> k;
		khoitao();
		while(check){
			if(check1()){
			string x = ""; 
				++cnt;
				for(int i=1; i<=n; i++){
				if(a[i]) x+="B";
				else x+="A";
			}
			v.push_back(x);
			}
			sinh();
		}
		cout << cnt << endl;
		sort(v.begin(), v.end());
		for(auto x : v) cout << x << endl;
	}
