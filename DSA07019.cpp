#include<bits/stdc++.h>
using namespace std;
void right(int a[], int n, int d[]){
	stack <int> st;
	for(int i=0; i<n; ++i){
		while(!st.empty() && a[i] < a[st.top()]){
			d[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		d[st.top()] = n;
		st.pop();
	}
}
void left(int a[], int n, int d[]){
	stack <int> st;
	for(int i=n-1; i>=0; --i){
			while(st.size() && a[i] < a[st.top()]){
				d[st.top()] = i;
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
		int a[n], r[n] = {0}, l[n] = {0};
		for(int &x : a) cin >> x;
		right(a, n, r);
		left(a, n, l);
		long long res = 0;
		for(int i=0; i<n; ++i){
			res = max(res, 1ll * a[i] * (r[i] - l[i] - 1));
		}
		cout << res << endl;
	}
}

