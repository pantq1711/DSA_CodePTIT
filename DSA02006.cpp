#include<bits/stdc++.h>
using namespace std;
int x[20], n, a[20], check, sum, P;
void Try(int i, int sum){
	for(int j=1; j<=n; ++j){
		if(sum + a[j] <= P && x[i-1] < a[j]){
			x[i] = a[j];
			if(sum + a[j] == P){
				check = 1;
				cout << "[";
				for(int k=1; k<i; ++k){
					cout << x[k] << " ";
				}
				cout << x[i] << "] ";
			}
			else Try(i+1, sum + a[j]);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		check = 0;
		cin >> n >> P;
		for(int i=1; i<=n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		Try(1,0);
		if(!check) cout << -1;
		cout << endl;
	}
}
//[5 10 15 20] [5 20 25] [10 15 25]
//[5 10 15 20] [5 20 25] [10 15 25]
//[5 10 15 20] [5 20 25] [10 15 25]
