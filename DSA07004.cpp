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
		int n = s.size(), d = 0;
		stack <int> st;
		for(int i=0; i<n; ++i){
			if(s[i] == '(') st.push(s[i]);
			else {
				if(!st.empty()) st.pop();
				else {
					++d;
					st.push('(');
				}
			}
		}
		cout << d + st.size() / 2 << endl;
	}
}
