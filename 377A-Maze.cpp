#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MAXN 500
#define F first
#define S second

using namespace std;

string matrix[MAXN];
bool visited[MAXN][MAXN];
int n, m, k;

void dfs(pair<int, int> u){
    if(visited[u.F][u.S]) return;
    visited[u.F][u.S] = true;

    pair<int, int> adjs[] = {{u.F - 1, u.S}, {u.F, u.S -1}, {u.F, u.S + 1}, {u.F + 1, u.S}};
    for(auto adj : adjs){
        if(adj.F >= 0 && adj.F < n && adj.S >= 0 && adj.S < m && matrix[adj.F][adj.S] == '.'){
            dfs(adj);
        }
    }
    if(k){
        matrix[u.F][u.S] = 'X';
        k--;
    }
}

signed main(){fastio
    cin >> n >> m >> k;

    pair<int, int> start = {-1, -1};
    
    for(int i = 0; i < n; i++){
        cin >> matrix[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] != '#'){
                start = {i, j};
                break;
            }
        }
    }

    dfs(start);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}