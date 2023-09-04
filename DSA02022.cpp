#include<bits/stdc++.h>
using namespace std;
int n, ok, a[1000];
void khoitao() {
	for(int i=1; i<=n; i++) 
		a[i] = 0;
} 
void sinh() {
	int i = n;
	while(i>=1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else {
		a[i] = 1;
	}
}
bool check(){
	return a[5] && !(!a[1] && !a[2]) && (!a[3] && a[4]) ;
}
int main() {
	n = 8;
		khoitao();
		ok = 1;
		vector <string> v;
		while(ok) {
			if(check()){
				string s;
				for(int i=1; i<=n; i++) {
				if(a[i]) s+='2';
				else s+='0';
			}
			s.insert(2, "/");
			s.insert(5, "/");
			v.push_back(s);
			}
			sinh();
		}
		for(auto x : v) cout << x << endl;
//		cout << endl;
}
//02/02/2000\n02/02/2002\n02/02/2020\n02/02/2022\n02/02/2200\n02/02/2202\n02/02/2220\n02/02/2222\n20/02/2000\n20/02/2002\n20/02/2020\n20/02/2022\n20/02/2200\n20/02/2202\n20/02/2220\n20/02/2222\n22/02/2000\n22/02/2002\n22/02/2020\n22/02/2022\n22/02/2200\n22/02/2202\n22/02/2220\n22/02/2222


