#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define ll long long
char find(int n, int k){
	int x = pow(2, n-1);
	if(k == x) return n;
	else if(k < x) return find(n-1, k);
	else return find(n-1,k-x);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << (char) (find(n, k) + 'A' - 1) << endl;
	}
}
