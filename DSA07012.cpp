#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s, tmp;
		cin >> s;
		stack <string> st;
		for(int i=0; i<s.size(); ++i){
			if(isalpha(s[i])) st.push(string(1, s[i]));
			else {
				tmp = st.top();
				st.pop();
				tmp = st.top() + s[i] + tmp;
				st.pop();
				tmp = '(' + tmp + ')';
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
