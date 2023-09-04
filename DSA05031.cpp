#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll f[n+1];
		for(int i=0; i<=n; ++i) f[i] = i;
		for(int i=1; i<=n; ++i)
		{
			for(int j=0; j<=sqrt(i); ++j)
			{
				f[i] = min(f[i], f[i-j*j] + 1);
			}
		}
		cout << f[n] << endl;
	}
}
