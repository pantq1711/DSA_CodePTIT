#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int n, k;
int a[20], x[20];
void print()
{
    for(int i = 1; i <= k; ++i) cout << x[a[i]] << ' ';
    cout << endl;
}
void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; ++j)
    {
        a[i] = j;
        if(i == k) print();
        else Try(i + 1);
    }
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; ++i) cin >> x[i];
        sort(x + 1, x + 1 + n);
        Try(1);
    }
    return 0;
}
