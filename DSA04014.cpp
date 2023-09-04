#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
ll merge(ll a[], ll l, ll m, ll r){
    vector <ll> trai(a+l, a+m+1);
    vector <ll> phai(a+m+1, a+r+1);
    ll ans = 0;
    ll i = 0, j = 0;
    while(i<trai.size() && j < phai.size()){
        if(trai[i] <= phai[j]){
            a[l++] = trai[i];
            ++i;
        }
        else {
            a[l++] = phai[j];
            ++j;
            ans += trai.size() - i;
        }
    }
    while(i < trai.size()){
        a[l++] = trai[i];
        ++i;
    }
    while(j < phai.size()){
        a[l++] = phai[j];
        ++j;
    }
    return ans;
}
ll mergeSort(ll a[], ll l, ll r){
    if(l < r) {
        ll m = (l + r) / 2;
        ll tmp1 = mergeSort(a, l, m);
        ll tmp2 = mergeSort(a, m+1, r);
        return 1ll * (tmp1 + tmp2 + merge(a, l, m, r));
    }
    return 0;
}
int main(){
     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(ll &i : a) cin >> i;
        cout << mergeSort(a, 0, n-1) << endl;
     }
}
