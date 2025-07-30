#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define ll long long
#define F first
#define S second
#define MAX 100001

using namespace std;

ll answer = 0;
ll golds[MAX];
vector<int> adj[MAX];
bool visited[MAX];

ll dfs(int u){
    if(visited[u]) return golds[u];
    visited[u] = true;

    ll minimum = golds[u];

    for(int s : adj[u]){
        minimum = min(minimum, dfs(s));
    }
    
    return minimum;
}

int main(){fastio
    int n, m; cin >> n >> m;

    for(int i = 1; i < n + 1; i++){
        cin >> golds[i];
    }

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i < n + 1; i++){
        if(visited[i]) continue;
        
        ll minimum = dfs(i);

        answer += minimum;
    }

    cout << answer;

}