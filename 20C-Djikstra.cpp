#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'
#define oo 1000000000000000000

using namespace std;

int32_t main(){fastio
    int n, m; cin >> n >> m;

    vector<pair<int, int>> adj[n];
    for(int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        a--, b--;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    vector<int> distance(n, oo), parent(n, -1);
    vector<bool> visited(n, false);
    priority_queue<pair<int, int>> pq;

    distance[0] = 0;
    pq.push({0, 0});

    while(!pq.empty()){
        int a = pq.top().second; pq.pop();
        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]){
            int b = u.first, w = u.second;
            if(distance[a] + w < distance[b]){
                parent[b] = a;
                distance[b] = distance[a] + w;
                pq.push({-distance[b], b});
            }
        }
    }

    if(distance[n - 1] == oo){
        cout << -1 << endl;
        return 0;
    }

    int x = n - 1;
    
    vector<int> ans;
    while(x != 0){
        ans.push_back(x + 1);
        x = parent[x];
    }
    ans.push_back(x + 1);

    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}