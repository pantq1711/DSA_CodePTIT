#include<bits/stdc++.h>
using namespace std;
int n;
void ktao(){
	queue <string> q;
	q.push("0"); q.push("9");
	while(1){
		string top = q.front(); q.pop();
		if(stoll(top)%n==0 && stoll(top)!=0){
			cout << top << endl;
			break;
		}
		q.push(top + '0');
		q.push(top + '9');
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		if(n==0) cout << 0 << endl;
		else
		ktao();	
	}
}
