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
   	cin >> n >> k;
   	set <int> s;
   	int b[n];
   	vector <int> v;
   	for(int i=1; i<=n; ++i){
   		cin >> b[i];
   		s.insert(b[i]);
	   }
   	for(int x : s) v.push_back(x);
   	n = v.size();
   	khoitao();
   	ok = 1;
   	while(ok){
   	for(int i=1; i<=k; ++i) cout << v[a[i]-1] << " ";
   	cout << endl;
   	sinh();
	   }
//	cout << endl;
}

