#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define F first
#define S second

using namespace std;

int main(){fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char matrix[n][n];
        vector<pair<int, int>> vertices;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> matrix[i][j];
                if(matrix[i][j] == '*') vertices.push_back({i, j});
            }
        }

        if(vertices[0].F != vertices[1].F && vertices[0].S != vertices[1].S){
            matrix[vertices[0].F][vertices[1].S] = '*';
            matrix[vertices[1].F][vertices[0].S] = '*';
        }
        else{
            if(vertices[0].F == vertices[1].F){
                int ind = (vertices[0].F == 0 ? 1 : 0);
                matrix[ind][vertices[0].S] = '*';
                matrix[ind][vertices[1].S] = '*';
            }
            else{
                int ind = (vertices[0].S == 0 ? 1 : 0);
                matrix[vertices[0].F][ind] = '*';
                matrix[vertices[1].F][ind] = '*';
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}