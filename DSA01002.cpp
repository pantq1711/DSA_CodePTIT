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
    	set <string> st;
    	string s;
    	cin >> s;
    	n = s.length();
   		cin >> k;
   		khoitao();
   		ok = 1;
   		while(ok){
   			string x = "";
   		for(int i=1; i<=k; ++i) x = x + s[a[i] - 1]; 
   		st.insert(x);
   		sinh();
	   }
		for(auto it : st)cout << it << endl;
	}
}

