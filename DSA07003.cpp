#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	stack <int> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			int x = st.top();
			st.pop();
			if(s[x+1] == '(' && s[i-1] == ')' || i - x == 2) return 1;
		}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
