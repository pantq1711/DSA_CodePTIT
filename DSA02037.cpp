#include<bits/stdc++.h>
using namespace std;
int n;
int a[20];
vector<vector<int>> res;
vector <int> v;
bool Prime(int n){
	for(int i=2; i<=sqrt(n); ++i){
		if(n%i==0) return 0;
	}
	return n > 1;
}
void Try(int i, int sum = 0)
{
    if(Prime(sum)) res.push_back(v);
    if(i > n) return;
    for(int j = i; j <= n; ++j)
    {
        v.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        v.pop_back();
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + 1 + n, greater<int>());
        Try(1);
        vector<string> vs;
        sort(res.begin(), res.end());
        for(auto &i : res)
        {
            for(int &j : i) cout << j << ' ';
            cout << endl;
        }
        v.clear();
        res.clear();
    }
    return 0;
}
