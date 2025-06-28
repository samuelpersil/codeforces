#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, value; cin >> n;

    vector<int> graph[n];
    queue<int> q;
    int distance[n];
    int biggest_tree = 0;
    bool visited[n] = {false};
    vector<int> initials;

    for(int i = 0; i < n; i++){
        cin >> value;
        if(value != -1) graph[value - 1].push_back(i);
        else initials.push_back(i);
    }

    for(auto initial : initials){
        visited[initial] = true;
        distance[initial] = 0;
        q.push(initial);
        
        while(!q.empty()){
            int s = q.front(); q.pop();
            for(auto u : graph[s]){
                if(visited[u]) continue;
                visited[u] = true;
                distance[u] = distance[s] + 1;
                q.push(u);
                biggest_tree = max(biggest_tree, distance[u]);
            }
        }
    }
    
    cout << biggest_tree + 1;

    return 0;
}


