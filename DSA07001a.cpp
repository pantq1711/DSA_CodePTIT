#include<bits/stdc++.h> //khai bao thu vien
using namespace std;
int main(){
	stack <int> st;
	string n;
	while(cin >> n){
		if(n == "push"){
			int x;
			cin >> x;
			st.push(x);
			cin.ignore();
		}
		else if(n == "pop"){
			if(!st.empty()) st.pop();
			else {
				cout << "empty";
				break;
			}
		}
		else {
			if(!st.empty()){
				vector <int> v;
				while(!st.empty()){
					int x = st.top();
					v.push_back(x);
					st.pop();
				}
				for(int i=v.size()-1; i>=0; --i){
					cout << v[i] << ' ';
					st.push(v[i]);
				}
				cout << endl;
			}
			else {
				cout << "empty";
				break;
			}
		}
	}
}
