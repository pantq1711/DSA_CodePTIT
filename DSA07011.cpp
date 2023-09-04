#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s, tmp;
		cin >> s;
		stack <string> st;
		string res = "";
		for(int i=0; i<s.size(); ++i){
			if(isalpha(s[i])) st.push(string(1, s[i]));
			else {
				tmp = st.top();
				st.pop();
				tmp = st.top() + tmp;
				st.pop();
				tmp = s[i] + tmp;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
