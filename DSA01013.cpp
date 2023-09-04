#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res = string(1, s[0]);
		for(int i=0; i<s.size()-1; ++i){
			if(s[i] != s[i+1]) res += "1";
			else res += "0";
		}
		cout << res << endl;
	}
}
