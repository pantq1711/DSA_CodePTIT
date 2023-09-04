#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	int n; cin >> n;
	int a[n], m = n - 1;
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	vector <vector<int>> v;
	for(int i=0; i<m; ++i){
		vector <int> v1(n);
		bool check = 0;
		for(int j=0; j<m-i; ++j){
			if(a[j] > a[j+1]){
				swap(a[j+1], a[j]); 
				check = 1;
			}
		}
		if(!check) break;
//		cout << "Buoc " << i+1 << ": ";
		for(int k=0; k<n; ++k) v1[k] = a[k];
		v.push_back(v1);
//		cout << endl;
	}
	for(int i=v.size()-1; i>=0; --i){
		cout << "Buoc " << i + 1 << ": ";
		for(int x : v[i]) cout << x << " ";
		cout << endl;
	}
	}
}

