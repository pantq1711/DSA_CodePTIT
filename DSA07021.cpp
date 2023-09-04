#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <int> st;
		int cnt = 0;
		st.push(-1);
		int n = s.size();
		for(int i=0; i<n; ++i){
			if(s[i] == '(') st.push(i);
			else {
				st.pop();
				if(!st.empty()) cnt = max(cnt, i - st.top());
				else st.push(i);
			}
		}
		cout << cnt << endl;
	}
}
