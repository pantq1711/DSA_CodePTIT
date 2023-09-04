#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	long long sum = 0;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if(a[i] > 0) sum += 2 * a[i];
	}
	cout << sum;
}
