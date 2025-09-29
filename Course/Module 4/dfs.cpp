
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

#define N 100005

vector<int> adj[N];
int visited[N];

void dfs(int u){
    cout << u << " ";
    visited[u] = 1;
    
    for(int v: adj[u]){
        if(visited[v]) continue;
        dfs(v);
    } 
 
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        for(int i=0; i < m; i++){
            int u,v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);

        }

        dfs(1);
    }


    return 0;
}