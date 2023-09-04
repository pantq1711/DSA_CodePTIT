#include<bits/stdc++.h>
using namespace std;
int main(){
		int n, k;
		cin >> n >> k;
		multiset <int> s;
		int a[n], b[k];
		map <int, int> mp;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			s.insert(a[i]);
			mp[a[i]]++;
		}
		for(int i=0; i<k; ++i) cin >> b[i];
		for(int i=0; i<k; ++i){
			auto it = lower_bound(s.begin(),s.end(), b[i]);
			--it;
			int x = distance(s.begin(), it);
			if(binary_search(s.begin(), s.end(), b[i])!=-1&&mp[b[i]]!=0){
				cout << b[i] << endl;
				--mp[b[i]];
				if(mp[b[i]]==0) s.erase(s.find(b[i]));
			} 
			else if(mp[a[x]]!=0){
				cout << a[x] << endl;
				--mp[a[x]];
				if(mp[a[x]]==0) s.erase(s.find(a[x]));
			}
			else cout << "-1" << endl;
			}
}
