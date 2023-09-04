#include<bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <vector<int>> vs(n+1);
		cin.ignore();
		string s;
		for(int i=1; i<=n; ++i){
			getline(cin, s);
			stringstream ss(s);
			string tmp = "";
			while(ss >> tmp) vs[i].push_back(stoi(tmp));
		}
		for(int i=1; i<=n; ++i){
			sort(vs[i].begin(), vs[i].end());
			for(int j : vs[i]){
				if(j > i) cout << i << ' ' << j << endl;
			}
		}
		cout << endl;
	}
}
