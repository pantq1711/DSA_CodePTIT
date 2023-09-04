#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];
void khoitao(){
	F[1] = 1;
	F[2] = 1;
	for(int i=3; i<=92; ++i){
		F[i] = F[i-1] + F[i-2];
	}
}
char find(int n, ll k){
	if (n == 1) return '0';
	if (n == 2) return '1';
	if(k<=F[n-2]){
		return find(n-2, k);
	}
	else
	return find(n-1, k - F[n-2]);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll k;
		cin >> n >> k;
		khoitao();
		cout << find(n, k) << endl;
	}
}
