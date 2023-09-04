#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int cnt = 0;
		ll x = stoll(n);
		while(x){
			++cnt;
			x/=10;
		}
		ll F[cnt+5];
		F[0] = n[0] - '0';
		ll sum = F[0];
		for(int i=1; i<cnt; ++i){
			F[i] = F[i-1] * 10 + (n[i] - '0') * (i+1);
			sum += F[i];
		} 
		cout << sum << endl;
	}
}
