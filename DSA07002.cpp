#include<bits/stdc++.h>
using namespace std;
int main(){
	stack <int> st;
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		if(n == "PUSH"){
			int x;
			cin >> x;
			st.push(x);
			cin.ignore();
		}
		else if(n == "POP"){
			if(!st.empty()) st.pop();
		}
		else {
			if(!st.empty()){
				int x = st.top();
				cout << x << endl;
			}
			else cout << "NONE" << endl;
		}
	}
}
