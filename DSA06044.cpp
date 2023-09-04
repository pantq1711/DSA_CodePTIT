#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	vector <int> v1, v2;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if(i%2==0) v1.push_back(a[i]);
		else v2.push_back(a[i]);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());
	for(int i=0; i<n/2; ++i){
		cout << v1[i] << " " << v2[i] << " ";
	}
	if(n%2==1) cout << v1[n/2];
}
