#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int main(){
	int n;
	cin >> n;
	int a[n];
	multiset <int> ms;
	vector <vector<int>> v;
	for(int i=0; i<n; ++i){
		vector <int> v1;
		cin >> a[i];
		ms.insert(a[i]);
		for(int i : ms) v1.push_back(i);
		v.push_back(v1);
	}
	for(int i=v.size()-1; i>=0; --i){
		cout << "Buoc " << i << ": ";
		for(int x : v[i]){
			cout << x << " ";
		}
		cout << endl;
	}
}
