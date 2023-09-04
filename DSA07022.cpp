#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map <int, int> mp;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			mp[a[i]]++;
		}
		stack <int> st;
		int res[n] = {0};
		res[n-1] = -1;
		st.push(0);
		for(int i=1; i<n; ++i){
			if(mp[a[st.top()]] < mp[a[i]]){
				while(st.size() && mp[a[i]] > mp[a[st.top()]]){
					res[st.top()] = a[i];
					st.pop();
				}
			}
			st.push(i);
		}
		while(!st.empty()){
			res[st.top()] = -1;
			st.pop();
		}
		for(int i=0; i<n; ++i) cout << res[i] << ' ';
		cout << endl;
	}
}
