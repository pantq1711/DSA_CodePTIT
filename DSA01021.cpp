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
	if(i == 0) for(int i=1; i<=k; ++i) a[i] = i;
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
   	cin >> n >> k;
   	set <int> s;
   	for(int i=1; i<=k; ++i){
   		cin >> a[i];
   		s.insert(a[i]);
	   }
	int cnt = s.size();
//   	sinh();
   	if(a[1] == n - k + 1) cout << k << endl;
   	else {
   		sinh();
   		for(int i=1; i<=k; ++i) s.insert(a[i]);
   		cout << s.size() - cnt << endl;
	   }
	   }
}

