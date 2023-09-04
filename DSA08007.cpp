#include<bits/stdc++.h>
using namespace std;
vector <string> v;
long long n;
bool check(string s){
	return s[0] != '0' && stoll(s) % n == 0 ;
}
bool cmp(string a, string b){
	if(a.size() == b.size()) return a < b;
	return a.size() < b.size();
 }
void ktao(){
	queue <string> q;
	q.push("1");
	while(1){
		int cnt = 0;
		string top = q.front(); q.pop();
		if(check(top)){
			 v.push_back(top);
			 break;
		}
		q.push(top + "0");
		q.push(top + "1");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ktao();
		cout << v[v.size()-1] << endl;
		v.clear();
	}
}
