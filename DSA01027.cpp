#include<bits/stdc++.h>
using namespace std;
int n, ok = 1, a[20];
void khoitao(){
	for(int i=1; i<=n; ++i) a[i] = i;
}
void sinh(){
	int i = n - 1;
	while(i >=1 && a[i+1] < a[i]) --i;
	if(i==0) ok = 0;
	else {
		int j = n;
		while(a[j] < a[i]) --j;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
}
int main(){
	cin >> n;
	khoitao();
	int b[n];
	for(int i=1; i<=n; ++i) cin >> b[i];
	sort(b+1, b+n+1);
	while(ok){
		for(int i=1; i<=n; ++i) cout << b[a[i]] << " ";
		cout << endl;
		sinh();
	}
}
