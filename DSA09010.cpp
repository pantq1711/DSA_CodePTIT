#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];
int cnt;
void DFS(int u){
    ++cnt;
    visited[u] = 1;
    for(int x : ke[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int t = 1;
     cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        bool ok = 0;
        memset(visited, 0, sizeof(visited));
        for(int i=1; i<=m; ++i){
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            // ke[y].push_back(x);
        }
        for(int i=1; i<=n; ++i){
            memset(visited, 0, sizeof(visited));
            cnt = 0;
            DFS(i);
            if(cnt != n){
                ok = 1;
                break;
            }
        }
        if(ok) cout << "NO";
        else cout << "YES";
        cout << endl;
        for(int i=1; i<=n; ++i) ke[i].clear();
    }
}
