#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	vector <vector<int>> v;
	for(int &x : a) cin >> x;
	for(int i=0; i<n-1; ++i){
		int min = i;
		vector <int> v1(n);
		for(int j=i+1; j<n; ++j){
			if(a[j] < a[min]) min = j;
		}
		swap(a[min], a[i]);
		for(int k=0; k<n; ++k) v1[k] = a[k];
		v.push_back(v1);
	} 
	for(int i=v.size()-1; i>=0; --i){
		cout << "Buoc " << i + 1 << ": ";
		for(int x : v[i]) cout << x << " ";
		cout << endl; 
	}
}
