#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
ll rev(ll n)
{
    ll res = 0;
    while(n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
ll binPow(ll n, ll p)
{
    if(p == 1) return n;
    ll res = binPow(n, p >> 1) % mod;
    res = (res * res) % mod;
    if(p & 1) res = (res * n) % mod;
    return res % mod;
}
int main()
{
    faster();
    int t;
    ll n, p;
    cin >> t;
    while(t--)
    {
        cin >> n;
        p = rev(n);
        cout << binPow(n, p) << endl;
    }
}
