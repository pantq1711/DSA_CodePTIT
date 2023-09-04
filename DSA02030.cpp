#include<bits/stdc++.h>
using namespace std;
char c;
int a[1000], n;
void Try(int i, char x){
	for(int j=x; j<=c; ++j){
		a[i] = j;
		if(i==n){
			for(int k=1; k<=n; ++k) cout << (char)a[k];
			cout << endl; 
		}
		else Try(i+1, j);
	}
}
int main(){
	cin >> c >> n;
	Try(1, 'A');
}
