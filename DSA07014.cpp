#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	reverse(s.begin(), s.end());
	stack <int> st;
	int n = s.size();
	for(int i=0; i<n; ++i){
		if(isdigit(s[i])) st.push(s[i] - '0');
		else {
			int x = st.top();
			st.pop();
			int y = st.top();
			st.pop();
			if(s[i] == '+') st.push(x + y);
			else if(s[i] == '*') st.push(x * y);
			else if(s[i] == '-') st.push(x - y);
			else st.push(x/y);
		}
	}
	return st.top();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
}
