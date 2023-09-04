#include<bits/stdc++.h>
using namespace std;
const int maxn = (int)1e4;
int snt[maxn+1];
void sang(){
	for(int i=0; i<=maxn; ++i) snt[i] = 1;
	snt[0] = snt[1] = 0;
	for(int i=2; i<=sqrt(maxn); ++i){
		if(snt[i]){
			for(int j=i*i; j<=maxn; j+=i) snt[j] = 0;
		}
	}
}
int bfs(int s, int t){
	queue <pair<int, int>> q;
	q.push({s, 0});
	set <int> se;
	se.insert(s);
	while(q.size()){
		pair <int, int> top = q.front(); q.pop();
		int v = top.first, tt = top.second;
		if(v == t) return tt;
		string tmp = to_string(v);
		for(int i=0; i<4; ++i){
			char y = tmp[i];
			for(char x : {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}){
				if(tmp[i] != x){
					tmp[i] = x;
					int value = stoi(tmp);
					if(value >= 1000 && snt[value]){
						if(!se.count(value)){
							q.push({value, tt + 1});
							se.insert(value);
						}
					}
				}
			}
			tmp[i] = y;
		}
	}
	return -1;
}
int main(){
	sang();
   int t;
   cin >> t;
   while(t--){
   		int s, t;
   		cin >> s >> t;
   		cout << bfs(s, t) << endl;
   }
}

