#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int cnt = 0;
	stack <char> st;
	for(char x : s){
		if(x == '(') st.push(x);
		else {
			if(st.size()){
				st.pop();
				cnt += 2;
			}
			else continue;
		}
	}
	return cnt;
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
