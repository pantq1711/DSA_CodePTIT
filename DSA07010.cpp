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
    	string s;
    	cin >> s;
    	stack <string> st;
    	int n = s.size() - 1;
    	for(int i=n; i>=0; --i){
    		if(isalpha(s[i])) st.push(string(1, s[i]));
    		else {
    			string x = st.top(); st.pop();
    			string y = st.top(); st.pop();
    			string tmp = x + y + s[i];
    			st.push(tmp);
			}
		}
		while(st.size()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
