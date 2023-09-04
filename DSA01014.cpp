#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string binary = string(1, s[0]);
		for(int i=1; i<s.size(); ++i){
			int n = binary.size() - 1;
			if(binary[n] != s[i]) binary += "1";
			else binary += "0";
		}
		cout << binary << endl;
	}
}
