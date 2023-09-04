#include<bits/stdc++.h>
using namespace std;
int main(){
	stack <int> st;
	string s;
	while(cin >> s){
		int n;
		if(s == "push") {
			cin >> n;
			st.push(n);
			cin.ignore();
		}
		else if(s == "pop"){
			if(!st.empty()) st.pop();
			else {
				cout << "empty";
				break;
			}
		}
		else {
			if(st.empty()) {
				cout << "empty";
				break;
			}
			vector <int> v;
			while(!st.empty()){
				v.push_back(st.top());
				st.pop();
			}
			for(int i=v.size()-1; i>=0; --i){
				st.push(v[i]);
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
}
