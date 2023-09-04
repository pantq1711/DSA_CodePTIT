#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int n, int d[]){
	stack <int> st;
	for(int i=n-1; i>=0; --i){
		while(st.size() && a[i] > a[st.top()]){
			d[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		d[st.top()] = -1;
		st.pop();
	}
	for(int i=0; i<n; ++i){
		cout << i - d[i] << ' ';
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], res[n];
		for(int i=0; i<n; ++i) cin >> a[i];
		solve(a, n, res);
	}
}
