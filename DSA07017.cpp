#include<bits/stdc++.h>
using namespace std;
void right_greater(int a[], int n, int d[]){
	stack <int> st;
	for(int i=0; i<n; ++i){
		while(!st.empty() && a[i] > a[st.top()]){
			d[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		d[st.top()] = -1;
		st.pop();
	}
}
void right_smaller(int a[], int n, int d[]){
	stack <int> st;
	for(int i=0; i<n; ++i){
			while(st.size() && a[i] < a[st.top()]){
				d[st.top()] = a[i];
				st.pop();
		}
		st.push(i);
	}
	while(st.size()){
		d[st.top()] = -1;
		st.pop();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], rg[n] = {0}, rs[n] = {0};
		for(int &x : a) cin >> x;
		right_greater(a, n, rg);
		right_smaller(a, n, rs);
		for(int i=0; i<n; ++i){
			if(rg[i] == -1)cout << -1 << ' ';
			else cout << rs[rg[i]] << ' ';
		}
		cout << endl;
	}
}
