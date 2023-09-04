#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, k;
    cin >> n >> k;
    int a[k];
    for(int i=0; i<k; ++i){
    	a[i] = i + 1;
	}
    ll f[n+1];
    f[0] = 1;
    for(int i=1; i<=n; ++i){
        f[i] = 0;
        for(int c : a){
            if(i >= c){
                f[i] += f[i-c];
                f[i] %= mod;
            }
        }
    }
    cout << f[n] << endl;
	}
}
