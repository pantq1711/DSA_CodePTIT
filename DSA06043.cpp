#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], f[n];
		cin >> a[0];
		f[0] = a[0];
		int sum = a[0];
		for(int i=1; i<n; ++i){
			cin >> a[i];
			sum += a[i];
			f[i] = f[i-1] + a[i];
		}
		bool check = 0;
		for(int i=0; i<n; ++i){
			if(f[i] - a[i] == sum - f[i]) {
				check = 1;
				cout << i + 1 << endl;
				break;
			}
		}
		if(!check) cout << "-1" << endl;
	}
}
