#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int a[20], n, ok;
void khoitao(){
	for(int i=1; i<=n; ++i) a[i] = 0;
}
void sinh(){
	int i = n;
	while(i>=1 && a[i] == 1){
		a[i] = 0; 
		--i;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
	}
}
bool check1(){
	return a[1] == 0 && a[n] == 1;
}
bool check2(){
	for(int i=1; i<n; ++i){
		if(a[i] == 0 && a[i+1] == 0) return 0;
	}
	return 1;
}
int main(){
    faster();
    khoitao();
    int t;
    cin >> t;
    while(t--){
    ok = 1;
   	cin >> n;
   	vector <string> v;
   	while(ok){
//   		vector <string> v;
   		if(check1()&&check2()) {
   			string b;
   			for(int i=1; i<=n; ++i){
   			if(a[i] == 0) b += "H";
   			else b += "A";
		   }
		   v.push_back(b);	
		   }
//		sort(v.begin(), v.end());
//		for(string x : v) cout << x << endl;
		sinh();
	}
	sort(v.begin(), v.end());
	for(string x : v) cout << x << endl;
}
}

