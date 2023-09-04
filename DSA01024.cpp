#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
vector<string> v;
int n,k;
string a[100];
int dem[100];
void Value(){
	dem[0]=-1;
 for(int i=0;i<n;i++){
 	string s;
 	cin>>s;
 	mp[s]++;
 }
 for(auto x:mp){
 	if(x.second){
 		v.push_back(x.first);
 		x.second=0;
	 }
 }	
 sort(v.begin(),v.end());
 
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=dem[i-1]+1;j<v.size();j++){
		dem[i]=j;
		a[i]=v[j];
		if(i==k){
			in();
		} else {
			Try(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	Value();
	Try(1);
}

