#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int uutien(char c){
	if(c == '-' || c == '+') return 1;
	if(c == '*' || c == '/') return 2;
	if(c == '^') return 3;
	return 0; // (
}
int main(){
	faster();
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		string res = "";
		stack <char> st;
		for(int i=0; i<n; ++i){
			if(s[i] == '(') st.push(s[i]);
			else if(isalpha(s[i])) res += s[i];
			else if(s[i] == ')'){
				if(!st.empty()){
					while(st.top() != '('){
						res += st.top();
						st.pop();
					}
					st.pop(); // xoa dau mo ngoac
				}
			}
			else {
				while(!st.empty() && uutien[s[i]] <= uutien[st.top()]){
					res += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}		
		cout << res << endl;
	}
}
