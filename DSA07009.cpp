#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--){
    	string s, tmp;
    	cin >> s;
    	stack <string> st;
    	int n = s.size() - 1;
    	for(int i=n; i>=0; --i){
    		tmp = "";
    		if(s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '*'){
    			tmp += '(' + st.top();
    			st.pop();
    			tmp += s[i] + st.top() + ')';
    			st.pop();
    			st.push(tmp);
			}
    		else st.push(string(1,s[i]));
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
