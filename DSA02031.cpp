#include<bits/stdc++.h>
using namespace std;
bool nguyenam(char c){
	return c == 'A' || c == 'E';
}
bool check(string s){
	for(int i=1; i<s.size()-1; ++i){
		if(nguyenam(s[i]) && !nguyenam(s[i-1]) && !nguyenam(s[i+1])) return 0;
	}
	return 1;
}
int main(){
	char c;
	cin >> c;
	string s = "";
	for(char x = 'A'; x <=c; ++x) s+= x;
	do{
		if(check(s)) cout << s << endl;
	}
	while(next_permutation(s.begin(), s.end()));
}
