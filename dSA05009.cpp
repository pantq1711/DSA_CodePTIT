#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int n, a[100], x[100], k, s;
bool used[100], ok;
void Try(int i, int cnt, int sum){
	if(ok) return;
	if(cnt == k){
		ok = 1;
		return;
	}
	for(int j=1; j<=n; ++j){
		if(!used[j] && sum + a[j] <= s){
			x[i] = a[j];
			used[j] = 1;
			if(sum + a[j] == s){
				Try(i+1, cnt+1, 0);
			}
			else Try(i+1, cnt, sum + a[j]);
			used[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		cin >> n;
		k = 2, s = 0;
		for(int i=1; i<=n; ++i){
			cin >> a[i];
			s+=a[i];
		}
		if(s % k == 0){
			s /= k;
			Try(1, 0, 0);
			cout << "YES";
		}
		else cout << "NO";
		cout << endl;
	}
}
