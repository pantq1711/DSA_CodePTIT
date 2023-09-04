#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		stack <int> st;
		int res[n] = {0};
		res[n-1] = -1;
		st.push(0);
		for(int i=1; i<n; ++i){
			if(a[st.top()] < a[i]){
				while(st.size() && a[i] > a[st.top()]){
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

