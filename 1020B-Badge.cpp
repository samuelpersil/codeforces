#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

#define MAXN 1001

using namespace std;

int adj[MAXN];

int dfs(int u, bool visited[MAXN]){
    if(visited[u]) return u;
    visited[u] = true;

    return dfs(adj[u], visited);

}

int main(){fastio
    int n; cin >> n;

    for(int i = 1; i < n + 1; i++){
        cin >> adj[i];
    }

    for(int i = 1; i < n + 1; i++){
        bool visited[MAXN] = {false};
        cout << dfs(i, visited) << " ";
    }

}