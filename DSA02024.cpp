#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
int a[20], n, x[20];
vector <string> v;
void Try(int i, int bd){
	for(int j=bd; j<=n; ++j){
		if(a[j] > x[i-1]){
			x[i] = a[j];
			if(i >= 2){
				string s = "";
				for(int k=1; k<=i; ++k) s+=to_string(x[k]) + " ";
				v.push_back(s); 
			}
			Try(i+1, j+1);
		}
	}
}
int main(){
		cin >> n;
		for(int i=1; i<=n; ++i) cin >> a[i];
		Try(1, 1);
		sort(v.begin(), v.end());
		for(string x : v) cout << x << endl;
}
