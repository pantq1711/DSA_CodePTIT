#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	vector <int> v1, v2;
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	for(int i=0; i<n-1; ++i){
		int tmp = i;
		for(int j=i+1; j<n; ++j){
			if(a[j] < a[tmp]){
				tmp = j;
			}
		}
		swap(a[tmp], a[i]);
		cout << "Buoc " << i + 1 << ": ";
		for(int k = 0; k < n; ++k) cout << a[k] << " ";
		cout << endl;
	}
}
