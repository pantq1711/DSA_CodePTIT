#include<bits/stdc++.h>
using namespace std;
struct Job{
	int id, deadline, profit;
};
bool cmp(Job a, Job b){
	return a.profit > b.profit;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		Job a[1005];
		for(int i=0; i<n; ++i){
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a, a+n, cmp);
		int used[1005], ans = 0, cnt = 0;
		memset(used, 0, sizeof(used));
		for(int i=0; i<n; ++i){
			for(int j=a[i].deadline-1; j>=0; --j){
				if(!used[j]){
					++cnt;
					ans += a[i].profit;
					used[j] = 1;
					break;
				}
			}
		}
		cout << cnt << " " << ans << endl;
	}
}
