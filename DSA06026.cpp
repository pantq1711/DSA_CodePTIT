#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	for(int i=0; i<n-1; ++i){
		bool check = 0;
		for(int j=0; j<n-i-1; ++j){
			if(a[j] > a[j+1]){
				swap(a[j+1], a[j]); 
				check = 1;
			}
		}
		if(!check) break;
		cout << "Buoc " << i+1 << ": ";
		for(int k=0; k<n; ++k) cout << a[k] << " ";
		cout << endl;
	}
}
