#include<bits/stdc++.h>
using namespace std;
int main(){
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> ke[1005];
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j){
				int x;
				cin >> x;
				if(x && i < j){
					ke[i].push_back(j);
					ke[j].push_back(i);
				}
			}
		}
		for(int i=1; i<=n; ++i){
			for(int x : ke[i]) cout << x << " ";
			cout << endl;
		}
		cout << endl;
	}
}
